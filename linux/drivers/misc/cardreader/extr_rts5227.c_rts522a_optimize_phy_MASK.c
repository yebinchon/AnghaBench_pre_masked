
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct rtsx_pcr*,int,int ) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_pcr *VAR_13)
{
 int VAR_14;

 VAR_14 = FUNC_2(VAR_13, VAR_12, VAR_0,
  0x00);
 if (VAR_14 < 0)
  return VAR_14;

 if (FUNC_0(VAR_13, 0x522A, VAR_1)) {
  VAR_14 = FUNC_1(VAR_13, VAR_10,
   VAR_11);
  if (VAR_14)
   return VAR_14;

  FUNC_1(VAR_13, VAR_8, VAR_9);
  FUNC_1(VAR_13, VAR_2, VAR_3);
  FUNC_1(VAR_13, VAR_4, VAR_5);
  FUNC_1(VAR_13, VAR_6, VAR_7);
 }

 return 0;
}
