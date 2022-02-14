
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dst_state {int type_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct dst_state *VAR_8)
{
 u32 VAR_9 = VAR_8->type_flags;

 FUNC_0("DST type flags :\n");
 if (VAR_9 & VAR_5)
  FUNC_0(" 0x%x newtuner\n", VAR_5);
 if (VAR_9 & VAR_3)
  FUNC_0(" 0x%x newtuner 2\n", VAR_3);
 if (VAR_9 & VAR_6)
  FUNC_0(" 0x%x ts204\n", VAR_6);
 if (VAR_9 & VAR_7)
  FUNC_0(" 0x%x VLF\n", VAR_7);
 if (VAR_9 & VAR_4)
  FUNC_0(" 0x%x symdiv\n", VAR_4);
 if (VAR_9 & VAR_0)
  FUNC_0(" 0x%x firmware version = 1\n", VAR_0);
 if (VAR_9 & VAR_1)
  FUNC_0(" 0x%x firmware version = 2\n", VAR_1);
 if (VAR_9 & VAR_2)
  FUNC_0(" 0x%x firmware version = 3\n", VAR_2);
 FUNC_0("\n");
}
