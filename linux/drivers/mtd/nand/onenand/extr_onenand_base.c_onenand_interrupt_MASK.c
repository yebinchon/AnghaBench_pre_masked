
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; } ;
struct onenand_chip {TYPE_1__ complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_2;


 if (!VAR_3->complete.done)
  FUNC_0(&VAR_3->complete);

 return VAR_0;
}
