
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_mpeg_ops {scalar_t__ type; int (* init ) (struct saa7134_dev*) ;} ;
struct saa7134_dev {size_t board; struct saa7134_mpeg_ops* mops; } ;
struct TYPE_2__ {scalar_t__ mpeg; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct saa7134_dev*) ;

__attribute__((used)) static void FUNC_1(struct saa7134_mpeg_ops *VAR_1,
       struct saa7134_dev *VAR_2)
{
 int VAR_3;

 if (((void*)0) != VAR_2->mops)
  return;
 if (VAR_0[VAR_2->board].mpeg != VAR_1->type)
  return;
 VAR_3 = VAR_1->init(VAR_2);
 if (0 != VAR_3)
  return;
 VAR_2->mops = VAR_1;
}
