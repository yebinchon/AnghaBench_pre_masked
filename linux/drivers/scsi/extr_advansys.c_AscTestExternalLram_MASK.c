
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_3__ {int iop_base; } ;
typedef int PortAddr ;
typedef TYPE_1__ ASC_DVC_VAR ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(ASC_DVC_VAR *VAR_0)
{
 PortAddr VAR_1;
 ushort VAR_2;
 ushort VAR_3;
 int VAR_4;

 VAR_1 = VAR_0->iop_base;
 VAR_4 = 0;
 VAR_2 = FUNC_0(241);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2);
 FUNC_4(VAR_1, 0x55AA);
 FUNC_6(10);
 FUNC_3(VAR_1, VAR_2);
 if (FUNC_1(VAR_1) == 0x55AA) {
  VAR_4 = 1;
  FUNC_5(VAR_1, VAR_2, VAR_3);
 }
 return (VAR_4);
}
