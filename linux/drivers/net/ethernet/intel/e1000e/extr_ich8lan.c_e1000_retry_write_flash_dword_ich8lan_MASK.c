
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_1,
       u32 VAR_2, u32 VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;


 VAR_2 <<= 1;
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (!VAR_4)
  return VAR_4;
 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  FUNC_1("Retrying Byte %8.8X at offset %u\n", VAR_3, VAR_2);
  FUNC_2(100, 200);
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (!VAR_4)
   break;
 }
 if (VAR_5 == 100)
  return -VAR_0;

 return 0;
}
