
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 scalar_t__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_3 = FUNC_1();
 int VAR_4 = FUNC_3();
 int VAR_5 = FUNC_2(VAR_4);
 loff_t VAR_6;

 if (VAR_0[VAR_3 + 1]) {
  if (VAR_4 >= VAR_1->erasesize)
   VAR_4 -= VAR_1->erasesize;
  if (VAR_4 + VAR_5 > VAR_1->erasesize)
   VAR_5 = VAR_1->erasesize - VAR_4;
 }
 VAR_6 = (loff_t)VAR_3 * VAR_1->erasesize + VAR_4;
 return FUNC_0(VAR_1, VAR_6, VAR_5, VAR_2);
}
