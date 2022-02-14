
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 loff_t VAR_4 = (loff_t)VAR_3 * VAR_0->erasesize;

 FUNC_2(&VAR_1, VAR_2, VAR_0->erasesize);
 FUNC_0();
 return FUNC_1(VAR_0, VAR_4, VAR_0->erasesize, VAR_2);
}
