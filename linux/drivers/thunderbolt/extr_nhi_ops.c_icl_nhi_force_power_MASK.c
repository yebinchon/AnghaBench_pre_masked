
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_nhi {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct tb_nhi *VAR_7, bool VAR_8)
{
 u32 VAR_9;
 FUNC_1(VAR_7->pdev, VAR_1, &VAR_9);
 if (VAR_8) {
  VAR_9 &= ~VAR_2;
  VAR_9 |= 0x22 << VAR_3;
  VAR_9 |= VAR_4;
 } else {
  VAR_9 &= ~VAR_4;
 }
 FUNC_2(VAR_7->pdev, VAR_1, VAR_9);

 if (VAR_8) {
  unsigned int VAR_10 = 10;
  u32 VAR_11;


  do {
   FUNC_1(VAR_7->pdev, VAR_5, &VAR_11);
   if (VAR_11 & VAR_6)
    return 0;
   FUNC_0(250);
  } while (--VAR_10);

  return -VAR_0;
 }

 return 0;
}
