
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmmdev_write_core_dump {int flags; } ;
struct vbg_session {int requestor; } ;
struct TYPE_6__ {int rc; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ in; } ;
struct vbg_ioctl_write_coredump {TYPE_3__ hdr; TYPE_2__ u; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int,int ) ;
 struct vmmdev_write_core_dump* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct vmmdev_write_core_dump*,int) ;
 int FUNC_3 (struct vbg_dev*,struct vmmdev_write_core_dump*) ;

__attribute__((used)) static int FUNC_4(struct vbg_dev *VAR_3,
         struct vbg_session *VAR_4,
         struct vbg_ioctl_write_coredump *VAR_5)
{
 struct vmmdev_write_core_dump *VAR_6;

 if (FUNC_0(&VAR_5->hdr, sizeof(VAR_5->u.in), 0))
  return -VAR_0;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2,
       VAR_4->requestor);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->flags = VAR_5->u.in.flags;
 VAR_5->hdr.rc = FUNC_3(VAR_3, VAR_6);

 FUNC_2(VAR_6, sizeof(*VAR_6));
 return 0;
}
