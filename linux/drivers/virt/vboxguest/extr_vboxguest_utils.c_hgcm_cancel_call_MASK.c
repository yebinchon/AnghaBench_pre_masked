
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int request_type; } ;
struct TYPE_4__ {int flags; TYPE_1__ header; } ;
struct vmmdev_hgcm_call {TYPE_2__ header; int phys_req_to_cancel; } ;
struct vbg_dev {int cancel_req_mutex; struct vmmdev_hgcm_call* cancel_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vbg_dev*,struct vmmdev_hgcm_call*) ;
 int FUNC_3 (struct vmmdev_hgcm_call*) ;

__attribute__((used)) static int FUNC_4(struct vbg_dev *VAR_5, struct vmmdev_hgcm_call *VAR_6)
{
 int VAR_7;






 FUNC_0(&VAR_5->cancel_req_mutex);
 VAR_5->cancel_req->phys_req_to_cancel = FUNC_3(VAR_6);
 VAR_7 = FUNC_2(VAR_5, VAR_5->cancel_req);
 FUNC_1(&VAR_5->cancel_req_mutex);

 if (VAR_7 == VAR_2) {
  VAR_6->header.flags |= VAR_4;
  VAR_6->header.header.request_type = VAR_3;

  VAR_7 = FUNC_2(VAR_5, VAR_6);
  if (VAR_7 == VAR_0)
   VAR_7 = VAR_1;
 }

 if (VAR_7 >= 0)
  VAR_6->header.flags |= VAR_4;

 return VAR_7;
}
