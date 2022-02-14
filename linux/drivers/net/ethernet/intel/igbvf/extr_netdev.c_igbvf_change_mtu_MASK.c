
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct igbvf_adapter {int max_frame_size; int rx_buffer_len; int state; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct igbvf_adapter*) ;
 int FUNC_3 (struct igbvf_adapter*) ;
 int FUNC_4 (struct igbvf_adapter*) ;
 struct igbvf_adapter* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6, int VAR_7)
{
 struct igbvf_adapter *VAR_8 = FUNC_5(VAR_6);
 int VAR_9 = VAR_7 + VAR_2 + VAR_0;

 while (FUNC_7(VAR_5, &VAR_8->state))
  FUNC_8(1000, 2000);

 VAR_8->max_frame_size = VAR_9;
 if (FUNC_6(VAR_6))
  FUNC_2(VAR_8);
 if (VAR_9 <= 1024)
  VAR_8->rx_buffer_len = 1024;
 else if (VAR_9 <= 2048)
  VAR_8->rx_buffer_len = 2048;
 else



  VAR_8->rx_buffer_len = VAR_3 / 2;



 if ((VAR_9 == VAR_1 + VAR_0) ||
     (VAR_9 == VAR_1 + VAR_4 + VAR_0))
  VAR_8->rx_buffer_len = VAR_1 + VAR_4 +
      VAR_0;

 FUNC_1(&VAR_8->pdev->dev, "changing MTU from %d to %d\n",
   VAR_6->mtu, VAR_7);
 VAR_6->mtu = VAR_7;

 if (FUNC_6(VAR_6))
  FUNC_4(VAR_8);
 else
  FUNC_3(VAR_8);

 FUNC_0(VAR_5, &VAR_8->state);

 return 0;
}
