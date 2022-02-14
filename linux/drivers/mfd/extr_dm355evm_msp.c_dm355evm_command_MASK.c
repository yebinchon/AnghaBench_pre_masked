
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (unsigned int,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(unsigned VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3 < 0)
  FUNC_0(&VAR_1->dev, "command %d failure %d\n",
    VAR_2, VAR_3);
}
