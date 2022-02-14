
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt_ntb_dev {int mtbl_lock; int part; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct idt_ntb_dev*,int ) ;
 int FUNC_1 (struct idt_ntb_dev*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct idt_ntb_dev *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_0(VAR_7, VAR_5);
 if (!(VAR_9 & VAR_6))
  return 0;


 VAR_9 = FUNC_0(VAR_7, VAR_2);
 if (!(VAR_9 & VAR_0))
  return 0;


 FUNC_2(&VAR_7->mtbl_lock, VAR_8);
 FUNC_1(VAR_7, VAR_3, VAR_7->part);
 VAR_9 = FUNC_0(VAR_7, VAR_4);
 FUNC_3(&VAR_7->mtbl_lock, VAR_8);

 return !!(VAR_9 & VAR_1);
}
