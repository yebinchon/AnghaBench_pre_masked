
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int pids; int control; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11;

retry:
 FUNC_4(VAR_7 | VAR_1, &VAR_6->control);
 VAR_11 = FUNC_2();
 VAR_9 = FUNC_3(&VAR_6->pids);
 VAR_10 = FUNC_0(VAR_9);

 if (VAR_11 < 0) {






  if (VAR_11 == -VAR_2 && !VAR_5)
   VAR_5 = 1;
  if (VAR_11 == -VAR_0 && --VAR_8 > 0)
   goto retry;
  return VAR_11;
 }





 if ((VAR_10 == VAR_3) || (VAR_10 == VAR_4))
  FUNC_1();


 if (VAR_10 == VAR_3) {
  if (--VAR_8 > 0)
   goto retry;
 }

 return VAR_11;
}
