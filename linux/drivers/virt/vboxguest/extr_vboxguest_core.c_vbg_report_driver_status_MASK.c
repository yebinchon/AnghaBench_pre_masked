
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_guest_status {scalar_t__ flags; int status; int facility; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct vmmdev_guest_status* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct vmmdev_guest_status*,int) ;
 int FUNC_2 (struct vbg_dev*,struct vmmdev_guest_status*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct vbg_dev *VAR_8, bool VAR_9)
{
 struct vmmdev_guest_status *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(sizeof(*VAR_10), VAR_7,
       VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->facility = VAR_4;
 if (VAR_9)
  VAR_10->status = VAR_2;
 else
  VAR_10->status = VAR_3;
 VAR_10->flags = 0;

 VAR_11 = FUNC_2(VAR_8, VAR_10);
 if (VAR_11 == VAR_5)
  VAR_11 = VAR_6;

 FUNC_1(VAR_10, sizeof(*VAR_10));

 return FUNC_3(VAR_11);
}
