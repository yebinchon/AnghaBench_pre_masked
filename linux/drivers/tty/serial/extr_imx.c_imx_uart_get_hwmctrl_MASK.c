
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_port {scalar_t__ dte_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (struct imx_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct imx_port *VAR_9)
{
 unsigned int VAR_10 = VAR_2;
 unsigned VAR_11 = FUNC_0(VAR_9, VAR_4);
 unsigned VAR_12 = FUNC_0(VAR_9, VAR_6);

 if (VAR_11 & VAR_5)
  VAR_10 |= VAR_1;


 if (!(VAR_12 & VAR_7))
  VAR_10 |= VAR_0;

 if (VAR_9->dte_mode)
  if (!(FUNC_0(VAR_9, VAR_6) & VAR_8))
   VAR_10 |= VAR_3;

 return VAR_10;
}
