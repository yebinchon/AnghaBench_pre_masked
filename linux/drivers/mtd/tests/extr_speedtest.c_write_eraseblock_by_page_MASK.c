
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,scalar_t__,void*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 loff_t VAR_7 = (loff_t)VAR_4 * VAR_1->erasesize;
 void *VAR_8 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_0(VAR_1, VAR_7, VAR_3, VAR_8);
  if (VAR_6)
   break;
  VAR_7 += VAR_3;
  VAR_8 += VAR_3;
 }

 return VAR_6;
}
