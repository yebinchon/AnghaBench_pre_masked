
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct igc_hw*) ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static s32 FUNC_7(struct igc_hw *VAR_7)
{
 s32 VAR_8;
 u32 VAR_9;




 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  FUNC_0("PCI-E Master disable polling has failed.\n");

 FUNC_0("Masking off all interrupts\n");
 FUNC_5(VAR_3, 0xffffffff);

 FUNC_5(VAR_4, 0);
 FUNC_5(VAR_5, VAR_6);
 FUNC_6();

 FUNC_4(10000, 20000);

 VAR_9 = FUNC_3(VAR_0);

 FUNC_0("Issuing a global reset to MAC\n");
 FUNC_5(VAR_0, VAR_9 | VAR_1);

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8) {




  FUNC_0("Auto Read Done did not complete\n");
 }


 FUNC_5(VAR_3, 0xffffffff);
 FUNC_3(VAR_2);

 return VAR_8;
}
