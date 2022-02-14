
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ati_remote {unsigned long acc_jiffies; scalar_t__ old_jiffies; } ;
struct TYPE_3__ {int msecs; int value; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ati_remote *VAR_2)
{
 unsigned long VAR_3 = VAR_1, VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(250);

 if (FUNC_2(VAR_3, VAR_2->old_jiffies + VAR_4)) {
  VAR_2->acc_jiffies = VAR_3;
  return 1;
 }
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0) - 1; VAR_5++) {
  unsigned long VAR_6 = FUNC_1(VAR_0[VAR_5].msecs);

  if (FUNC_3(VAR_3, VAR_2->acc_jiffies + VAR_6))
   return VAR_0[VAR_5].value;
 }
 return VAR_0[VAR_5].value;
}
