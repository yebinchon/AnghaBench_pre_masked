
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmmdev_hgcm_service_location {int dummy; } ;
struct TYPE_2__ {int result; scalar_t__ flags; } ;
struct vmmdev_hgcm_connect {TYPE_1__ header; scalar_t__ client_id; int loc; } ;
struct vbg_dev {int hgcm_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vbg_dev*,TYPE_1__*) ;
 int FUNC_1 (int *,struct vmmdev_hgcm_service_location*,int) ;
 struct vmmdev_hgcm_connect* FUNC_2 (int,int ,scalar_t__) ;
 int FUNC_3 (struct vmmdev_hgcm_connect*,int) ;
 int FUNC_4 (struct vbg_dev*,struct vmmdev_hgcm_connect*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct vbg_dev *VAR_3, u32 VAR_4,
       struct vmmdev_hgcm_service_location *VAR_5,
       u32 *VAR_6, int *VAR_7)
{
 struct vmmdev_hgcm_connect *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_8 = FUNC_2(sizeof(*VAR_8),
         VAR_2, VAR_4);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->header.flags = 0;
 FUNC_1(&VAR_8->loc, VAR_5, sizeof(*VAR_5));
 VAR_8->client_id = 0;

 VAR_9 = FUNC_4(VAR_3, VAR_8);

 if (VAR_9 == VAR_1)
  FUNC_5(VAR_3->hgcm_wq,
      FUNC_0(VAR_3, &VAR_8->header));

 if (VAR_9 >= 0) {
  *VAR_6 = VAR_8->client_id;
  VAR_9 = VAR_8->header.result;
 }

 FUNC_3(VAR_8, sizeof(*VAR_8));

 *VAR_7 = VAR_9;
 return 0;
}
