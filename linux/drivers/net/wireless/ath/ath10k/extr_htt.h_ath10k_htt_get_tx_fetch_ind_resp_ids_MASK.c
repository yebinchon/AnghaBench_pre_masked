
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htt_tx_fetch_ind {int num_records; int * records; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline void *
FUNC_1(struct htt_tx_fetch_ind *VAR_0)
{
 return (void *)&VAR_0->records[FUNC_0(VAR_0->num_records)];
}
