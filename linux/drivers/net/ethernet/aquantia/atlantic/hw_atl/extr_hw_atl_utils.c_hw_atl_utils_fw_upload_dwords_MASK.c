
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct aq_hw_s*,int,int) ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*,unsigned int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,struct aq_hw_s*,unsigned int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct aq_hw_s *VAR_5, u32 VAR_6, u32 *VAR_7,
      u32 VAR_8)
{
 u32 VAR_9;
 int VAR_10 = 0;

 VAR_10 = FUNC_4(VAR_3, VAR_5,
     VAR_9, VAR_9 == 1U,
     10U, 100000U);
 if (VAR_10 < 0)
  goto err_exit;

 if (FUNC_0(VAR_1)) {
  u32 VAR_11 = 0;

  for (; VAR_11 < VAR_8; ++VAR_11) {
   FUNC_1(VAR_5, 0x328, VAR_7[VAR_11]);
   FUNC_1(VAR_5, 0x32C,
     (0x80000000 | (0xFFFF & (VAR_11 * 4))));
   FUNC_2(VAR_5, 1);

   VAR_10 = FUNC_4(VAR_2,
       VAR_5, VAR_9,
       (VAR_9 & 0xF0000000) !=
       0x80000000,
       10U, 10000U);
  }
 } else {
  u32 VAR_12 = 0;

  FUNC_1(VAR_5, 0x208, VAR_6);

  for (; VAR_12 < VAR_8; ++VAR_12) {
   FUNC_1(VAR_5, 0x20C, VAR_7[VAR_12]);
   FUNC_1(VAR_5, 0x200, 0xC000);

   VAR_10 = FUNC_4(VAR_4,
       VAR_5, VAR_9,
       (VAR_9 & 0x100) == 0,
       1000U, 10000U);
  }
 }

 FUNC_3(VAR_5, 1U, VAR_0);

err_exit:
 return VAR_10;
}
