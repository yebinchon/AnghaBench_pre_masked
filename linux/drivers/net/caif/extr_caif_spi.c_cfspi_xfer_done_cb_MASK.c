
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfspi_ifc {scalar_t__ priv; } ;
struct cfspi {int comp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cfspi_ifc *VAR_0)
{
 struct cfspi *VAR_1 = (struct cfspi *)VAR_0->priv;


 FUNC_0(&VAR_1->comp);
}
