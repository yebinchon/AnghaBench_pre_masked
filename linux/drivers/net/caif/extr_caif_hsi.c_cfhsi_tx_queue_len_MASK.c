
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfhsi {int * qhead; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct cfhsi *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  VAR_3 += FUNC_0(&VAR_1->qhead[VAR_2]);
 return VAR_3;
}
