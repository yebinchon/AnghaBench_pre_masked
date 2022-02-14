
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {int n_window; int low_mark; int high_mark; scalar_t__ read_ptr; scalar_t__ write_ptr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct iwl_txq *VAR_1, int VAR_2)
{
 VAR_1->n_window = VAR_2;



 if (FUNC_0(!FUNC_1(VAR_2)))
  return -VAR_0;

 VAR_1->low_mark = VAR_1->n_window / 4;
 if (VAR_1->low_mark < 4)
  VAR_1->low_mark = 4;

 VAR_1->high_mark = VAR_1->n_window / 8;
 if (VAR_1->high_mark < 2)
  VAR_1->high_mark = 2;

 VAR_1->write_ptr = 0;
 VAR_1->read_ptr = 0;

 return 0;
}
