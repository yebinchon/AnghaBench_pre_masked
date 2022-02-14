
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_txq_scd_cfg {int fifo; int sta_id; int aggregate; int frame_limit; int tid; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,int,int ,struct iwl_trans_txq_scd_cfg*,unsigned int) ;

__attribute__((used)) static inline
void FUNC_1(struct iwl_trans *VAR_2, int VAR_3, int VAR_4,
        unsigned int VAR_5)
{
 struct iwl_trans_txq_scd_cfg VAR_6 = {
  .fifo = VAR_4,
  .sta_id = -1,
  .tid = VAR_1,
  .frame_limit = VAR_0,
  .aggregate = 0,
 };

 FUNC_0(VAR_2, VAR_3, 0, &VAR_6, VAR_5);
}
