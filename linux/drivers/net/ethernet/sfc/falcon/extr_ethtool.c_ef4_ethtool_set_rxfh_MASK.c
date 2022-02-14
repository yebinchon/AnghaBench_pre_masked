
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ef4_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* rx_push_rss_config ) (struct ef4_nic*,int,int const*) ;} ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 struct ef4_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ef4_nic*,int,int const*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, const u32 *VAR_4,
    const u8 *VAR_5, const u8 VAR_6)
{
 struct ef4_nic *VAR_7 = FUNC_0(VAR_3);


 if (VAR_5 ||
     (VAR_6 != VAR_1 && VAR_6 != VAR_2))
  return -VAR_0;
 if (!VAR_4)
  return 0;

 return VAR_7->type->rx_push_rss_config(VAR_7, 1, VAR_4);
}
