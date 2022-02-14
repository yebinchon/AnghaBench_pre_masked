
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_mpeg_ops {int (* fini ) (struct saa7134_dev*) ;} ;
struct saa7134_dev {struct saa7134_mpeg_ops* mops; } ;


 int FUNC_0 (struct saa7134_dev*) ;

__attribute__((used)) static void FUNC_1(struct saa7134_mpeg_ops *VAR_0,
       struct saa7134_dev *VAR_1)
{
 if (((void*)0) == VAR_1->mops)
  return;
 if (VAR_1->mops != VAR_0)
  return;
 VAR_1->mops->fini(VAR_1);
 VAR_1->mops = ((void*)0);
}
