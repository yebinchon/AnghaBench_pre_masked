
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct cs5535_mfgpt_timer {int nr; struct cs5535_mfgpt_chip* chip; } ;
struct cs5535_mfgpt_chip {int lock; int avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct cs5535_mfgpt_timer*,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct cs5535_mfgpt_chip *VAR_4)
{
 struct cs5535_mfgpt_timer VAR_5 = { .chip = VAR_4 };
 unsigned long VAR_6;
 int VAR_7 = 0;
 uint16_t VAR_8;
 int VAR_9;


 if (VAR_3 == 1)
  FUNC_2();
 else if (VAR_3 == 2)
  FUNC_3();


 FUNC_4(&VAR_4->lock, VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_5.nr = VAR_9;
  VAR_8 = FUNC_1(&VAR_5, VAR_1);
  if (!(VAR_8 & VAR_2) || VAR_3 == 2) {
   FUNC_0(VAR_9, VAR_4->avail);
   VAR_7++;
  }
 }
 FUNC_5(&VAR_4->lock, VAR_6);

 return VAR_7;
}
