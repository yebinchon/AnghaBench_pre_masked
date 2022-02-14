
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int msg_mask_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct idt_ntb_dev*,int ,int *,int ,int ) ;
 struct idt_ntb_dev* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_2, u64 VAR_3)
{
 struct idt_ntb_dev *VAR_4 = FUNC_1(VAR_2);

 return FUNC_0(VAR_4, VAR_1, &VAR_4->msg_mask_lock,
    VAR_0, VAR_3);
}
