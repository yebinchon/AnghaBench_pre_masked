
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vbg_session {scalar_t__* hgcm_client_ids; int requestor; } ;
struct TYPE_6__ {scalar_t__ rc; } ;
struct TYPE_4__ {scalar_t__ client_id; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
struct vbg_ioctl_hgcm_disconnect {TYPE_3__ hdr; TYPE_2__ u; } ;
struct vbg_dev {int session_mutex; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vbg_dev*,int ,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct vbg_dev *VAR_2,
         struct vbg_session *VAR_3,
         struct vbg_ioctl_hgcm_disconnect *VAR_4)
{
 u32 VAR_5;
 int VAR_6, VAR_7;

 if (FUNC_4(&VAR_4->hdr, sizeof(VAR_4->u.in), 0))
  return -VAR_0;

 VAR_5 = VAR_4->u.in.client_id;
 if (VAR_5 == 0 || VAR_5 == VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_2->session_mutex);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->hgcm_client_ids); VAR_6++) {
  if (VAR_3->hgcm_client_ids[VAR_6] == VAR_5) {
   VAR_3->hgcm_client_ids[VAR_6] = VAR_1;
   break;
  }
 }
 FUNC_2(&VAR_2->session_mutex);

 if (VAR_6 >= FUNC_0(VAR_3->hgcm_client_ids))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_2, VAR_3->requestor, VAR_5,
      &VAR_4->hdr.rc);

 FUNC_1(&VAR_2->session_mutex);
 if (VAR_7 == 0 && VAR_4->hdr.rc >= 0)
  VAR_3->hgcm_client_ids[VAR_6] = 0;
 else
  VAR_3->hgcm_client_ids[VAR_6] = VAR_5;
 FUNC_2(&VAR_2->session_mutex);

 return VAR_7;
}
