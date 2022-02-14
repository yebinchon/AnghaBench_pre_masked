
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {scalar_t__ tx_hash; scalar_t__ rx_hash; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct crypto_ahash {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct crypto_ahash* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_cls_conn*) ;

__attribute__((used)) static void FUNC_5(struct iscsi_cls_conn *VAR_0)
{
 struct iscsi_conn *VAR_1 = VAR_0->dd_data;
 struct iscsi_tcp_conn *VAR_2 = VAR_1->dd_data;
 struct iscsi_sw_tcp_conn *VAR_3 = VAR_2->dd_data;

 FUNC_3(VAR_1);

 FUNC_0(VAR_3->rx_hash);
 if (VAR_3->tx_hash) {
  struct crypto_ahash *VAR_4;

  VAR_4 = FUNC_1(VAR_3->tx_hash);
  FUNC_0(VAR_3->tx_hash);
  FUNC_2(VAR_4);
 }

 FUNC_4(VAR_0);
}
