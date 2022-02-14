
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_coalesce_scale {int * nsecs; } ;
struct rtl_coalesce_info {struct rtl_coalesce_scale const* scalev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct rtl_coalesce_scale const* FUNC_0 (struct rtl_coalesce_info const*) ;
 struct rtl_coalesce_scale const* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rtl_coalesce_info const*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 struct rtl_coalesce_info* FUNC_4 (struct net_device*) ;

__attribute__((used)) static const struct rtl_coalesce_scale *FUNC_5(
   struct net_device *VAR_2, u32 VAR_3, u16 *VAR_4)
{
 const struct rtl_coalesce_info *VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_4(VAR_2);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  u32 VAR_7 = FUNC_3(VAR_5->scalev[VAR_6].nsecs[0],
     VAR_5->scalev[VAR_6].nsecs[1]);
  if (VAR_3 <= VAR_7 * VAR_1) {
   *VAR_4 = VAR_6;
   return &VAR_5->scalev[VAR_6];
  }
 }

 return FUNC_1(-VAR_0);
}
