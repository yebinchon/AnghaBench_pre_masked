
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {scalar_t__* fw_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*,char*) ;
 scalar_t__ FUNC_1 (struct tg3*,int ) ;
 scalar_t__ FUNC_2 (struct tg3*,int ,int*) ;
 int FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*) ;
 int FUNC_7 (struct tg3*) ;
 int FUNC_8 (struct tg3*) ;
 int FUNC_9 (struct tg3*,int) ;

__attribute__((used)) static void FUNC_10(struct tg3 *VAR_9)
{
 u32 VAR_10;
 bool VAR_11 = 0;

 if (VAR_9->fw_ver[0] != 0)
  VAR_11 = 1;

 if (FUNC_1(VAR_9, VAR_2)) {
  FUNC_0(VAR_9->fw_ver, "sb");
  FUNC_8(VAR_9);
  return;
 }

 if (FUNC_2(VAR_9, 0, &VAR_10))
  return;

 if (VAR_10 == VAR_3)
  FUNC_4(VAR_9);
 else if ((VAR_10 & VAR_5) == VAR_4)
  FUNC_9(VAR_9, VAR_10);
 else if ((VAR_10 & VAR_7) == VAR_6)
  FUNC_6(VAR_9);

 if (FUNC_1(VAR_9, VAR_1)) {
  if (FUNC_1(VAR_9, VAR_0)) {
   FUNC_3(VAR_9);
   if (!VAR_11)
    FUNC_5(VAR_9);
  } else if (!VAR_11) {
   FUNC_7(VAR_9);
  }
 }

 VAR_9->fw_ver[VAR_8 - 1] = 0;
}
