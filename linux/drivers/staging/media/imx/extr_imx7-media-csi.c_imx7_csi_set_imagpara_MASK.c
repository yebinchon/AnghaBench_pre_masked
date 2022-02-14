
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7_csi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct imx7_csi*) ;
 int FUNC_1 (struct imx7_csi*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct imx7_csi *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = (VAR_3 * VAR_4) >> 2;
 FUNC_1(VAR_2, VAR_6, VAR_1);

 VAR_5 = (VAR_3 << 16) | VAR_4;
 FUNC_1(VAR_2, VAR_5, VAR_0);


 FUNC_0(VAR_2);
}
