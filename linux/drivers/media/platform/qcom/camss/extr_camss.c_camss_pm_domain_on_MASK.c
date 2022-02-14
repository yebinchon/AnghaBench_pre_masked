
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camss {scalar_t__ version; int * genpd_link; int * genpd; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct camss *VAR_5, int VAR_6)
{
 if (VAR_5->version == VAR_0) {
  VAR_5->genpd_link[VAR_6] = FUNC_0(VAR_5->dev,
    VAR_5->genpd[VAR_6], VAR_3 |
    VAR_1 | VAR_2);

  if (!VAR_5->genpd_link[VAR_6])
   return -VAR_4;
 }

 return 0;
}
