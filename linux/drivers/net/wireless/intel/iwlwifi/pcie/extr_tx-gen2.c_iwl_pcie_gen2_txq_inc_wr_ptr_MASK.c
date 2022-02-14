
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {int id; int write_ptr; int lock; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,int,int) ;
 int FUNC_1 (struct iwl_trans*,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_trans *VAR_1,
      struct iwl_txq *VAR_2)
{
 FUNC_2(&VAR_2->lock);

 FUNC_0(VAR_1, "Q:%d WR: 0x%x\n", VAR_2->id, VAR_2->write_ptr);





 FUNC_1(VAR_1, VAR_0, VAR_2->write_ptr | (VAR_2->id << 16));
}
