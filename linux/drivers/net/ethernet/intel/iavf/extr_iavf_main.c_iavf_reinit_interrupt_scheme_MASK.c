
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct iavf_adapter {int aq_required; TYPE_1__ vsi; struct net_device* netdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iavf_adapter*) ;
 int VAR_1 ;
 int FUNC_1 (struct iavf_adapter*) ;
 int FUNC_2 (struct iavf_adapter*) ;
 int FUNC_3 (struct iavf_adapter*) ;
 int FUNC_4 (struct iavf_adapter*) ;
 int FUNC_5 (struct iavf_adapter*) ;
 int FUNC_6 (struct iavf_adapter*) ;
 int FUNC_7 (struct iavf_adapter*) ;
 int FUNC_8 (struct iavf_adapter*) ;
 int FUNC_9 (struct iavf_adapter*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct iavf_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4;

 if (FUNC_10(VAR_3))
  FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 FUNC_9(VAR_2);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  goto err;

 FUNC_11(VAR_3);

 VAR_4 = FUNC_8(VAR_2);
 if (VAR_4)
  goto err;

 FUNC_12(VAR_1, VAR_2->vsi.state);

 FUNC_7(VAR_2);

 if (FUNC_0(VAR_2))
  VAR_2->aq_required |= VAR_0;
 else
  VAR_4 = FUNC_6(VAR_2);
err:
 return VAR_4;
}
