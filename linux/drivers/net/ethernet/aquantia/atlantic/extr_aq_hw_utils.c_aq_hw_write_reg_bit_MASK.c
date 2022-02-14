
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*,int) ;
 int FUNC_1 (struct aq_hw_s*,int,int) ;

void FUNC_2(struct aq_hw_s *VAR_0, u32 VAR_1, u32 VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 if (VAR_2 ^ ~0) {
  u32 VAR_5, VAR_6;

  VAR_5 = FUNC_0(VAR_0, VAR_1);
  VAR_6 = (VAR_5 & (~VAR_2)) | (VAR_4 << VAR_3);

  if (VAR_5 != VAR_6)
   FUNC_1(VAR_0, VAR_1, VAR_6);
 } else {
  FUNC_1(VAR_0, VAR_1, VAR_4);
 }
}
