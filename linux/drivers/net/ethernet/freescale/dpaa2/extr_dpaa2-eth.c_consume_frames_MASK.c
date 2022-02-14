
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_fd {int dummy; } ;
struct dpaa2_eth_priv {int dummy; } ;
struct TYPE_2__ {int frames; } ;
struct dpaa2_eth_fq {TYPE_1__ stats; int (* consume ) (struct dpaa2_eth_priv*,struct dpaa2_eth_channel*,struct dpaa2_fd const*,struct dpaa2_eth_fq*) ;} ;
struct dpaa2_eth_channel {int store; struct dpaa2_eth_priv* priv; } ;
struct dpaa2_dq {int dummy; } ;


 struct dpaa2_fd* FUNC_0 (struct dpaa2_dq*) ;
 scalar_t__ FUNC_1 (struct dpaa2_dq*) ;
 struct dpaa2_dq* FUNC_2 (int ,int*) ;
 int FUNC_3 (struct dpaa2_eth_priv*,struct dpaa2_eth_channel*,struct dpaa2_fd const*,struct dpaa2_eth_fq*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dpaa2_eth_channel *VAR_0,
     struct dpaa2_eth_fq **VAR_1)
{
 struct dpaa2_eth_priv *VAR_2 = VAR_0->priv;
 struct dpaa2_eth_fq *VAR_3 = ((void*)0);
 struct dpaa2_dq *VAR_4;
 const struct dpaa2_fd *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 do {
  VAR_4 = FUNC_2(VAR_0->store, &VAR_7);
  if (FUNC_4(!VAR_4)) {





   continue;
  }

  VAR_5 = FUNC_0(VAR_4);
  VAR_3 = (struct dpaa2_eth_fq *)(uintptr_t)FUNC_1(VAR_4);

  VAR_3->consume(VAR_2, VAR_0, VAR_5, VAR_3);
  VAR_6++;
 } while (!VAR_7);

 if (!VAR_6)
  return 0;

 VAR_3->stats.frames += VAR_6;




 if (VAR_1)
  *VAR_1 = VAR_3;

 return VAR_6;
}
