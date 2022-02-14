
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx7_csi {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct imx7_csi*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct imx7_csi *VAR_11)
{
 unsigned int VAR_12 = 0;
 unsigned int VAR_13;

 VAR_12 = VAR_6 | VAR_5 | VAR_2 | VAR_3 |
  VAR_1 | 1 << VAR_10 | VAR_4;
 FUNC_0(VAR_11, VAR_12, VAR_7);

 VAR_13 = (800 << 16) | 600;
 FUNC_0(VAR_11, VAR_13, VAR_9);

 VAR_12 = VAR_0;
 FUNC_0(VAR_11, VAR_12, VAR_8);
}
