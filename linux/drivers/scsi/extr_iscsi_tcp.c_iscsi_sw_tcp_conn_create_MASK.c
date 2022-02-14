
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_tcp_conn {void* rx_hash; struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {void* tx_hash; void* rx_hash; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct crypto_ahash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_ahash*) ;
 int VAR_2 ;
 void* FUNC_1 (struct crypto_ahash*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int ,int *,int *) ;
 struct crypto_ahash* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct crypto_ahash*) ;
 int FUNC_6 (int ,struct iscsi_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_7 (struct iscsi_cls_session*,int,int ) ;
 int FUNC_8 (struct iscsi_cls_conn*) ;

__attribute__((used)) static struct iscsi_cls_conn *
FUNC_9(struct iscsi_cls_session *VAR_3,
    uint32_t VAR_4)
{
 struct iscsi_conn *VAR_5;
 struct iscsi_cls_conn *VAR_6;
 struct iscsi_tcp_conn *VAR_7;
 struct iscsi_sw_tcp_conn *VAR_8;
 struct crypto_ahash *VAR_9;

 VAR_6 = FUNC_7(VAR_3, sizeof(*VAR_8),
     VAR_4);
 if (!VAR_6)
  return ((void*)0);
 VAR_5 = VAR_6->dd_data;
 VAR_7 = VAR_5->dd_data;
 VAR_8 = VAR_7->dd_data;

 VAR_9 = FUNC_4("crc32c", 0, VAR_0);
 if (FUNC_0(VAR_9))
  goto free_conn;

 VAR_8->tx_hash = FUNC_1(VAR_9, VAR_1);
 if (!VAR_8->tx_hash)
  goto free_tfm;
 FUNC_3(VAR_8->tx_hash, 0, ((void*)0), ((void*)0));

 VAR_8->rx_hash = FUNC_1(VAR_9, VAR_1);
 if (!VAR_8->rx_hash)
  goto free_tx_hash;
 FUNC_3(VAR_8->rx_hash, 0, ((void*)0), ((void*)0));

 VAR_7->rx_hash = VAR_8->rx_hash;

 return VAR_6;

free_tx_hash:
 FUNC_2(VAR_8->tx_hash);
free_tfm:
 FUNC_5(VAR_9);
free_conn:
 FUNC_6(VAR_2, VAR_5,
     "Could not create connection due to crc32c "
     "loading error. Make sure the crc32c "
     "module is built as a module or into the "
     "kernel\n");
 FUNC_8(VAR_6);
 return ((void*)0);
}
