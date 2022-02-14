
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm8001_hba_info*,int) ;
 int FUNC_1 (struct pm8001_hba_info*,int,int) ;
 int FUNC_2 (struct pm8001_hba_info*,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pm8001_hba_info *VAR_4,
         u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 FUNC_3(&VAR_4->lock, VAR_9);
 if (-1 == FUNC_0(VAR_4,
    0x00030000)) {
  FUNC_4(&VAR_4->lock, VAR_9);
  return;
 }

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = 0x1074 + 0x4000 * VAR_8;
  FUNC_2(VAR_4, 2, VAR_7, 0x80001501);
 }

 if (-1 == FUNC_0(VAR_4,
    0x00040000)) {
  FUNC_4(&VAR_4->lock, VAR_9);
  return;
 }
 for (VAR_8 = 4; VAR_8 < 8; VAR_8++) {
  VAR_7 = 0x1074 + 0x4000 * (VAR_8-4);
  FUNC_2(VAR_4, 2, VAR_7, 0x80001501);
 }
 VAR_6 = FUNC_1(VAR_4, 2, 0xd8);
 FUNC_2(VAR_4, 2, 0xd8, 0x8000C016);


 FUNC_0(VAR_4, 0x0);
 FUNC_4(&VAR_4->lock, VAR_9);
 return;
}
