
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(adapter_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 0;

 if ((VAR_3 != 0x0) &&
     (VAR_3 != 0x1) &&
     (VAR_3 != 0x2) &&
     (VAR_3 != 0xd) &&
     (VAR_3 != 0xe))
   FUNC_0("No bist address: 0x%x\n", VAR_3);

 if (VAR_4 > 255)
  FUNC_0("Suspicious write out of range value: 0x%x\n", VAR_4);

 VAR_5 = ((0x01 << 24) | ((VAR_3 & 0xff) << 16) | (VAR_4 << 8) |
  ((VAR_2 & 0xff) << 0));
 FUNC_3(VAR_1, VAR_0, VAR_5);

 FUNC_1(5);

 FUNC_2(VAR_1, VAR_0, &VAR_6);
 if ((VAR_6 & (1 << 27)) != 0x0)
  FUNC_0("Still in bist write: 0x%x\n", VAR_6);
 else if ((VAR_6 & (1 << 26)) != 0x0)
  FUNC_0("bist write error: 0x%x\n", VAR_6);

 return 0;
}
