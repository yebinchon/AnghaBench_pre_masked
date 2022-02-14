
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int pdev; } ;
struct idt_ntb_dev {int mw_cnt; TYPE_1__* mws; } ;
typedef int resource_size_t ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {int idx; int size_max; int bar; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct idt_ntb_dev* FUNC_1 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_2(struct ntb_dev *VAR_1, int VAR_2,
        phys_addr_t *VAR_3, resource_size_t *VAR_4)
{
 struct idt_ntb_dev *VAR_5 = FUNC_1(VAR_1);

 if (VAR_2 < 0 || VAR_5->mw_cnt <= VAR_2)
  return -VAR_0;


 if (VAR_3 != ((void*)0))
  *VAR_3 = FUNC_0(VAR_1->pdev, VAR_5->mws[VAR_2].bar) +
   VAR_5->mws[VAR_2].idx * VAR_5->mws[VAR_2].size_max;


 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_5->mws[VAR_2].size_max;

 return 0;
}
