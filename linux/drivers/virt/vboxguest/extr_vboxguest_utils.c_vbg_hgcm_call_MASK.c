
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vmmdev_hgcm_function_parameter {int dummy; } ;
struct TYPE_2__ {int result; } ;
struct vmmdev_hgcm_call {TYPE_1__ header; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmmdev_hgcm_call*,struct vmmdev_hgcm_function_parameter*,int,void**) ;
 int FUNC_1 (struct vmmdev_hgcm_call*,int,int,struct vmmdev_hgcm_function_parameter*,int,void**) ;
 int FUNC_2 (struct vmmdev_hgcm_function_parameter*,int,void***,size_t*) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct vbg_dev*,struct vmmdev_hgcm_call*,int,int*) ;
 struct vmmdev_hgcm_call* FUNC_6 (size_t,int ,int) ;
 int FUNC_7 (struct vmmdev_hgcm_call*,size_t) ;

int FUNC_8(struct vbg_dev *VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, u32 VAR_6,
    struct vmmdev_hgcm_function_parameter *VAR_7, u32 VAR_8,
    int *VAR_9)
{
 struct vmmdev_hgcm_call *VAR_10;
 void **VAR_11 = ((void*)0);
 bool VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = sizeof(struct vmmdev_hgcm_call) +
     VAR_8 * sizeof(struct vmmdev_hgcm_function_parameter);




 VAR_15 = FUNC_2(VAR_7, VAR_8, &VAR_11, &VAR_13);
 if (VAR_15) {

  goto free_bounce_bufs;
 }

 VAR_10 = FUNC_6(VAR_13, VAR_1, VAR_3);
 if (!VAR_10) {
  VAR_15 = -VAR_0;
  goto free_bounce_bufs;
 }

 FUNC_1(VAR_10, VAR_4, VAR_5, VAR_7, VAR_8,
       VAR_11);

 VAR_15 = FUNC_5(VAR_2, VAR_10, VAR_6, &VAR_12);
 if (VAR_15 == 0) {
  *VAR_9 = VAR_10->header.result;
  VAR_15 = FUNC_0(VAR_10, VAR_7, VAR_8,
       VAR_11);
 }

 if (!VAR_12)
  FUNC_7(VAR_10, VAR_13);

free_bounce_bufs:
 if (VAR_11) {
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
   FUNC_4(VAR_11[VAR_14]);
  FUNC_3(VAR_11);
 }

 return VAR_15;
}
