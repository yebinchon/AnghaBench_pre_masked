
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; int name; } ;
struct de_private {int rx_buf_sz; int media_timer; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct de_private*) ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const,struct net_device*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct net_device*,char*,int const,...) ;
 struct de_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct de_private*,int ,struct net_device*,char*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int const,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_11 (struct net_device *VAR_7)
{
 struct de_private *VAR_8 = FUNC_7(VAR_7);
 const int VAR_9 = VAR_8->pdev->irq;
 int VAR_10;

 FUNC_8(VAR_8, VAR_5, VAR_7, "enabling interface\n");

 VAR_8->rx_buf_sz = (VAR_7->mtu <= 1500 ? VAR_3 : VAR_7->mtu + 32);

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10) {
  FUNC_6(VAR_7, "ring allocation failure, err=%d\n", VAR_10);
  return VAR_10;
 }

 FUNC_3(VAR_2, 0);

 VAR_10 = FUNC_10(VAR_9, VAR_4, VAR_1, VAR_7->name, VAR_7);
 if (VAR_10) {
  FUNC_6(VAR_7, "IRQ %d request failure, err=%d\n", VAR_9, VAR_10);
  goto err_out_free;
 }

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10) {
  FUNC_6(VAR_7, "h/w init failure, err=%d\n", VAR_10);
  goto err_out_free_irq;
 }

 FUNC_9(VAR_7);
 FUNC_5(&VAR_8->media_timer, VAR_6 + VAR_0);

 return 0;

err_out_free_irq:
 FUNC_4(VAR_9, VAR_7);
err_out_free:
 FUNC_1(VAR_8);
 return VAR_10;
}
