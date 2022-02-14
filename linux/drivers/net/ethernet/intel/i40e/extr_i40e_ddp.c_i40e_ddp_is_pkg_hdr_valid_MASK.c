
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct net_device {int dummy; } ;
struct i40e_ddp_version {scalar_t__ major; int draft; int update; int minor; } ;
struct i40e_package_header {int segment_count; size_t* segment_offset; struct i40e_ddp_version version; } ;
struct i40e_metadata_segment {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,...) ;

__attribute__((used)) static bool FUNC_1(struct net_device *VAR_0,
          struct i40e_package_header *VAR_1,
          size_t VAR_2)
{
 u32 VAR_3 = 0xFFFFFFFFU & VAR_2;
 u32 VAR_4;
 u32 VAR_5;

 if (!VAR_1)
  return 0;

 if (VAR_1->version.major > 0) {
  struct i40e_ddp_version VAR_6 = VAR_1->version;

  FUNC_0(VAR_0, "Unsupported DDP profile version %u.%u.%u.%u",
      VAR_6.major, VAR_6.minor, VAR_6.update, VAR_6.draft);
  return 0;
 }
 if (VAR_2 > VAR_3) {
  FUNC_0(VAR_0, "Invalid DDP profile - size is bigger than 4G");
  return 0;
 }
 if (VAR_3 < (sizeof(struct i40e_package_header) +
  sizeof(struct i40e_metadata_segment) + sizeof(u32) * 2)) {
  FUNC_0(VAR_0, "Invalid DDP profile - size is too small.");
  return 0;
 }

 VAR_4 = sizeof(u32) * (VAR_1->segment_count + 2U);
 if (VAR_3 < VAR_4) {
  FUNC_0(VAR_0, "Invalid DDP profile - too many segments");
  return 0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_1->segment_count; ++VAR_5) {
  u32 VAR_7 = VAR_1->segment_offset[VAR_5];

  if (0xFU & VAR_7) {
   FUNC_0(VAR_0,
       "Invalid DDP profile %u segment alignment",
       VAR_5);
   return 0;
  }
  if (VAR_4 > VAR_7 || VAR_7 >= VAR_3) {
   FUNC_0(VAR_0,
       "Invalid DDP profile %u segment offset",
       VAR_5);
   return 0;
  }
 }

 return 1;
}
