
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*,int,int) ;
 int FUNC_4 (struct aq_hw_s*,int ,int ,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct aq_hw_s*,unsigned int) ;
 int FUNC_7 (struct aq_hw_s*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct aq_hw_s *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9 = 0;

 FUNC_3(VAR_6, 0x404, 0x40e1);
 FUNC_0(50);


 VAR_8 = FUNC_2(VAR_6, 0x53C);
 FUNC_3(VAR_6, 0x53C, VAR_8 | 0x10);

 VAR_7 = FUNC_2(VAR_6, VAR_1);
 FUNC_3(VAR_6, VAR_1, (VAR_7 & 0xBFFF) | 0x8000);


 FUNC_3(VAR_6, 0x404, 0x80e0);
 FUNC_3(VAR_6, 0x32a8, 0x0);
 FUNC_3(VAR_6, 0x520, 0x1);


 VAR_8 = FUNC_2(VAR_6, 0x53C);
 FUNC_3(VAR_6, 0x53C, VAR_8 | 0x10);
 FUNC_0(10);

 FUNC_3(VAR_6, 0x53C, VAR_8 & ~0x10);

 FUNC_3(VAR_6, 0x404, 0x180e0);

 for (VAR_9 = 0; VAR_9 < 1000; VAR_9++) {
  u32 VAR_10 = FUNC_2(VAR_6,
      VAR_4);

  VAR_10 = VAR_10 & 0x10;
  if (VAR_10)
   break;
  FUNC_0(10);
 }
 if (VAR_9 == 1000) {
  FUNC_5("MAC kickstart failed\n");
  return -VAR_0;
 }


 FUNC_3(VAR_6, 0x404, 0x80e0);
 FUNC_0(50);
 FUNC_3(VAR_6, 0x3a0, 0x1);




 FUNC_6(VAR_6, 0U);
 FUNC_7(VAR_6, 0U);
 FUNC_4(VAR_6, VAR_2,
       FUNC_1(VAR_3),
       VAR_3, 0x0);
 VAR_7 = FUNC_2(VAR_6, VAR_1);
 FUNC_3(VAR_6, VAR_1, (VAR_7 & 0xBFFF) | 0x8000);

 for (VAR_9 = 0; VAR_9 < 1000; VAR_9++) {
  u32 VAR_11 = FUNC_2(VAR_6, VAR_5);

  if (VAR_11)
   break;
  FUNC_0(10);
 }
 if (VAR_9 == 1000) {
  FUNC_5("FW kickstart failed\n");
  return -VAR_0;
 }

 FUNC_0(15);

 return 0;
}
