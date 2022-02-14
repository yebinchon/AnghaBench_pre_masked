
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
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (struct rtsx_pcr*,int) ;
 int FUNC_3 (struct rtsx_pcr*,int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct rtsx_pcr *VAR_11, int VAR_12)
{
 int VAR_13;

 FUNC_1(VAR_11);
 FUNC_0(VAR_11, VAR_10, VAR_8,
   VAR_6, VAR_5);
 FUNC_0(VAR_11, VAR_10, VAR_9,
   VAR_1, VAR_2);
 VAR_13 = FUNC_2(VAR_11, 100);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_4(150);

 VAR_13 = FUNC_3(VAR_11, VAR_8,
   VAR_6, VAR_3);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_4(150);

 VAR_13 = FUNC_3(VAR_11, VAR_8,
   VAR_6, VAR_4);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_4(150);

 VAR_13 = FUNC_3(VAR_11, VAR_8,
   VAR_6, VAR_7);
 if (VAR_13 < 0)
  return VAR_13;

 return FUNC_3(VAR_11, VAR_9, VAR_1, VAR_0);
}
