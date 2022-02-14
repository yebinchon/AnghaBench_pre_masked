
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cs5535_mfgpt_timer {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cs5535_mfgpt_timer*,int,int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;

int FUNC_4(struct cs5535_mfgpt_timer *VAR_6, int VAR_7, int *VAR_8,
  int VAR_9)
{
 uint32_t VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (!VAR_6) {
  FUNC_0(1);
  return -VAR_1;
 }
 FUNC_2(VAR_5, VAR_10, VAR_12);
 VAR_13 = ((VAR_7 == VAR_2 ? 0 : 4) + VAR_6->nr % 4) * 4;
 if (((VAR_10 >> VAR_13) & 0xF) == 2)
  return -VAR_1;


 if (!*VAR_8)
  *VAR_8 = (VAR_10 >> VAR_13) & 0xF;
 if (!*VAR_8)
  *VAR_8 = VAR_0;


 if (*VAR_8 < 1 || *VAR_8 == 2 || *VAR_8 > 15)
  return -VAR_1;
 FUNC_2(VAR_4, VAR_11, VAR_12);
 if (VAR_11 & (1 << *VAR_8))
  return -VAR_1;


 if (FUNC_1(VAR_6, VAR_7, VAR_3, VAR_9))
  return -VAR_1;
 if (VAR_9) {
  VAR_10 = (VAR_10 & ~(0xF << VAR_13)) | (*VAR_8 << VAR_13);
  FUNC_3(VAR_5, VAR_10, VAR_12);
 }

 return 0;
}
