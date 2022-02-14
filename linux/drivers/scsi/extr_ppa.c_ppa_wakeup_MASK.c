
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wanted; int dev; } ;
typedef TYPE_1__ ppa_struct ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 ppa_struct *VAR_2 = (ppa_struct *) VAR_1;
 unsigned long VAR_3;

 FUNC_2(&VAR_0, VAR_3);
 if (VAR_2->wanted) {
  FUNC_1(VAR_2->dev);
  FUNC_0(VAR_2);
  VAR_2->wanted = 0;
 }
 FUNC_3(&VAR_0, VAR_3);
 return;
}
