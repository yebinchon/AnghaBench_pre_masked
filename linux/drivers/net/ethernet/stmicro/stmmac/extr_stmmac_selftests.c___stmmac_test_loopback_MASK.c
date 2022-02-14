
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct stmmac_test_priv* af_packet_priv; int dev; int func; int type; } ;
struct stmmac_test_priv {int ok; TYPE_1__ pt; int comp; struct stmmac_packet_attrs* packet; } ;
struct stmmac_priv {int dev; } ;
struct stmmac_packet_attrs {scalar_t__ dont_wait; int timeout; int queue_mapping; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stmmac_test_priv*) ;
 struct stmmac_test_priv* FUNC_6 (int,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_8 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;
 int VAR_5 ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct stmmac_priv *VAR_6,
      struct stmmac_packet_attrs *VAR_7)
{
 struct stmmac_test_priv *VAR_8;
 struct sk_buff *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->ok = 0;
 FUNC_4(&VAR_8->comp);

 VAR_8->pt.type = FUNC_3(VAR_1);
 VAR_8->pt.func = VAR_5;
 VAR_8->pt.dev = VAR_6->dev;
 VAR_8->pt.af_packet_priv = VAR_8;
 VAR_8->packet = VAR_7;

 if (!VAR_7->dont_wait)
  FUNC_0(&VAR_8->pt);

 VAR_9 = FUNC_8(VAR_6, VAR_7);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto cleanup;
 }

 FUNC_7(VAR_9, VAR_7->queue_mapping);
 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10)
  goto cleanup;

 if (VAR_7->dont_wait)
  goto cleanup;

 if (!VAR_7->timeout)
  VAR_7->timeout = VAR_4;

 FUNC_9(&VAR_8->comp, VAR_7->timeout);
 VAR_10 = VAR_8->ok ? 0 : -VAR_2;

cleanup:
 if (!VAR_7->dont_wait)
  FUNC_2(&VAR_8->pt);
 FUNC_5(VAR_8);
 return VAR_10;
}
