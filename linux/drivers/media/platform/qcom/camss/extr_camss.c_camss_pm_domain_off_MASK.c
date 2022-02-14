
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camss {scalar_t__ version; int * genpd_link; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct camss *VAR_1, int VAR_2)
{
 if (VAR_1->version == VAR_0)
  FUNC_0(VAR_1->genpd_link[VAR_2]);
}
