
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcan_usb_msg_context {scalar_t__ end; scalar_t__ rec_idx; int ts16; TYPE_1__* pdev; int ptr; } ;
typedef int __le16 ;
struct TYPE_2__ {int time_ref; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct pcan_usb_msg_context *VAR_1)
{
 __le16 VAR_2;

 if ((VAR_1->ptr+2) > VAR_1->end)
  return -VAR_0;

 FUNC_1(&VAR_2, VAR_1->ptr, 2);

 VAR_1->ts16 = FUNC_0(VAR_2);

 if (VAR_1->rec_idx > 0)
  FUNC_3(&VAR_1->pdev->time_ref, VAR_1->ts16);
 else
  FUNC_2(&VAR_1->pdev->time_ref, VAR_1->ts16);

 return 0;
}
