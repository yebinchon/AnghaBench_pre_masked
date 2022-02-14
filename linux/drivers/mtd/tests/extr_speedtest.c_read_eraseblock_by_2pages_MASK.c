
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t loff_t ;
struct TYPE_3__ {size_t erasesize; } ;


 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t,int,void*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 size_t VAR_5 = VAR_3 * 2;
 int VAR_6, VAR_7 = VAR_2 / 2, VAR_8 = 0;
 loff_t VAR_9 = (loff_t)VAR_4 * VAR_1->erasesize;
 void *VAR_10 = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_8 = FUNC_0(VAR_1, VAR_9, VAR_5, VAR_10);
  if (VAR_8)
   return VAR_8;
  VAR_9 += VAR_5;
  VAR_10 += VAR_5;
 }
 if (VAR_2 % 2)
  VAR_8 = FUNC_0(VAR_1, VAR_9, VAR_3, VAR_10);

 return VAR_8;
}
