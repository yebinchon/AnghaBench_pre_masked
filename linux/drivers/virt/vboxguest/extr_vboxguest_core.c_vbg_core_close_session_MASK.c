
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbg_session {int * hgcm_client_ids; struct vbg_dev* gdev; } ;
struct vbg_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vbg_session*) ;
 int FUNC_2 (struct vbg_dev*,int ,int ,int*) ;
 int FUNC_3 (struct vbg_dev*,struct vbg_session*,int ,int ,int) ;
 int FUNC_4 (struct vbg_dev*,struct vbg_session*,int ,int ,int) ;

void FUNC_5(struct vbg_session *VAR_2)
{
 struct vbg_dev *VAR_3 = VAR_2->gdev;
 int VAR_4, VAR_5;

 FUNC_3(VAR_3, VAR_2, 0, VAR_0, 1);
 FUNC_4(VAR_3, VAR_2, 0, VAR_0, 1);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->hgcm_client_ids); VAR_4++) {
  if (!VAR_2->hgcm_client_ids[VAR_4])
   continue;


  FUNC_2(VAR_3, VAR_1,
        VAR_2->hgcm_client_ids[VAR_4], &VAR_5);
 }

 FUNC_1(VAR_2);
}
