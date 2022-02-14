
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct denali_controller {int nbanks; TYPE_2__* dev; } ;
struct denali_chip {int nsels; int chip; TYPE_1__* sels; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {int bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct denali_controller*,struct denali_chip*) ;
 struct denali_chip* FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct denali_chip*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct denali_controller *VAR_3)
{
 struct denali_chip *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_3->nbanks;

 VAR_4 = FUNC_1(VAR_3->dev, FUNC_3(VAR_4, VAR_2, VAR_5),
        VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->nsels = VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_4->sels[VAR_6].bank = VAR_6;

 FUNC_2(&VAR_4->chip, VAR_3->dev->of_node);

 return FUNC_0(VAR_3, VAR_4);
}
