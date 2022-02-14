
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
struct TYPE_3__ {int erasesize; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_2)
{
 loff_t VAR_3 = (loff_t)VAR_2 * VAR_1->erasesize;

 return FUNC_0(VAR_1, VAR_3, VAR_1->erasesize, VAR_0);
}
