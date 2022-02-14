
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct c_can_priv {scalar_t__ tx_dir; scalar_t__ rxmasked; int tx_active; int (* write_reg ) (struct c_can_priv*,int ,int) ;TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct c_can_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct c_can_priv*,int ,int) ;
 int FUNC_6 (struct c_can_priv*,int ,int) ;
 int FUNC_7 (struct c_can_priv*,int ,int) ;
 int FUNC_8 (struct c_can_priv*,int ,int) ;
 int FUNC_9 (struct c_can_priv*,int ,int) ;
 int FUNC_10 (struct c_can_priv*,int ,int) ;
 int FUNC_11 (struct c_can_priv*,int ,int) ;
 int FUNC_12 (struct c_can_priv*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_10)
{
 struct c_can_priv *VAR_11 = FUNC_4(VAR_10);
 int VAR_12;

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12)
  return VAR_12;


 VAR_11->write_reg(VAR_11, VAR_4, VAR_2);

 if ((VAR_11->can.ctrlmode & VAR_0) &&
     (VAR_11->can.ctrlmode & VAR_1)) {

  VAR_11->write_reg(VAR_11, VAR_4, VAR_3);
  VAR_11->write_reg(VAR_11, VAR_6, VAR_8 | VAR_9);
 } else if (VAR_11->can.ctrlmode & VAR_1) {

  VAR_11->write_reg(VAR_11, VAR_4, VAR_3);
  VAR_11->write_reg(VAR_11, VAR_6, VAR_8);
 } else if (VAR_11->can.ctrlmode & VAR_0) {

  VAR_11->write_reg(VAR_11, VAR_4, VAR_3);
  VAR_11->write_reg(VAR_11, VAR_6, VAR_9);
 }


 FUNC_1(VAR_10);


 VAR_11->write_reg(VAR_11, VAR_5, VAR_7);


 FUNC_0(&VAR_11->tx_active, 0);
 VAR_11->rxmasked = 0;
 VAR_11->tx_dir = 0;


 return FUNC_2(VAR_10);
}
