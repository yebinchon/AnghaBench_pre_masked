
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {void (* tx ) (void*,struct sk_buff*,int,int) ;int rx; struct ath9k_htc_priv* priv; } ;
struct htc_service_connreq {TYPE_1__ ep_callbacks; int service_id; } ;
struct ath9k_htc_priv {int htc; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int FUNC_0 (int ,struct htc_service_connreq*,int*) ;
 int FUNC_1 (struct htc_service_connreq*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct ath9k_htc_priv *VAR_1,
     u16 VAR_2,
     void (*VAR_3) (void *,
          struct sk_buff *,
          enum htc_endpoint_id,
          bool VAR_4),
     enum htc_endpoint_id *VAR_5)
{
 struct htc_service_connreq VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(struct htc_service_connreq));

 VAR_6.service_id = VAR_2;
 VAR_6.ep_callbacks.priv = VAR_1;
 VAR_6.ep_callbacks.rx = VAR_0;
 VAR_6.ep_callbacks.tx = VAR_3;

 return FUNC_0(VAR_1->htc, &VAR_6, VAR_5);
}
