
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vbg_session {int dummy; } ;
struct TYPE_3__ {int or_mask; int not_mask; } ;
struct TYPE_4__ {TYPE_1__ in; } ;
struct vbg_ioctl_change_filter {TYPE_2__ u; int hdr; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct vbg_dev*,struct vbg_session*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct vbg_dev *VAR_2,
     struct vbg_session *VAR_3,
     struct vbg_ioctl_change_filter *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (FUNC_0(&VAR_4->hdr, sizeof(VAR_4->u.in), 0))
  return -VAR_0;

 VAR_5 = VAR_4->u.in.or_mask;
 VAR_6 = VAR_4->u.in.not_mask;

 if ((VAR_5 | VAR_6) & ~VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6,
         0);
}
