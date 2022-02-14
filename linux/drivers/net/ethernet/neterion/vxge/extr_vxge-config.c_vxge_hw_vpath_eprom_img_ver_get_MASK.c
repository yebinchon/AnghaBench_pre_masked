
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct eprom_image {int version; int type; int index; int is_valid; } ;
struct __vxge_hw_virtualpath {int dummy; } ;
struct __vxge_hw_device {size_t first_vp_id; struct __vxge_hw_virtualpath* virtual_paths; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct __vxge_hw_virtualpath*,int ,int ,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;

enum vxge_hw_status
FUNC_6(struct __vxge_hw_device *VAR_4,
    struct eprom_image *VAR_5)
{
 u64 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 struct __vxge_hw_virtualpath *VAR_9;
 enum vxge_hw_status VAR_10;
 int VAR_11;

 VAR_9 = &VAR_4->virtual_paths[VAR_4->first_vp_id];

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_6 = FUNC_4(VAR_11);
  VAR_7 = VAR_8 = 0;

  VAR_10 = FUNC_5(VAR_9,
   VAR_0,
   VAR_3,
   0, &VAR_6, &VAR_7, &VAR_8);
  if (VAR_10 != VAR_2)
   break;

  VAR_5[VAR_11].is_valid = FUNC_3(VAR_6);
  VAR_5[VAR_11].index = FUNC_0(VAR_6);
  VAR_5[VAR_11].type = FUNC_2(VAR_6);
  VAR_5[VAR_11].version = FUNC_1(VAR_6);
 }

 return VAR_10;
}
