
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blocks; int i_size; int i_ino; int i_sb; } ;
struct TYPE_2__ {int mmu_private; scalar_t__ i_n_secs; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (struct inode*) ;

void FUNC_5(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0)) return ;
 FUNC_2(VAR_0->i_sb);

 FUNC_1(VAR_0)->i_n_secs = 0;
 VAR_0->i_blocks = 1 + ((VAR_0->i_size + 511) >> 9);
 FUNC_1(VAR_0)->mmu_private = VAR_0->i_size;
 FUNC_3(VAR_0->i_sb, VAR_0->i_ino, 1, ((VAR_0->i_size + 511) >> 9));
 FUNC_4(VAR_0);
 FUNC_1(VAR_0)->i_n_secs = 0;
}
