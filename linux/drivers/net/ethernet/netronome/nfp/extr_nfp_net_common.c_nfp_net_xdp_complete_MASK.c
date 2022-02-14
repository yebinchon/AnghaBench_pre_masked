
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_net_tx_ring {int qcp_rd_p; int rd_p; scalar_t__ wr_p; scalar_t__ cnt; TYPE_1__* txbufs; int qcp_q; struct nfp_net_r_vector* r_vec; } ;
struct nfp_net_r_vector {int tx_pkts; int tx_sync; int tx_bytes; } ;
struct TYPE_2__ {int real_len; } ;


 void* FUNC_0 (struct nfp_net_tx_ring*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct nfp_net_tx_ring *VAR_1)
{
 struct nfp_net_r_vector *VAR_2 = VAR_1->r_vec;
 u32 VAR_3 = 0, VAR_4 = 0;
 bool VAR_5;
 int VAR_6, VAR_7;
 u32 VAR_8;


 VAR_8 = FUNC_3(VAR_1->qcp_q);

 if (VAR_8 == VAR_1->qcp_rd_p)
  return 1;

 VAR_7 = FUNC_0(VAR_1, VAR_8 - VAR_1->qcp_rd_p);

 VAR_5 = VAR_7 <= VAR_0;
 VAR_7 = FUNC_2(VAR_7, VAR_0);

 VAR_1->qcp_rd_p = FUNC_0(VAR_1, VAR_1->qcp_rd_p + VAR_7);

 VAR_3 = VAR_7;
 while (VAR_7--) {
  VAR_6 = FUNC_0(VAR_1, VAR_1->rd_p);
  VAR_1->rd_p++;

  VAR_4 += VAR_1->txbufs[VAR_6].real_len;
 }

 FUNC_4(&VAR_2->tx_sync);
 VAR_2->tx_bytes += VAR_4;
 VAR_2->tx_pkts += VAR_3;
 FUNC_5(&VAR_2->tx_sync);

 FUNC_1(VAR_1->wr_p - VAR_1->rd_p > VAR_1->cnt,
    "XDP TX ring corruption rd_p=%u wr_p=%u cnt=%u\n",
    VAR_1->rd_p, VAR_1->wr_p, VAR_1->cnt);

 return VAR_5;
}
