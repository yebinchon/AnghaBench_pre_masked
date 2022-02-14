
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct vbg_session {void** hgcm_client_ids; int requestor; } ;
struct TYPE_6__ {void* client_id; } ;
struct TYPE_5__ {int loc; } ;
struct TYPE_7__ {TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_8__ {scalar_t__ rc; } ;
struct vbg_ioctl_hgcm_connect {TYPE_3__ u; TYPE_4__ hdr; } ;
struct vbg_dev {int session_mutex; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vbg_dev*,int ,int *,void**,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_5(struct vbg_dev *VAR_3,
      struct vbg_session *VAR_4,
      struct vbg_ioctl_hgcm_connect *VAR_5)
{
 u32 VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_4(&VAR_5->hdr, sizeof(VAR_5->u.in), sizeof(VAR_5->u.out)))
  return -VAR_0;


 FUNC_1(&VAR_3->session_mutex);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->hgcm_client_ids); VAR_7++) {
  if (!VAR_4->hgcm_client_ids[VAR_7]) {
   VAR_4->hgcm_client_ids[VAR_7] = VAR_2;
   break;
  }
 }
 FUNC_2(&VAR_3->session_mutex);

 if (VAR_7 >= FUNC_0(VAR_4->hgcm_client_ids))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_3, VAR_4->requestor, &VAR_5->u.in.loc,
          &VAR_6, &VAR_5->hdr.rc);

 FUNC_1(&VAR_3->session_mutex);
 if (VAR_8 == 0 && VAR_5->hdr.rc >= 0) {
  VAR_5->u.out.client_id = VAR_6;
  VAR_4->hgcm_client_ids[VAR_7] = VAR_6;
 } else {
  VAR_5->u.out.client_id = 0;
  VAR_4->hgcm_client_ids[VAR_7] = 0;
 }
 FUNC_2(&VAR_3->session_mutex);

 return VAR_8;
}
