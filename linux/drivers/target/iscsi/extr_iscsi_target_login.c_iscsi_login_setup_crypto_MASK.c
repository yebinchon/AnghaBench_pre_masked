
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {int * conn_tx_hash; int * conn_rx_hash; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 void* FUNC_1 (struct crypto_ahash*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int *) ;
 struct crypto_ahash* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct iscsi_conn *VAR_3)
{
 struct crypto_ahash *VAR_4;






 VAR_4 = FUNC_4("crc32c", 0, VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_6("crypto_alloc_ahash() failed\n");
  return -VAR_1;
 }

 VAR_3->conn_rx_hash = FUNC_1(VAR_4, VAR_2);
 if (!VAR_3->conn_rx_hash) {
  FUNC_6("ahash_request_alloc() failed for conn_rx_hash\n");
  FUNC_5(VAR_4);
  return -VAR_1;
 }
 FUNC_3(VAR_3->conn_rx_hash, 0, ((void*)0), ((void*)0));

 VAR_3->conn_tx_hash = FUNC_1(VAR_4, VAR_2);
 if (!VAR_3->conn_tx_hash) {
  FUNC_6("ahash_request_alloc() failed for conn_tx_hash\n");
  FUNC_2(VAR_3->conn_rx_hash);
  VAR_3->conn_rx_hash = ((void*)0);
  FUNC_5(VAR_4);
  return -VAR_1;
 }
 FUNC_3(VAR_3->conn_tx_hash, 0, ((void*)0), ((void*)0));

 return 0;
}
