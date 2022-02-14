
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sis190_private {scalar_t__* Rx_skbuff; scalar_t__ RxDescRing; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct sis190_private*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct sis190_private *VAR_1, struct net_device *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
  unsigned int VAR_6 = VAR_5 % VAR_0;

  if (VAR_1->Rx_skbuff[VAR_6])
   continue;

  VAR_1->Rx_skbuff[VAR_6] = FUNC_0(VAR_1, VAR_1->RxDescRing + VAR_6);

  if (!VAR_1->Rx_skbuff[VAR_6])
   break;
 }
 return VAR_5 - VAR_3;
}
