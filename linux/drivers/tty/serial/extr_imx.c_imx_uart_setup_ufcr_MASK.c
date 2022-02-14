
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_port {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct imx_port *VAR_4,
    unsigned char VAR_5, unsigned char VAR_6)
{
 unsigned int VAR_7;


 VAR_7 = FUNC_0(VAR_4, VAR_0) & (VAR_2 | VAR_1);
 VAR_7 |= VAR_5 << VAR_3 | VAR_6;
 FUNC_1(VAR_4, VAR_7, VAR_0);
}
