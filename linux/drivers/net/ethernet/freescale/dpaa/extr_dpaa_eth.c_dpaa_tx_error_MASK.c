
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct qm_fd {int status; } ;
struct net_device {int dummy; } ;
struct dpaa_priv {int dummy; } ;
struct TYPE_2__ {int tx_errors; } ;
struct dpaa_percpu_priv {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct dpaa_priv const*,struct qm_fd const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct dpaa_priv const*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
     const struct dpaa_priv *VAR_3,
     struct dpaa_percpu_priv *VAR_4,
     const struct qm_fd *VAR_5,
     u32 VAR_6)
{
 struct sk_buff *VAR_7;

 if (FUNC_3())
  FUNC_4(VAR_3, VAR_1, VAR_2, "FD status = 0x%08x\n",
      FUNC_0(VAR_5->status) & VAR_0);

 VAR_4->stats.tx_errors++;

 VAR_7 = FUNC_2(VAR_3, VAR_5);
 FUNC_1(VAR_7);
}
