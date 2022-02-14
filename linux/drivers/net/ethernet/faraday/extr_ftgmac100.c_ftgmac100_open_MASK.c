
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; scalar_t__ phydev; int name; } ;
struct ftgmac100 {scalar_t__ base; int napi; int ndev; scalar_t__ use_ncsi; scalar_t__ cur_speed; scalar_t__ cur_duplex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct ftgmac100*) ;
 int FUNC_2 (struct ftgmac100*) ;
 int FUNC_3 (struct ftgmac100*) ;
 int FUNC_4 (struct ftgmac100*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct ftgmac100*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,char*,...) ;
 struct ftgmac100* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,int *,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_5)
{
 struct ftgmac100 *VAR_6 = FUNC_10(VAR_5);
 int VAR_7;


 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  FUNC_9(VAR_5, "Failed to allocate descriptors\n");
  return VAR_7;
 }







 if (VAR_6->use_ncsi) {
  VAR_6->cur_duplex = VAR_0;
  VAR_6->cur_speed = VAR_2;
 } else {
  VAR_6->cur_duplex = 0;
  VAR_6->cur_speed = 0;
 }


 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  goto err_hw;


 FUNC_12(VAR_5, &VAR_6->napi, VAR_4, 64);


 VAR_7 = FUNC_16(VAR_5->irq, VAR_3, 0, VAR_5->name, VAR_5);
 if (VAR_7) {
  FUNC_9(VAR_5, "failed to request irq %d\n", VAR_5->irq);
  goto err_irq;
 }


 VAR_7 = FUNC_4(VAR_6, 0);
 if (VAR_7) {
  FUNC_9(VAR_5, "Failed to allocate packet buffers\n");
  goto err_alloc;
 }

 if (VAR_5->phydev) {

  FUNC_15(VAR_5->phydev);
 } else if (VAR_6->use_ncsi) {

  FUNC_11(VAR_5);


  VAR_7 = FUNC_8(VAR_6->ndev);
  if (VAR_7)
   goto err_ncsi;
 }

 return 0;

 err_ncsi:
 FUNC_7(&VAR_6->napi);
 FUNC_14(VAR_5);
 err_alloc:
 FUNC_2(VAR_6);
 FUNC_0(VAR_5->irq, VAR_5);
 err_irq:
 FUNC_13(&VAR_6->napi);
 err_hw:
 FUNC_6(0, VAR_6->base + VAR_1);
 FUNC_3(VAR_6);
 return VAR_7;
}
