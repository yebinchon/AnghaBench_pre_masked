
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iop_base; } ;
typedef int PortAddr ;
typedef TYPE_1__ ASC_DVC_VAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(ASC_DVC_VAR *VAR_7)
{
 PortAddr VAR_8;
 int VAR_9 = 10;

 VAR_8 = VAR_7->iop_base;
 while ((FUNC_0(VAR_8) & VAR_4)
        && (VAR_9-- > 0)) {
  FUNC_6(100);
 }
 FUNC_5(VAR_8);
 FUNC_2(VAR_8, VAR_0 | VAR_2 | VAR_1);
 FUNC_7(60);
 FUNC_3(VAR_8, VAR_6);
 FUNC_3(VAR_8, VAR_5);
 FUNC_2(VAR_8, VAR_0 | VAR_1);
 FUNC_2(VAR_8, VAR_1);
 FUNC_6(200);
 FUNC_4(VAR_8, VAR_3);
 FUNC_4(VAR_8, 0);
 return (FUNC_1(VAR_8));
}
