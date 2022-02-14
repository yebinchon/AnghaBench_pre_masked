
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {struct sk_buff** skbs; scalar_t__ up; } ;
struct ns83820 {int IMR_cache; TYPE_2__ rx_info; scalar_t__ base; TYPE_1__* pci_dev; int misc_lock; } ;
struct TYPE_3__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ns83820*,unsigned int) ;
 int FUNC_1 (char*,struct ns83820*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ns83820 *VAR_9)
{
 unsigned VAR_10;
 unsigned long VAR_11;

 FUNC_1("ns83820_cleanup_rx(%p)\n", VAR_9);


 FUNC_4(&VAR_9->misc_lock, VAR_11);
 VAR_9->IMR_cache &= ~(VAR_5 | VAR_1 | VAR_3 | VAR_2 | VAR_4);
 FUNC_7(VAR_9->IMR_cache, VAR_9->base + VAR_0);
 FUNC_5(&VAR_9->misc_lock, VAR_11);


 VAR_9->rx_info.up = 0;
 FUNC_6(VAR_9->pci_dev->irq);


 FUNC_3(VAR_9->base + VAR_0);


 FUNC_7(0, VAR_9->base + VAR_8);
 FUNC_7(0, VAR_9->base + VAR_7);

 for (VAR_10=0; VAR_10<VAR_6; VAR_10++) {
  struct sk_buff *VAR_12 = VAR_9->rx_info.skbs[VAR_10];
  VAR_9->rx_info.skbs[VAR_10] = ((void*)0);
  FUNC_0(VAR_9, VAR_10);
  FUNC_2(VAR_12);
 }
}
