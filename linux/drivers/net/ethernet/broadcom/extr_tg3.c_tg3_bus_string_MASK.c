
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(struct tg3 *VAR_8, char *VAR_9)
{
 if (FUNC_2(VAR_8, VAR_5)) {
  FUNC_1(VAR_9, "PCI Express");
  return VAR_9;
 } else if (FUNC_2(VAR_8, VAR_3)) {
  u32 VAR_10 = FUNC_3(VAR_7) & 0x1f;

  FUNC_1(VAR_9, "PCIX:");

  if ((VAR_10 == 7) ||
      ((FUNC_3(VAR_0) & VAR_2) ==
       VAR_1))
   FUNC_0(VAR_9, "133MHz");
  else if (VAR_10 == 0)
   FUNC_0(VAR_9, "33MHz");
  else if (VAR_10 == 2)
   FUNC_0(VAR_9, "50MHz");
  else if (VAR_10 == 4)
   FUNC_0(VAR_9, "66MHz");
  else if (VAR_10 == 6)
   FUNC_0(VAR_9, "100MHz");
 } else {
  FUNC_1(VAR_9, "PCI:");
  if (FUNC_2(VAR_8, VAR_6))
   FUNC_0(VAR_9, "66MHz");
  else
   FUNC_0(VAR_9, "33MHz");
 }
 if (FUNC_2(VAR_8, VAR_4))
  FUNC_0(VAR_9, ":32-bit");
 else
  FUNC_0(VAR_9, ":64-bit");
 return VAR_9;
}
