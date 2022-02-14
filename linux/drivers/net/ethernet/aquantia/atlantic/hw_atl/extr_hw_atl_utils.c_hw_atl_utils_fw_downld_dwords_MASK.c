
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct aq_hw_s*,int ) ;
 int FUNC_2 (struct aq_hw_s*,int ,int) ;
 int FUNC_3 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_4 (struct aq_hw_s*) ;
 int FUNC_5 (struct aq_hw_s*) ;
 int FUNC_6 (struct aq_hw_s*) ;
 int FUNC_7 (int (*) (struct aq_hw_s*),struct aq_hw_s*,unsigned int,int,unsigned int,unsigned int) ;

int FUNC_8(struct aq_hw_s *VAR_6, u32 VAR_7,
      u32 *VAR_8, u32 VAR_9)
{
 int VAR_10 = 0;
 u32 VAR_11;

 VAR_10 = FUNC_7(FUNC_4,
     VAR_6, VAR_11, VAR_11 == 1U,
     1U, 10000U);

 if (VAR_10 < 0) {
  bool VAR_12;

  FUNC_3(VAR_6, 1U, VAR_1);
  VAR_12 = FUNC_4(VAR_6);
  if (!VAR_12) {
   VAR_10 = -VAR_0;
   goto err_exit;
  }
 }

 FUNC_2(VAR_6, VAR_2, VAR_7);

 for (++VAR_9; --VAR_9 && !VAR_10;) {
  FUNC_2(VAR_6, VAR_3, 0x00008000U);

  if (FUNC_0(VAR_5))
   VAR_10 = FUNC_7(FUNC_5,
       VAR_6, VAR_11, VAR_11 != VAR_7,
       1U, 1000U);
  else
   VAR_10 = FUNC_7(FUNC_6,
       VAR_6, VAR_11,
       !(VAR_11 & 0x100),
       1U, 1000U);

  *(VAR_8++) = FUNC_1(VAR_6, VAR_4);
  VAR_7 += 4;
 }

 FUNC_3(VAR_6, 1U, VAR_1);

err_exit:
 return VAR_10;
}
