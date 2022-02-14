
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_state; TYPE_1__* i_mapping; int i_sb; } ;
typedef int journal_t ;
struct TYPE_6__ {int i_datasync_tid; } ;
struct TYPE_5__ {int * s_journal; } ;
struct TYPE_4__ {int private_list; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct inode *VAR_1)
{
 journal_t *VAR_2 = FUNC_1(VAR_1->i_sb)->s_journal;

 if (VAR_2)
  return !FUNC_2(VAR_2,
     FUNC_0(VAR_1)->i_datasync_tid);

 if (!FUNC_3(&VAR_1->i_mapping->private_list))
  return 1;
 return VAR_1->i_state & VAR_0;
}
