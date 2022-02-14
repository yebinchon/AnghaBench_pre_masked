
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_1(struct net_device *VAR_3, struct sk_buff *VAR_4,
        struct net_device *VAR_5)
{

 return (FUNC_0(VAR_4)->tx_flags & VAR_2) ? VAR_1 :
              VAR_0;

}
