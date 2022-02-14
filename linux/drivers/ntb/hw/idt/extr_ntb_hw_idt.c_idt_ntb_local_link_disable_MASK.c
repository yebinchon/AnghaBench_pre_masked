
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt_ntb_dev {int part; int mtbl_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct idt_ntb_dev*,int ,int) ;
 int FUNC_1 (struct idt_ntb_dev*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct idt_ntb_dev *VAR_6)
{
 unsigned long VAR_7;


 FUNC_0(VAR_6, VAR_1, 0);


 FUNC_2(&VAR_6->mtbl_lock, VAR_7);
 FUNC_0(VAR_6, VAR_3, VAR_6->part);
 FUNC_0(VAR_6, VAR_4, 0);
 FUNC_3(&VAR_6->mtbl_lock, VAR_7);


 FUNC_0(VAR_6, VAR_2, VAR_0);
 FUNC_1(VAR_6, VAR_5, (u32)1 << VAR_6->part);
}
