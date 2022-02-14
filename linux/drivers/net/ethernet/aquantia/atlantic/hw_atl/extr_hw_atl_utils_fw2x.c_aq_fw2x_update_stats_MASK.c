
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aq_hw_s*,int ) ;
 int FUNC_2 (struct aq_hw_s*,int ,int) ;
 int FUNC_3 (struct aq_hw_s*) ;
 int FUNC_4 (int ,struct aq_hw_s*,int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct aq_hw_s *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5 = FUNC_1(VAR_3, VAR_1);
 u32 VAR_6 = VAR_5 & FUNC_0(VAR_0);
 u32 VAR_7;


 VAR_5 = VAR_5 ^ FUNC_0(VAR_0);
 FUNC_2(VAR_3, VAR_1, VAR_5);


 VAR_4 = FUNC_4(VAR_2,
     VAR_3, VAR_7,
     VAR_6 != (VAR_7 &
     FUNC_0(VAR_0)),
     1U, 10000U);
 if (VAR_4)
  return VAR_4;

 return FUNC_3(VAR_3);
}
