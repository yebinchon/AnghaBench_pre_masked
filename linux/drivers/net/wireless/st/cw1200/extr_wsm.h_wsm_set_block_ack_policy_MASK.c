
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
struct wsm_mib_block_ack_policy {int rx_tid; int tx_tid; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*,int ,struct wsm_mib_block_ack_policy*,int) ;

__attribute__((used)) static inline int FUNC_1(struct cw1200_common *VAR_1,
        u8 VAR_2,
        u8 VAR_3)
{
 struct wsm_mib_block_ack_policy VAR_4 = {
  .tx_tid = VAR_2,
  .rx_tid = VAR_3,
 };
 return FUNC_0(VAR_1, VAR_0, &VAR_4,
        sizeof(VAR_4));
}
