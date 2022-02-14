
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int length; int completion; int req_count; int req; int * buffer; } ;
struct zd_usb_interrupt {int read_regs_enabled; int lock; TYPE_1__ read_regs; scalar_t__ read_regs_int_overridden; } ;
struct zd_usb {struct zd_usb_interrupt intr; } ;
struct zd_mac {int process_intr; int lock; int intr_buffer; } ;
struct urb {int actual_length; int transfer_buffer; struct zd_usb* context; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct zd_usb*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 struct zd_mac* FUNC_14 (int ) ;
 int FUNC_15 (struct zd_usb*) ;

__attribute__((used)) static inline void FUNC_16(struct urb *VAR_2)
{
 struct zd_usb *VAR_3 = VAR_2->context;
 struct zd_usb_interrupt *VAR_4 = &VAR_3->intr;
 unsigned long VAR_5;
 int VAR_6;
 u16 VAR_7;

 FUNC_0(FUNC_6());
 FUNC_11(&VAR_4->lock, VAR_5);

 VAR_7 = FUNC_7(*(__le16 *)(VAR_2->transfer_buffer+2));
 if (VAR_7 == VAR_0) {
  struct zd_mac *VAR_8 = FUNC_14(FUNC_15(VAR_2->context));
  FUNC_10(&VAR_8->lock);
  FUNC_8(&VAR_8->intr_buffer, VAR_2->transfer_buffer,
    VAR_1);
  FUNC_12(&VAR_8->lock);
  FUNC_9(&VAR_8->process_intr);
 } else if (FUNC_1(&VAR_4->read_regs_enabled)) {
  VAR_6 = VAR_2->actual_length;
  VAR_4->read_regs.length = VAR_2->actual_length;
  if (VAR_6 > sizeof(VAR_4->read_regs.buffer))
   VAR_6 = sizeof(VAR_4->read_regs.buffer);

  FUNC_8(VAR_4->read_regs.buffer, VAR_2->transfer_buffer, VAR_6);







  if (!FUNC_3(VAR_3, VAR_4->read_regs.req,
      VAR_4->read_regs.req_count))
   goto out;

  FUNC_2(&VAR_4->read_regs_enabled, 0);
  VAR_4->read_regs_int_overridden = 0;
  FUNC_4(&VAR_4->read_regs.completion);

  goto out;
 }

out:
 FUNC_13(&VAR_4->lock, VAR_5);


 if (VAR_7 == VAR_0 && FUNC_1(&VAR_4->read_regs_enabled))
  FUNC_5(VAR_2);
}
