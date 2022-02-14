
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {scalar_t__ iw_mode; int monitor_type; TYPE_1__* ndev; } ;
typedef TYPE_2__ islpci_private ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_3, struct iw_request_info *VAR_4,
       __u32 * VAR_5, char *VAR_6)
{
 islpci_private *VAR_7 = FUNC_0(VAR_3);
 VAR_7->monitor_type =
     (*VAR_5 ? VAR_1 : VAR_0);
 if (VAR_7->iw_mode == VAR_2)
  VAR_7->ndev->type = VAR_7->monitor_type;

 return 0;
}
