
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; } ;
struct isp1760_hcd {int i_thresh; int periodic_size; int * qh_list; int lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct isp1760_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_3)
{
 struct isp1760_hcd *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5;
 int VAR_6;

 FUNC_5(&VAR_4->lock);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_2(&VAR_4->qh_list[VAR_6]);





 VAR_4->periodic_size = VAR_0;


 VAR_5 = FUNC_4(VAR_3->regs, VAR_1);

 if (FUNC_0(VAR_5))
  VAR_4->i_thresh = 8;
 else
  VAR_4->i_thresh = 2 + FUNC_1(VAR_5);

 return 0;
}
