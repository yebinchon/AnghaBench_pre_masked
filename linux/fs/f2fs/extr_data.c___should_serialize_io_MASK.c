
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int i_mode; } ;
struct TYPE_4__ {scalar_t__ cp_task; } ;
struct TYPE_3__ {scalar_t__ min_seq_blocks; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (struct inode*) ;

__attribute__((used)) static inline bool FUNC_6(struct inode *VAR_1,
     struct writeback_control *VAR_2)
{
 if (!FUNC_4(VAR_1->i_mode))
  return 0;
 if (FUNC_2(VAR_1))
  return 0;

 if (FUNC_0(VAR_1)->cp_task)
  return 0;
 if (VAR_2->sync_mode != VAR_0)
  return 1;
 if (FUNC_5(VAR_1) >= FUNC_3(FUNC_1(VAR_1))->min_seq_blocks)
  return 1;
 return 0;
}
