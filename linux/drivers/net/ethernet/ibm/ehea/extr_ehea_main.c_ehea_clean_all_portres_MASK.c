
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_port {int num_def_qps; int qp_eq; int * port_res; } ;


 int FUNC_0 (struct ehea_port*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ehea_port *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_def_qps; VAR_2++)
  VAR_1 |= FUNC_0(VAR_0, &VAR_0->port_res[VAR_2]);

 VAR_1 |= FUNC_1(VAR_0->qp_eq);

 return VAR_1;
}
