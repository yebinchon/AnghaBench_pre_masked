
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;
struct m_can_classdev {int tx_wq; scalar_t__ is_peripheral; int napi; int tx_work; int * tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct m_can_classdev*) ;
 int FUNC_6 (struct m_can_classdev*) ;
 int VAR_7 ;
 int FUNC_7 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct m_can_classdev* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_14 (int ,int *,int ,int,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_9)
{
 struct m_can_classdev *VAR_10 = FUNC_10(VAR_9);
 int VAR_11;

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11)
  return VAR_11;


 VAR_11 = FUNC_12(VAR_9);
 if (VAR_11) {
  FUNC_9(VAR_9, "failed to open can device\n");
  goto exit_disable_clks;
 }


 if (VAR_10->is_peripheral) {
  VAR_10->tx_skb = ((void*)0);
  VAR_10->tx_wq = FUNC_1("mcan_wq",
           VAR_5 | VAR_6, 0);
  if (!VAR_10->tx_wq) {
   VAR_11 = -VAR_1;
   goto out_wq_fail;
  }

  FUNC_0(&VAR_10->tx_work, VAR_8);

  VAR_11 = FUNC_14(VAR_9->irq, ((void*)0), VAR_7,
        VAR_2 | VAR_4,
        VAR_9->name, VAR_9);
 } else {
  VAR_11 = FUNC_13(VAR_9->irq, VAR_7, VAR_3, VAR_9->name,
      VAR_9);
 }

 if (VAR_11 < 0) {
  FUNC_9(VAR_9, "failed to request interrupt\n");
  goto exit_irq_fail;
 }


 FUNC_7(VAR_9);

 FUNC_2(VAR_9, VAR_0);

 if (!VAR_10->is_peripheral)
  FUNC_8(&VAR_10->napi);

 FUNC_11(VAR_9);

 return 0;

exit_irq_fail:
 if (VAR_10->is_peripheral)
  FUNC_4(VAR_10->tx_wq);
out_wq_fail:
 FUNC_3(VAR_9);
exit_disable_clks:
 FUNC_6(VAR_10);
 return VAR_11;
}
