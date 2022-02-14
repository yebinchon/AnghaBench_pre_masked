
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_eth_private {int lock; int napi; int irq_enabled; struct sh_eth_cpu_data* cd; } ;
struct sh_eth_cpu_data {int tx_check; int eesr_err_check; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,int,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*,int ) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct net_device*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 struct sh_eth_private *VAR_10 = FUNC_2(VAR_9);
 struct sh_eth_cpu_data *VAR_11 = VAR_10->cd;
 irqreturn_t VAR_12 = VAR_6;
 u32 VAR_13, VAR_14;

 FUNC_10(&VAR_10->lock);


 VAR_13 = FUNC_7(VAR_9, VAR_2);






 VAR_14 = FUNC_7(VAR_9, VAR_0);
 VAR_13 &= VAR_14 | VAR_1;
 if (VAR_13 & (VAR_4 | VAR_11->tx_check | VAR_3 |
      VAR_11->eesr_err_check))
  VAR_12 = VAR_5;
 else
  goto out;

 if (FUNC_12(!VAR_10->irq_enabled)) {
  FUNC_9(VAR_9, 0, VAR_0);
  goto out;
 }

 if (VAR_13 & VAR_4) {
  if (FUNC_1(&VAR_10->napi)) {

   FUNC_9(VAR_9, VAR_14 & ~VAR_4,
         VAR_0);
   FUNC_0(&VAR_10->napi);
  } else {
   FUNC_3(VAR_9,
        "ignoring interrupt, status 0x%08x, mask 0x%08x.\n",
        VAR_13, VAR_14);
  }
 }


 if (VAR_13 & VAR_11->tx_check) {

  FUNC_9(VAR_9, VAR_13 & VAR_11->tx_check, VAR_2);

  FUNC_8(VAR_9, 1);
  FUNC_4(VAR_9);
 }


 if (VAR_13 & VAR_3)
  FUNC_5(VAR_9);

 if (VAR_13 & VAR_11->eesr_err_check) {

  FUNC_9(VAR_9, VAR_13 & VAR_11->eesr_err_check, VAR_2);

  FUNC_6(VAR_9, VAR_13);
 }

out:
 FUNC_11(&VAR_10->lock);

 return VAR_12;
}
