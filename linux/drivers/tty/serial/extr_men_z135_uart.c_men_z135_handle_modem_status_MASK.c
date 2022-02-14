
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct men_z135_port {int stat_reg; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct men_z135_port *VAR_4)
{
 u8 VAR_5;

 VAR_5 = (VAR_4->stat_reg >> 8) & 0xff;

 if (VAR_5 & VAR_3)
  FUNC_1(&VAR_4->port,
    VAR_5 & VAR_1);
 if (VAR_5 & VAR_2)
  FUNC_0(&VAR_4->port,
    VAR_5 & VAR_0);
}
