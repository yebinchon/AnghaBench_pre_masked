
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wanted; int dev; } ;
typedef TYPE_1__ ppa_struct ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(ppa_struct *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 1;
 FUNC_2(&VAR_0, VAR_2);
 if (FUNC_1(VAR_1->dev) == 0) {
  FUNC_0(VAR_1);
  VAR_3 = 0;
 }
 VAR_1->wanted = VAR_3;
 FUNC_3(&VAR_0, VAR_2);
 return VAR_3;
}
