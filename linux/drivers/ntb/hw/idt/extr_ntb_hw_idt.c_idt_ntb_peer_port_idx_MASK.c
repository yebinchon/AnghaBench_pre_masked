
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int* port_idx_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct idt_ntb_dev* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_1(struct ntb_dev *VAR_2, int VAR_3)
{
 struct idt_ntb_dev *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 < 0 || VAR_1 <= VAR_3)
  return -VAR_0;

 return VAR_4->port_idx_map[VAR_3];
}
