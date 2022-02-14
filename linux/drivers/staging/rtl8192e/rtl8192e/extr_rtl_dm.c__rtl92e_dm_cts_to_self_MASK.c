
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt_hi_throughput {scalar_t__ IOTPeer; int IOTAction; } ;
struct TYPE_4__ {unsigned long txbytesunicast; unsigned long rxbytesunicast; } ;
struct r8192_priv {TYPE_2__ stats; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int bCTSToSelfEnable; struct rt_hi_throughput* pHTInfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0((struct net_device *)VAR_2);
 struct rt_hi_throughput *VAR_4 = VAR_3->rtllib->pHTInfo;
 static unsigned long VAR_5;
 static unsigned long VAR_6;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;

 if (VAR_3->rtllib->bCTSToSelfEnable != 1) {
  VAR_4->IOTAction &= ~VAR_0;
  return;
 }
 if (VAR_4->IOTPeer == VAR_1) {
  VAR_7 = VAR_3->stats.txbytesunicast - VAR_5;
  VAR_8 = VAR_3->stats.rxbytesunicast - VAR_6;
  if (VAR_8 > 4*VAR_7)
   VAR_4->IOTAction &= ~VAR_0;
  else
   VAR_4->IOTAction |= VAR_0;

  VAR_5 = VAR_3->stats.txbytesunicast;
  VAR_6 = VAR_3->stats.rxbytesunicast;
 }
}
