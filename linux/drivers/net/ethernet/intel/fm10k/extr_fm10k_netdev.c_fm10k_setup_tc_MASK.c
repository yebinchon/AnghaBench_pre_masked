
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct fm10k_intfc {int flags; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm10k_intfc*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct net_device*) ;
 struct fm10k_intfc* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ) ;

int FUNC_12(struct net_device *VAR_3, u8 VAR_4)
{
 struct fm10k_intfc *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;


 if (VAR_4 && (VAR_5->hw.mac.type != VAR_2))
  return -VAR_0;


 if (VAR_4 > 8)
  return -VAR_0;





 if (FUNC_10(VAR_3))
  FUNC_1(VAR_3);

 FUNC_3(VAR_5);

 FUNC_0(VAR_5);


 FUNC_7(VAR_3);
 FUNC_8(VAR_3, VAR_4);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  goto err_queueing_scheme;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  goto err_mbx_irq;

 VAR_6 = FUNC_10(VAR_3) ? FUNC_5(VAR_3) : 0;
 if (VAR_6)
  goto err_open;


 FUNC_11(VAR_1, VAR_5->flags);

 return 0;
err_open:
 FUNC_3(VAR_5);
err_mbx_irq:
 FUNC_0(VAR_5);
err_queueing_scheme:
 FUNC_9(VAR_3);

 return VAR_6;
}
