
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_port {int * txqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,int *) ;
 int FUNC_1 (struct mvneta_port*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct mvneta_port *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_3, &VAR_3->txqs[VAR_4]);

 FUNC_1(VAR_3, VAR_1, VAR_0);
 FUNC_1(VAR_3, VAR_1, 0);
}
