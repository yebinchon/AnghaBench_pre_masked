
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct r8192_priv {int ps_lock; TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_sleep_wq; int hw_wakeup_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__,unsigned long) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

void FUNC_8(struct net_device *VAR_3, u64 VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_2(VAR_3);

 u32 VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 FUNC_4(&VAR_5->ps_lock, VAR_7);

 VAR_4 -= FUNC_0(8 + 16 + 7);

 VAR_8 = VAR_2 + FUNC_0(VAR_1);
 if (FUNC_7((unsigned long)VAR_4, VAR_8)) {
  FUNC_5(&VAR_5->ps_lock, VAR_7);
  FUNC_1(VAR_3, "too short to sleep::%lld < %ld\n",
       VAR_4 - VAR_2, FUNC_0(VAR_1));
  return;
 }
 VAR_8 = VAR_2 + FUNC_0(VAR_0);
 if (FUNC_6((unsigned long)VAR_4, VAR_8)) {
  FUNC_1(VAR_3, "========>too long to sleep:%lld > %ld\n",
       VAR_4 - VAR_2, FUNC_0(VAR_0));
  FUNC_5(&VAR_5->ps_lock, VAR_7);
  return;
 }
 VAR_6 = VAR_4 - VAR_2;
 FUNC_3(&VAR_5->rtllib->hw_wakeup_wq, VAR_6);
 FUNC_3(&VAR_5->rtllib->hw_sleep_wq, 0);
 FUNC_5(&VAR_5->ps_lock, VAR_7);
}
