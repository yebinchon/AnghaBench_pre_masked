
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;scalar_t__ tx_tail; scalar_t__ tx_head; int (* write_reg ) (struct xcan_priv*,int ,int ) ;} ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 struct xcan_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct xcan_priv*,int ,int ) ;
 int FUNC_3 (struct xcan_priv*,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7)
{
 struct xcan_priv *VAR_8 = FUNC_0(VAR_7);
 unsigned long VAR_9;

 VAR_8->write_reg(VAR_8, VAR_1, VAR_2);

 VAR_9 = VAR_6 + VAR_5;
 while (!(VAR_8->read_reg(VAR_8, VAR_4) & VAR_3)) {
  if (FUNC_4(VAR_6, VAR_9)) {
   FUNC_1(VAR_7, "timed out for config mode\n");
   return -VAR_0;
  }
  FUNC_5(500, 10000);
 }


 VAR_8->tx_head = 0;
 VAR_8->tx_tail = 0;

 return 0;
}
