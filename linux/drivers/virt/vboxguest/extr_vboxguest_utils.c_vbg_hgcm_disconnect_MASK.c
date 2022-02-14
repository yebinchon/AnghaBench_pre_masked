
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int result; scalar_t__ flags; } ;
struct vmmdev_hgcm_disconnect {TYPE_1__ header; int client_id; } ;
struct vbg_dev {int hgcm_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vbg_dev*,TYPE_1__*) ;
 struct vmmdev_hgcm_disconnect* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct vmmdev_hgcm_disconnect*,int) ;
 int FUNC_3 (struct vbg_dev*,struct vmmdev_hgcm_disconnect*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct vbg_dev *VAR_3, u32 VAR_4,
   u32 VAR_5, int *VAR_6)
{
 struct vmmdev_hgcm_disconnect *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7),
     VAR_2,
     VAR_4);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->header.flags = 0;
 VAR_7->client_id = VAR_5;

 VAR_8 = FUNC_3(VAR_3, VAR_7);

 if (VAR_8 == VAR_1)
  FUNC_4(VAR_3->hgcm_wq,
      FUNC_0(VAR_3, &VAR_7->header));

 if (VAR_8 >= 0)
  VAR_8 = VAR_7->header.result;

 FUNC_2(VAR_7, sizeof(*VAR_7));

 *VAR_6 = VAR_8;
 return 0;
}
