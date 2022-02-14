
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int peer_cnt; } ;


 struct idt_ntb_dev* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_1(struct ntb_dev *VAR_0)
{
 struct idt_ntb_dev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->peer_cnt;
}
