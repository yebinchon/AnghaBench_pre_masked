
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_port {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct mvneta_port *VAR_4 = (struct mvneta_port *)VAR_3;

 FUNC_0(VAR_4, VAR_1, 0);
 FUNC_1(&VAR_4->napi);

 return VAR_0;
}
