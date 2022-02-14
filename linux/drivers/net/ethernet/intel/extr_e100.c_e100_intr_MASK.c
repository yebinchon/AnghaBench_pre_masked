
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nic {int napi; int ru_running; TYPE_2__* csr; int netdev; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int stat_ack; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nic*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct nic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct nic*,int ,int ,int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct nic *VAR_11 = FUNC_6(VAR_10);
 u8 VAR_12 = FUNC_2(&VAR_11->csr->scb.stat_ack);

 FUNC_7(VAR_11, VAR_4, VAR_2, VAR_11->netdev,
       "stat_ack = 0x%02X\n", VAR_12);

 if (VAR_12 == VAR_5 ||
    VAR_12 == VAR_6)
  return VAR_1;


 FUNC_3(VAR_12, &VAR_11->csr->scb.stat_ack);


 if (VAR_12 & VAR_7)
  VAR_11->ru_running = VAR_3;

 if (FUNC_4(FUNC_5(&VAR_11->napi))) {
  FUNC_1(VAR_11);
  FUNC_0(&VAR_11->napi);
 }

 return VAR_0;
}
