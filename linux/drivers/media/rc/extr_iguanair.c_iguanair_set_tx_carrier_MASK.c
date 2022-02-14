
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rc_dev {struct iguanair* priv; } ;
struct iguanair {int carrier; int cycle_overhead; int lock; TYPE_1__* packet; } ;
struct TYPE_2__ {int busy7; int busy4; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_1, uint32_t VAR_2)
{
 struct iguanair *VAR_3 = VAR_1->priv;

 if (VAR_2 < 25000 || VAR_2 > 150000)
  return -VAR_0;

 FUNC_1(&VAR_3->lock);

 if (VAR_2 != VAR_3->carrier) {
  uint32_t VAR_4, VAR_5, VAR_6;

  VAR_3->carrier = VAR_2;

  VAR_4 = FUNC_0(24000000, VAR_2 * 2) -
       VAR_3->cycle_overhead;






  VAR_6 = (4 - VAR_4) & 3;
  VAR_5 = (VAR_4 - VAR_6 * 7) / 4;
  VAR_3->packet->busy7 = (4 - VAR_6) * 2;
  VAR_3->packet->busy4 = 110 - VAR_5;
 }

 FUNC_2(&VAR_3->lock);

 return 0;
}
