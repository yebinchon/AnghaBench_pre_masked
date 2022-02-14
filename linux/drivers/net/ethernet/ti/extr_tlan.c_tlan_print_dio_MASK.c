
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(u16 VAR_0)
{
 u32 VAR_1, VAR_2;
 int VAR_3;

 FUNC_0("Contents of internal registers for io base 0x%04hx\n",
  VAR_0);
 FUNC_0("Off.  +0        +4\n");
 for (VAR_3 = 0; VAR_3 < 0x4C; VAR_3 += 8) {
  VAR_1 = FUNC_1(VAR_0, VAR_3);
  VAR_2 = FUNC_1(VAR_0, VAR_3 + 0x4);
  FUNC_0("0x%02x  0x%08x 0x%08x\n", VAR_3, VAR_1, VAR_2);
 }

}
