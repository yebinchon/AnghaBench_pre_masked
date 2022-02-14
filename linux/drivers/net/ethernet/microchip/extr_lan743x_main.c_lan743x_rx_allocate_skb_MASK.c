
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lan743x_rx {TYPE_1__* adapter; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ,int,int) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct lan743x_rx *VAR_5)
{
 int VAR_6 = 0;

 VAR_6 = (VAR_3 + VAR_0 + 4 + VAR_4);
 return FUNC_0(VAR_5->adapter->netdev,
      VAR_6, VAR_1 | VAR_2);
}
