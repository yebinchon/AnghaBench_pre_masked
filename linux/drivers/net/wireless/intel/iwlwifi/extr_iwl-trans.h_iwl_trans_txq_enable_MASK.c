
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_trans_txq_scd_cfg {int fifo; int sta_id; int tid; int frame_limit; int aggregate; } ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (struct iwl_trans*,int,int ,struct iwl_trans_txq_scd_cfg*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_trans *VAR_0, int VAR_1,
     int VAR_2, int VAR_3, int VAR_4,
     int VAR_5, u16 VAR_6,
     unsigned int VAR_7)
{
 struct iwl_trans_txq_scd_cfg VAR_8 = {
  .fifo = VAR_2,
  .sta_id = VAR_3,
  .tid = VAR_4,
  .frame_limit = VAR_5,
  .aggregate = VAR_3 >= 0,
 };

 FUNC_0(VAR_0, VAR_1, VAR_6, &VAR_8, VAR_7);
}
