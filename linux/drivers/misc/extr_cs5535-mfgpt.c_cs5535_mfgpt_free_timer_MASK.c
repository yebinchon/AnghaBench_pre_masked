
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct cs5535_mfgpt_timer {TYPE_1__* chip; int nr; } ;
struct TYPE_2__ {int lock; int avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cs5535_mfgpt_timer*,int ) ;
 int FUNC_2 (struct cs5535_mfgpt_timer*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct cs5535_mfgpt_timer *VAR_2)
{
 unsigned long VAR_3;
 uint16_t VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (!(VAR_4 & VAR_1)) {
  FUNC_3(&VAR_2->chip->lock, VAR_3);
  FUNC_0(VAR_2->nr, VAR_2->chip->avail);
  FUNC_4(&VAR_2->chip->lock, VAR_3);
 }

 FUNC_2(VAR_2);
}
