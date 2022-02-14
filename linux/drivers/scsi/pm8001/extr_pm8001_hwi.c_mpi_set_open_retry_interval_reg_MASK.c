
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
 int VAR_4 ;
 int FUNC_0 (struct pm8001_hba_info*,int) ;
 int FUNC_1 (struct pm8001_hba_info*,int,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pm8001_hba_info *VAR_5,
         u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 unsigned long VAR_10;







 VAR_8 = VAR_6 & 0x0000FFFF;
 FUNC_2(&VAR_5->lock, VAR_10);

 if (-1 == FUNC_0(VAR_5,
        0x00030000)) {
  FUNC_3(&VAR_5->lock, VAR_10);
  return;
 }
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_7 = 0x30B4 + 0x4000 * VAR_9;
  FUNC_1(VAR_5, 2, VAR_7, VAR_8);
 }

 if (-1 == FUNC_0(VAR_5,
        0x00040000)) {
  FUNC_3(&VAR_5->lock, VAR_10);
  return;
 }
 for (VAR_9 = 4; VAR_9 < 8; VAR_9++) {
  VAR_7 = 0x30B4 + 0x4000 * (VAR_9-4);
  FUNC_1(VAR_5, 2, VAR_7, VAR_8);
 }

 FUNC_0(VAR_5, 0x0);
 FUNC_3(&VAR_5->lock, VAR_10);
 return;
}
