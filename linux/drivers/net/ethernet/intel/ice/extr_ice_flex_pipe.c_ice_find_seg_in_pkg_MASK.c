
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_2__ {int draft; int update; int minor; int major; } ;
struct ice_pkg_hdr {int * seg_offset; int seg_count; TYPE_1__ format_ver; } ;
struct ice_hw {int dummy; } ;
struct ice_generic_seg_hdr {int seg_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ,char*,int ,int ,int ,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static struct ice_generic_seg_hdr *
FUNC_2(struct ice_hw *VAR_1, u32 VAR_2,
      struct ice_pkg_hdr *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_1, VAR_0, "Package format version: %d.%d.%d.%d\n",
    VAR_3->format_ver.major, VAR_3->format_ver.minor,
    VAR_3->format_ver.update, VAR_3->format_ver.draft);


 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3->seg_count); VAR_4++) {
  struct ice_generic_seg_hdr *VAR_5;

  VAR_5 = (struct ice_generic_seg_hdr *)
   ((u8 *)VAR_3 + FUNC_1(VAR_3->seg_offset[VAR_4]));

  if (FUNC_1(VAR_5->seg_type) == VAR_2)
   return VAR_5;
 }

 return ((void*)0);
}
