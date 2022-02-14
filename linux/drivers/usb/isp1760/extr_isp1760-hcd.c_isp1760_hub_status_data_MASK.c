
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_hcd {int regs; int state; } ;
struct isp1760_hcd {int lock; int reset_done; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct isp1760_hcd* FUNC_1 (struct usb_hcd*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_hcd *VAR_6, char *VAR_7)
{
 struct isp1760_hcd *VAR_8 = FUNC_1(VAR_6);
 u32 VAR_9, VAR_10 = 0;
 u32 VAR_11;
 int VAR_12 = 1;
 unsigned long VAR_13;


 if (!FUNC_0(VAR_6->state))
  return 0;


 VAR_7[0] = 0;
 VAR_11 = VAR_1;

 FUNC_4(&VAR_8->lock, VAR_13);
 VAR_9 = FUNC_2(VAR_6->regs, VAR_0);

 if (VAR_9 & VAR_2) {
  if (VAR_9 & VAR_1) {
   VAR_9 &= ~VAR_1;
   FUNC_3(VAR_6->regs, VAR_0, VAR_9);
   goto done;
  }
 }
 if ((VAR_9 & VAR_11) != 0
   || ((VAR_9 & VAR_3) != 0
    && FUNC_6(VAR_5,
     VAR_8->reset_done))) {
  VAR_7 [0] |= 1 << (0 + 1);
  VAR_10 = VAR_4;
 }

done:
 FUNC_5(&VAR_8->lock, VAR_13);
 return VAR_10 ? VAR_12 : 0;
}
