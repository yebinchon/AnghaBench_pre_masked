
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct fs_pin {int m_list; int s_list; } ;
struct TYPE_4__ {int mnt_pins; } ;
struct TYPE_3__ {int s_pins; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fs_pin *VAR_1, struct vfsmount *VAR_2)
{
 FUNC_2(&VAR_0);
 FUNC_0(&VAR_1->s_list, &VAR_2->mnt_sb->s_pins);
 FUNC_0(&VAR_1->m_list, &FUNC_1(VAR_2)->mnt_pins);
 FUNC_3(&VAR_0);
}
