
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vbg_session {int guest_caps; } ;
struct TYPE_4__ {int global_caps; int session_caps; } ;
struct TYPE_6__ {int or_mask; int not_mask; } ;
struct TYPE_5__ {TYPE_1__ out; TYPE_3__ in; } ;
struct vbg_ioctl_set_guest_caps {TYPE_2__ u; int hdr; } ;
struct vbg_dev {int guest_caps_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct vbg_dev*,struct vbg_session*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct vbg_dev *VAR_2,
      struct vbg_session *VAR_3, struct vbg_ioctl_set_guest_caps *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_0(&VAR_4->hdr, sizeof(VAR_4->u.in), sizeof(VAR_4->u.out)))
  return -VAR_0;

 VAR_5 = VAR_4->u.in.or_mask;
 VAR_6 = VAR_4->u.in.not_mask;

 if ((VAR_5 | VAR_6) & ~VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6,
        0);
 if (VAR_7)
  return VAR_7;

 VAR_4->u.out.session_caps = VAR_3->guest_caps;
 VAR_4->u.out.global_caps = VAR_2->guest_caps_host;

 return 0;
}
