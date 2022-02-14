
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sockaddr {int sa_data; } ;
struct skge_port {unsigned int port; struct skge_hw* hw; } ;
struct skge_hw {int phy_lock; scalar_t__ regs; } ;
struct net_device {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct skge_hw*,unsigned int,int ) ;
 int FUNC_1 (struct skge_hw*,unsigned int,int ,int ) ;
 int FUNC_2 (struct skge_hw*,unsigned int,int ,int) ;
 scalar_t__ FUNC_3 (struct skge_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 struct skge_port* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct skge_hw*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_9, void *VAR_10)
{
 struct skge_port *VAR_11 = FUNC_7(VAR_9);
 struct skge_hw *VAR_12 = VAR_11->hw;
 unsigned VAR_13 = VAR_11->port;
 const struct sockaddr *VAR_14 = VAR_10;
 u16 VAR_15;

 if (!FUNC_4(VAR_14->sa_data))
  return -VAR_2;

 FUNC_5(VAR_9->dev_addr, VAR_14->sa_data, VAR_3);

 if (!FUNC_8(VAR_9)) {
  FUNC_6(VAR_12->regs + VAR_0 + VAR_13*8, VAR_9->dev_addr, VAR_3);
  FUNC_6(VAR_12->regs + VAR_1 + VAR_13*8, VAR_9->dev_addr, VAR_3);
 } else {

  FUNC_9(&VAR_12->phy_lock);
  VAR_15 = FUNC_0(VAR_12, VAR_13, VAR_5);
  FUNC_2(VAR_12, VAR_13, VAR_5, VAR_15 & ~VAR_4);

  FUNC_6(VAR_12->regs + VAR_0 + VAR_13*8, VAR_9->dev_addr, VAR_3);
  FUNC_6(VAR_12->regs + VAR_1 + VAR_13*8, VAR_9->dev_addr, VAR_3);

  if (FUNC_3(VAR_12))
   FUNC_11(VAR_12, VAR_13, VAR_8, VAR_9->dev_addr);
  else {
   FUNC_1(VAR_12, VAR_13, VAR_6, VAR_9->dev_addr);
   FUNC_1(VAR_12, VAR_13, VAR_7, VAR_9->dev_addr);
  }

  FUNC_2(VAR_12, VAR_13, VAR_5, VAR_15);
  FUNC_10(&VAR_12->phy_lock);
 }

 return 0;
}
