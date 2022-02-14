
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*,int,int) ;
 int FUNC_4 (struct aq_hw_s*,int ,int ,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct aq_hw_s*,unsigned int) ;
 int FUNC_7 (struct aq_hw_s*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct aq_hw_s *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_3(VAR_7, 0x404, 0x40e1);
 FUNC_3(VAR_7, 0x3a0, 0x1);
 FUNC_3(VAR_7, 0x32a8, 0x0);


 FUNC_3(VAR_7, 0x388, 0xDEAD);


 VAR_9 = FUNC_2(VAR_7, 0x53C);
 FUNC_3(VAR_7, 0x53C, VAR_9 | 0x10);


 FUNC_6(VAR_7, 0U);
 FUNC_7(VAR_7, 0U);
 FUNC_4(VAR_7, VAR_4,
       FUNC_1(VAR_5),
       VAR_5, 0x0);
 VAR_8 = FUNC_2(VAR_7, VAR_3);
 FUNC_3(VAR_7, VAR_3,
   (VAR_8 & 0xFFFFBFFF) | 0x8000);

 if (VAR_2)
  FUNC_3(VAR_7, 0x534, 0x0);

 FUNC_3(VAR_7, 0x404, 0x40e0);


 for (VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
  VAR_10 = FUNC_2(VAR_7, 0x388) & 0xFFFF;
  if (VAR_10 && VAR_10 != 0xDEAD)
   break;
  FUNC_0(10);
 }
 if (!VAR_10 || VAR_10 == 0xDEAD) {
  FUNC_5("RBL Restart failed");
  return -VAR_0;
 }


 if (VAR_2)
  FUNC_3(VAR_7, 0x534, 0xA0);

 if (VAR_10 == 0xF1A7) {
  FUNC_5("No FW detected. Dynamic FW load not implemented\n");
  return -VAR_1;
 }

 for (VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
  u32 VAR_12 = FUNC_2(VAR_7, VAR_6);

  if (VAR_12)
   break;
  FUNC_0(10);
 }
 if (VAR_11 == 1000) {
  FUNC_5("FW kickstart failed\n");
  return -VAR_0;
 }

 FUNC_0(15);

 return 0;
}
