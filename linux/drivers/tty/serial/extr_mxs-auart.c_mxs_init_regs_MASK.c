
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_auart_port {int * vendor; } ;


 scalar_t__ FUNC_0 (struct mxs_auart_port*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mxs_auart_port *VAR_2)
{
 if (FUNC_0(VAR_2))
  VAR_2->vendor = &VAR_0;
 else
  VAR_2->vendor = &VAR_1;
}
