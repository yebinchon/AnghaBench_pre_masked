
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s3entry_method; scalar_t__ aon_ctrl_base; scalar_t__ aon_sram; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
 FUNC_1();


 FUNC_5(0, VAR_7.aon_sram + VAR_1);
 (void)FUNC_3(VAR_7.aon_sram + VAR_1);


 FUNC_5(0x10, VAR_7.aon_ctrl_base + VAR_0);
 (void)FUNC_3(VAR_7.aon_ctrl_base + VAR_0);

 if (VAR_7.s3entry_method == 1) {
  FUNC_4((VAR_4 <<
        VAR_6),
        ~VAR_5);
  FUNC_2(0);
  FUNC_0(VAR_2, 1);
  return;
 }

 FUNC_0(VAR_3, 0);
}
