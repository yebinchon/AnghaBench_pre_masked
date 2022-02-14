
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int db_mask_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct idt_ntb_dev*,int ,int *,int ) ;
 struct idt_ntb_dev* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_1, u64 VAR_2)
{
 struct idt_ntb_dev *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, VAR_0, &VAR_3->db_mask_lock,
      VAR_2);

 return 0;
}
