
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; scalar_t__ update; scalar_t__ draft; } ;
struct ice_pkg_hdr {int * seg_offset; int seg_count; TYPE_1__ format_ver; } ;
struct ice_generic_seg_hdr {int seg_size; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static enum ice_status FUNC_1(struct ice_pkg_hdr *VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 if (VAR_7 < sizeof(*VAR_6))
  return VAR_0;

 if (VAR_6->format_ver.major != VAR_3 ||
     VAR_6->format_ver.minor != VAR_4 ||
     VAR_6->format_ver.update != VAR_5 ||
     VAR_6->format_ver.draft != VAR_2)
  return VAR_1;


 VAR_8 = FUNC_0(VAR_6->seg_count);
 if (VAR_8 < 1)
  return VAR_1;


 if (VAR_7 < sizeof(*VAR_6) + ((VAR_8 - 1) * sizeof(VAR_6->seg_offset)))
  return VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  u32 VAR_10 = FUNC_0(VAR_6->seg_offset[VAR_9]);
  struct ice_generic_seg_hdr *VAR_11;


  if (VAR_7 < VAR_10 + sizeof(*VAR_11))
   return VAR_0;

  VAR_11 = (struct ice_generic_seg_hdr *)((u8 *)VAR_6 + VAR_10);


  if (VAR_7 < VAR_10 + FUNC_0(VAR_11->seg_size))
   return VAR_0;
 }

 return 0;
}
