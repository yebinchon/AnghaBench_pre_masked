
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_hw_s {unsigned int mbox_addr; } ;
struct aq_hw_caps_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*,int) ;
 int FUNC_1 (struct aq_hw_s*,int ,unsigned int) ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (struct aq_hw_s*,int,unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct aq_hw_s*,unsigned int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct aq_hw_s *VAR_2,
     const struct aq_hw_caps_s *VAR_3)
{
 int VAR_4 = 0;

 if (!FUNC_0(VAR_2, 0x370U)) {
  unsigned int VAR_5 = 0U;
  unsigned int VAR_6 = 0U;

  FUNC_2(&VAR_5, sizeof(unsigned int));

  VAR_6 = 0x02020202U | (0xFEFEFEFEU & VAR_5);
  FUNC_1(VAR_2, VAR_0, VAR_6);
 }

 FUNC_3(VAR_2, 0x00000000U, 25U);


 VAR_4 = FUNC_4(VAR_1,
     VAR_2, VAR_2->mbox_addr,
     VAR_2->mbox_addr != 0U,
     1000U, 10000U);

 return VAR_4;
}
