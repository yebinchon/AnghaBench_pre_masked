
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(adapter_t *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 0;

 if ((VAR_4 != 0x0) &&
     (VAR_4 != 0x1) &&
     (VAR_4 != 0x2) &&
     (VAR_4 != 0xd) &&
     (VAR_4 != 0xe))
   FUNC_0("No bist address: 0x%x\n", VAR_4);

 VAR_5 = ((0x00 << 24) | ((VAR_4 & 0xff) << 16) | (0x00 << 8) |
  ((VAR_3 & 0xff) << 0));
 FUNC_3(VAR_2, VAR_0, VAR_5);

 FUNC_1(10);

 FUNC_2(VAR_2, VAR_1, &VAR_6);
 if ((VAR_6 & (1 << 9)) != 0x0)
  FUNC_0("Still in bist read: 0x%x\n", VAR_6);
 else if ((VAR_6 & (1 << 8)) != 0x0)
  FUNC_0("bist read error: 0x%x\n", VAR_6);

 return VAR_6 & 0xff;
}
