
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_4__ {int erasesize; } ;


 scalar_t__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_5 = FUNC_2(), VAR_6, VAR_7, VAR_8;
 loff_t VAR_9;

 VAR_6 = VAR_2[VAR_5];
 if (VAR_6 >= VAR_1->erasesize) {
  VAR_7 = FUNC_0(VAR_1, VAR_5);
  if (VAR_7)
   return VAR_7;
  VAR_6 = VAR_2[VAR_5] = 0;
 }
 VAR_8 = FUNC_3(VAR_6);
 VAR_8 = ((VAR_8 + VAR_3 - 1) / VAR_3) * VAR_3;
 if (VAR_6 + VAR_8 > VAR_1->erasesize) {
  if (VAR_0[VAR_5 + 1])
   VAR_8 = VAR_1->erasesize - VAR_6;
  else {
   VAR_7 = FUNC_0(VAR_1, VAR_5 + 1);
   if (VAR_7)
    return VAR_7;
   VAR_2[VAR_5 + 1] = 0;
  }
 }
 VAR_9 = (loff_t)VAR_5 * VAR_1->erasesize + VAR_6;
 VAR_7 = FUNC_1(VAR_1, VAR_9, VAR_8, VAR_4);
 if (FUNC_4(VAR_7))
  return VAR_7;
 VAR_6 += VAR_8;
 while (VAR_6 > VAR_1->erasesize) {
  VAR_2[VAR_5++] = VAR_1->erasesize;
  VAR_6 -= VAR_1->erasesize;
 }
 VAR_2[VAR_5] = VAR_6;
 return 0;
}
