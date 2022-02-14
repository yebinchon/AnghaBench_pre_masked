
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_auart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,struct mxs_auart_port*,int ) ;
 unsigned int FUNC_1 (struct mxs_auart_port*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mxs_auart_port *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 FUNC_0(VAR_1, VAR_3, VAR_2);

 for (VAR_4 = 0; VAR_4 < 10000; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (!(VAR_5 & VAR_1))
   break;
  FUNC_2(3);
 }
 FUNC_0(VAR_0, VAR_3, VAR_2);
}
