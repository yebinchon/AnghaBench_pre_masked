
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camss {scalar_t__ version; int * genpd; int dev; int media_dev; int v4l2_dev; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct camss*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct camss *VAR_3)
{
 FUNC_5(&VAR_3->v4l2_dev);
 FUNC_3(&VAR_3->media_dev);
 FUNC_2(&VAR_3->media_dev);

 FUNC_4(VAR_3->dev);

 if (VAR_3->version == VAR_0) {
  FUNC_0(VAR_3->genpd[VAR_1], 1);
  FUNC_0(VAR_3->genpd[VAR_2], 1);
 }

 FUNC_1(VAR_3);
}
