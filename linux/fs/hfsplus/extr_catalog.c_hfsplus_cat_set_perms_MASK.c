
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; int i_rdev; int i_mode; int i_nlink; } ;
struct hfsplus_perm {void* dev; void* group; void* owner; int mode; int userflags; int rootflags; } ;
struct TYPE_2__ {int userflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;

void FUNC_8(struct inode *VAR_4, struct hfsplus_perm *VAR_5)
{
 if (VAR_4->i_flags & VAR_3)
  VAR_5->rootflags |= VAR_1;
 else
  VAR_5->rootflags &= ~VAR_1;
 if (VAR_4->i_flags & VAR_2)
  VAR_5->rootflags |= VAR_0;
 else
  VAR_5->rootflags &= ~VAR_0;

 VAR_5->userflags = FUNC_0(VAR_4)->userflags;
 VAR_5->mode = FUNC_4(VAR_4->i_mode);
 VAR_5->owner = FUNC_5(FUNC_7(VAR_4));
 VAR_5->group = FUNC_5(FUNC_6(VAR_4));

 if (FUNC_3(VAR_4->i_mode))
  VAR_5->dev = FUNC_5(VAR_4->i_nlink);
 else if (FUNC_1(VAR_4->i_mode) || FUNC_2(VAR_4->i_mode))
  VAR_5->dev = FUNC_5(VAR_4->i_rdev);
 else
  VAR_5->dev = 0;
}
