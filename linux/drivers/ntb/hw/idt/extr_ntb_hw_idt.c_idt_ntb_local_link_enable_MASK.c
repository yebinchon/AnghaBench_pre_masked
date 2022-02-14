
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct idt_ntb_dev*,int ) ;
 int FUNC_2 (struct idt_ntb_dev*,int ,int) ;
 int FUNC_3 (struct idt_ntb_dev*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct idt_ntb_dev *VAR_11)
{
 u32 VAR_12, VAR_13 = 0;
 unsigned long VAR_14;


 FUNC_2(VAR_11, VAR_3, VAR_0);


 VAR_12 = FUNC_1(VAR_11, VAR_7);





 VAR_13 = FUNC_0(VAR_10, 0, VAR_12) |
     FUNC_0(VAR_9, 0, VAR_11->part) |
     VAR_2;
 FUNC_4(&VAR_11->mtbl_lock, VAR_14);
 FUNC_2(VAR_11, VAR_5, VAR_11->part);
 FUNC_2(VAR_11, VAR_6, VAR_13);
 FUNC_5(&VAR_11->mtbl_lock, VAR_14);


 FUNC_2(VAR_11, VAR_4, VAR_1);
 FUNC_3(VAR_11, VAR_8, (u32)1 << VAR_11->part);
}
