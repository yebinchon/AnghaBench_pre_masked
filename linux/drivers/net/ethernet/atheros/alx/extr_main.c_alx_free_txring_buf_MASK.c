
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_txd {int dummy; } ;
struct alx_tx_queue {int count; scalar_t__ read_idx; scalar_t__ write_idx; int tpd; int bufs; } ;
struct alx_buffer {int dummy; } ;


 int FUNC_0 (struct alx_tx_queue*,int) ;
 int FUNC_1 (struct alx_tx_queue*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct alx_tx_queue *VAR_0)
{
 int VAR_1;

 if (!VAR_0->bufs)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
  FUNC_0(VAR_0, VAR_1);

 FUNC_2(VAR_0->bufs, 0, VAR_0->count * sizeof(struct alx_buffer));
 FUNC_2(VAR_0->tpd, 0, VAR_0->count * sizeof(struct alx_txd));
 VAR_0->write_idx = 0;
 VAR_0->read_idx = 0;

 FUNC_3(FUNC_1(VAR_0));
}
