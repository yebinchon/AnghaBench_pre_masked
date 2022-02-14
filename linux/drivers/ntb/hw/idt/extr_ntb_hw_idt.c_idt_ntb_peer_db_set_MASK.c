
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct idt_ntb_dev*,int ,int ) ;
 struct idt_ntb_dev* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_3, u64 VAR_4)
{
 struct idt_ntb_dev *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 & ~(u64)VAR_1)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_2, (u32)VAR_4);
 return 0;
}
