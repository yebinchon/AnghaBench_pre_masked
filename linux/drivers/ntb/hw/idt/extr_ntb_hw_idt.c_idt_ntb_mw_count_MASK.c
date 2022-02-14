
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct idt_ntb_dev {int peer_cnt; TYPE_1__* peers; } ;
struct TYPE_2__ {int mw_cnt; } ;


 int VAR_0 ;
 struct idt_ntb_dev* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_1(struct ntb_dev *VAR_1, int VAR_2)
{
 struct idt_ntb_dev *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < 0 || VAR_3->peer_cnt <= VAR_2)
  return -VAR_0;

 return VAR_3->peers[VAR_2].mw_cnt;
}
