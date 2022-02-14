
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int alloc_phys; int alloc; int alloc_len; } ;
struct TYPE_4__ {int alloc_phys; int alloc; int alloc_len; } ;
struct ec_bhf_priv {TYPE_1__ rx_buf; TYPE_2__ tx_buf; int hrtimer; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct ec_bhf_priv*) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct ec_bhf_priv*) ;
 int FUNC_3 (int *) ;
 struct ec_bhf_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct ec_bhf_priv *VAR_1 = FUNC_4(VAR_0);
 struct device *VAR_2 = FUNC_0(VAR_1);

 FUNC_3(&VAR_1->hrtimer);

 FUNC_2(VAR_1);

 FUNC_5(VAR_0);

 FUNC_1(VAR_2, VAR_1->tx_buf.alloc_len,
     VAR_1->tx_buf.alloc, VAR_1->tx_buf.alloc_phys);
 FUNC_1(VAR_2, VAR_1->rx_buf.alloc_len,
     VAR_1->rx_buf.alloc, VAR_1->rx_buf.alloc_phys);

 return 0;
}
