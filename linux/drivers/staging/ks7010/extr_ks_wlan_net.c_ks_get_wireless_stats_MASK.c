
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ beacon; } ;
struct TYPE_3__ {scalar_t__ misc; scalar_t__ retries; scalar_t__ fragment; scalar_t__ code; scalar_t__ nwid; } ;
struct iw_statistics {TYPE_2__ miss; TYPE_1__ discard; } ;
struct ks_wlan_private {scalar_t__ dev_state; struct iw_statistics wstats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static struct iw_statistics *FUNC_2(struct net_device *VAR_2)
{
 struct ks_wlan_private *VAR_3 = FUNC_1(VAR_2);
 struct iw_statistics *VAR_4 = &VAR_3->wstats;

 if (!FUNC_0(&VAR_1))
  return (VAR_3->dev_state < VAR_0) ? ((void*)0) : VAR_4;





 VAR_4->discard.nwid = 0;
 VAR_4->discard.code = 0;
 VAR_4->discard.fragment = 0;
 VAR_4->discard.retries = 0;
 VAR_4->discard.misc = 0;
 VAR_4->miss.beacon = 0;

 return VAR_4;
}
