
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {int dummy; } ;
typedef int s64 ;
typedef int ktime_t ;
struct TYPE_2__ {int lock; int (* send_pulse ) (unsigned int,int ) ;int (* send_space ) () ;} ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned int,int ) ;
 size_t VAR_2 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct rc_dev *VAR_3, unsigned int *VAR_4,
   unsigned int VAR_5)
{
 unsigned long VAR_6;
 ktime_t VAR_7;
 s64 VAR_8;
 int VAR_9;

 FUNC_5(&VAR_1[VAR_2].lock, VAR_6);
 if (VAR_2 == VAR_0) {

  FUNC_4();
 }

 VAR_7 = FUNC_1();
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_9 % 2)
   VAR_1[VAR_2].send_space();
  else
   VAR_1[VAR_2].send_pulse(VAR_4[VAR_9], VAR_7);

  VAR_7 = FUNC_0(VAR_7, VAR_4[VAR_9]);
  VAR_8 = FUNC_2(VAR_7, FUNC_1());
  if (VAR_8 > 25) {
   FUNC_6(&VAR_1[VAR_2].lock, VAR_6);
   FUNC_10(VAR_8 - 25, VAR_8 + 25);
   FUNC_5(&VAR_1[VAR_2].lock, VAR_6);
  } else if (VAR_8 > 0) {
   FUNC_9(VAR_8);
  }
 }
 FUNC_3();
 FUNC_6(&VAR_1[VAR_2].lock, VAR_6);
 return VAR_5;
}
