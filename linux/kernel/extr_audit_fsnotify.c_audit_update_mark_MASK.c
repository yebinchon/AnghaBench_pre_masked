
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct audit_fsnotify_mark {int ino; int dev; } ;
struct TYPE_2__ {int s_dev; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct audit_fsnotify_mark *VAR_2,
        const struct inode *VAR_3)
{
 VAR_2->dev = VAR_3 ? VAR_3->i_sb->s_dev : VAR_0;
 VAR_2->ino = VAR_3 ? VAR_3->i_ino : VAR_1;
}
