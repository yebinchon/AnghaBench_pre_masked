
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
 u8 VAR_9 = 0;
 u8 VAR_10;

 if (VAR_7 != VAR_0)
  return;

 FUNC_7(VAR_1,
  "trying to checkpoint backlight level to NVRAM...\n");

 if (FUNC_2(&VAR_8) < 0)
  return;

 if (FUNC_6(!FUNC_0(VAR_2, &VAR_9)))
  goto unlock;
 VAR_9 &= VAR_3;
 VAR_10 = FUNC_4(VAR_4);

 if (VAR_9 != ((VAR_10 & VAR_5)
        >> VAR_6)) {

  VAR_10 &= ~(VAR_5 <<
    VAR_6);
  VAR_10 |= VAR_9;
  FUNC_5(VAR_10, VAR_4);
  FUNC_1(VAR_1,
      "updated NVRAM backlight level to %u (0x%02x)\n",
      (unsigned int) VAR_9, (unsigned int) VAR_10);
 } else
  FUNC_7(VAR_1,
      "NVRAM backlight level already is %u (0x%02x)\n",
      (unsigned int) VAR_9, (unsigned int) VAR_10);

unlock:
 FUNC_3(&VAR_8);
}
