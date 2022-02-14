
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct __vxge_hw_virtualpath {int dummy; } ;
struct __vxge_hw_device {size_t first_vp_id; struct __vxge_hw_virtualpath* virtual_paths; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct __vxge_hw_virtualpath*,int ,int ,int ,int *,int *,int *) ;

enum vxge_hw_status
FUNC_4(struct __vxge_hw_device *VAR_4, u32 *VAR_5,
        u32 *VAR_6, u32 *VAR_7)
{
 u64 VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct __vxge_hw_virtualpath *VAR_11;
 enum vxge_hw_status VAR_12;

 VAR_11 = &VAR_4->virtual_paths[VAR_4->first_vp_id];

 VAR_12 = FUNC_3(VAR_11,
          VAR_0,
          VAR_1,
          VAR_2,
          &VAR_8, &VAR_9, &VAR_10);
 if (VAR_12 != VAR_3)
  return VAR_12;

 *VAR_5 = FUNC_1(VAR_8);
 *VAR_6 = FUNC_2(VAR_8);
 *VAR_7 = FUNC_0(VAR_8);

 return VAR_12;
}
