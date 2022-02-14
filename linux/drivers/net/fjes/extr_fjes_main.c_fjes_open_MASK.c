
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fjes_hw {scalar_t__ epstop_req_bit; scalar_t__ txrx_stop_req_bit; } ;
struct fjes_adapter {int napi; scalar_t__ open_guard; struct fjes_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fjes_adapter*) ;
 int FUNC_1 (struct fjes_adapter*) ;
 int FUNC_2 (struct fjes_hw*) ;
 int FUNC_3 (struct fjes_hw*,int ,int) ;
 int FUNC_4 (struct fjes_adapter*) ;
 int FUNC_5 (struct fjes_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct fjes_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct fjes_adapter *VAR_3 = FUNC_8(VAR_2);
 struct fjes_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;

 if (VAR_3->open_guard)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  goto err_setup_res;

 VAR_4->txrx_stop_req_bit = 0;
 VAR_4->epstop_req_bit = 0;

 FUNC_7(&VAR_3->napi);

 FUNC_2(VAR_4);

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  goto err_req_irq;

 FUNC_3(VAR_4, VAR_1, 0);

 FUNC_10(VAR_2);
 FUNC_9(VAR_2);

 return 0;

err_req_irq:
 FUNC_0(VAR_3);
 FUNC_6(&VAR_3->napi);

err_setup_res:
 FUNC_1(VAR_3);
 return VAR_5;
}
