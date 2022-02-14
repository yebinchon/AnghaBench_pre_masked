
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qm_fd {int status; } ;
struct net_device {int dummy; } ;
struct dpaa_priv {int dummy; } ;
struct TYPE_4__ {int phe; int fse; int fpe; int dme; } ;
struct TYPE_3__ {int rx_errors; } ;
struct dpaa_percpu_priv {TYPE_2__ rx_errors; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct qm_fd const*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct dpaa_priv const*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6,
     const struct dpaa_priv *VAR_7,
     struct dpaa_percpu_priv *VAR_8,
     const struct qm_fd *VAR_9,
     u32 VAR_10)
{
 if (FUNC_2())
  FUNC_3(VAR_7, VAR_5, VAR_6, "Err FD status = 0x%08x\n",
     FUNC_0(VAR_9->status) & VAR_4);

 VAR_8->stats.rx_errors++;

 if (FUNC_0(VAR_9->status) & VAR_0)
  VAR_8->rx_errors.dme++;
 if (FUNC_0(VAR_9->status) & VAR_1)
  VAR_8->rx_errors.fpe++;
 if (FUNC_0(VAR_9->status) & VAR_3)
  VAR_8->rx_errors.fse++;
 if (FUNC_0(VAR_9->status) & VAR_2)
  VAR_8->rx_errors.phe++;

 FUNC_1(VAR_6, VAR_9);
}
