
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {scalar_t__ rx_pend_max; scalar_t__ rx_bufs_min; int * txq; int txq_cmd; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct ipw_priv*,int *,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct ipw_priv*) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_20)
{
 int VAR_21 = 0;

 int VAR_22 = 64, VAR_23 = 8;
 FUNC_2(VAR_20);

 VAR_21 = FUNC_1(VAR_20, &VAR_20->txq_cmd, VAR_23,
          VAR_2,
          VAR_3,
          VAR_0,
          VAR_1);
 if (VAR_21) {
  FUNC_0("Tx Cmd queue init failed\n");
  goto error;
 }

 VAR_21 = FUNC_1(VAR_20, &VAR_20->txq[0], VAR_22,
          VAR_6,
          VAR_7,
          VAR_4, VAR_5);
 if (VAR_21) {
  FUNC_0("Tx 0 queue init failed\n");
  goto error;
 }
 VAR_21 = FUNC_1(VAR_20, &VAR_20->txq[1], VAR_22,
          VAR_10,
          VAR_11,
          VAR_8, VAR_9);
 if (VAR_21) {
  FUNC_0("Tx 1 queue init failed\n");
  goto error;
 }
 VAR_21 = FUNC_1(VAR_20, &VAR_20->txq[2], VAR_22,
          VAR_14,
          VAR_15,
          VAR_12, VAR_13);
 if (VAR_21) {
  FUNC_0("Tx 2 queue init failed\n");
  goto error;
 }
 VAR_21 = FUNC_1(VAR_20, &VAR_20->txq[3], VAR_22,
          VAR_18,
          VAR_19,
          VAR_16, VAR_17);
 if (VAR_21) {
  FUNC_0("Tx 3 queue init failed\n");
  goto error;
 }

 VAR_20->rx_bufs_min = 0;
 VAR_20->rx_pend_max = 0;
 return VAR_21;

      error:
 FUNC_2(VAR_20);
 return VAR_21;
}
