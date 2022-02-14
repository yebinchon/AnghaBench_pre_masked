
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_dev {int dummy; } ;
struct idt_ntb_peer {int mw_cnt; TYPE_1__* mws; } ;
struct idt_ntb_dev {int peer_cnt; struct idt_ntb_peer* peers; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int size_max; int size_align; int addr_align; } ;


 int VAR_0 ;
 struct idt_ntb_dev* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static int FUNC_1(struct ntb_dev *VAR_1, int VAR_2, int VAR_3,
    resource_size_t *VAR_4,
    resource_size_t *VAR_5,
    resource_size_t *VAR_6)
{
 struct idt_ntb_dev *VAR_7 = FUNC_0(VAR_1);
 struct idt_ntb_peer *VAR_8;

 if (VAR_2 < 0 || VAR_7->peer_cnt <= VAR_2)
  return -VAR_0;

 VAR_8 = &VAR_7->peers[VAR_2];

 if (VAR_3 < 0 || VAR_8->mw_cnt <= VAR_3)
  return -VAR_0;

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8->mws[VAR_3].addr_align;

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8->mws[VAR_3].size_align;

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8->mws[VAR_3].size_max;

 return 0;
}
