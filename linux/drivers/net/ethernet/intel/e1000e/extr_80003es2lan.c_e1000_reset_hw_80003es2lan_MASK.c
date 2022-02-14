
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int *) ;
 int FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static s32 FUNC_12(struct e1000_hw *VAR_9)
{
 u32 VAR_10;
 s32 VAR_11;
 u16 VAR_12;




 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  FUNC_8("PCI-E Master disable polling has failed.\n");

 FUNC_8("Masking off all interrupts\n");
 FUNC_10(VAR_6, 0xffffffff);

 FUNC_10(VAR_7, 0);
 FUNC_10(VAR_8, VAR_4);
 FUNC_7();

 FUNC_11(10000, 11000);

 VAR_10 = FUNC_9(VAR_0);

 VAR_11 = FUNC_0(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_8("Issuing a global reset to MAC\n");
 FUNC_10(VAR_0, VAR_10 | VAR_1);
 FUNC_3(VAR_9);


 VAR_11 =
     FUNC_2(VAR_9, VAR_3,
         &VAR_12);
 if (!VAR_11) {
  VAR_12 |= VAR_2;
  VAR_11 = FUNC_4(VAR_9,
       VAR_3,
       VAR_12);
  if (VAR_11)
   FUNC_8("Error disabling far-end loopback\n");
 } else {
  FUNC_8("Error disabling far-end loopback\n");
 }

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11)

  return VAR_11;


 FUNC_10(VAR_6, 0xffffffff);
 FUNC_9(VAR_5);

 return FUNC_1(VAR_9);
}
