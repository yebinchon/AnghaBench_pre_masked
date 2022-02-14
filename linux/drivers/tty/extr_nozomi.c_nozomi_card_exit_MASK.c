
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int irq; } ;
struct nozomi {int index_start; int base_addr; struct nozomi* send_buf; TYPE_1__* port; int reg_fcr; int reg_ier; scalar_t__ last_ier; } ;
struct ctrl_ul {int port; int DTR; scalar_t__ RTS; scalar_t__ reserved; } ;
struct TYPE_2__ {int fifo_ul; int * ul_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,struct nozomi*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nozomi*) ;
 int ** VAR_3 ;
 int FUNC_5 (struct pci_dev*) ;
 struct nozomi* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct nozomi*) ;
 int FUNC_9 (struct nozomi*) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_4)
{
 int VAR_5;
 struct ctrl_ul VAR_6;
 struct nozomi *VAR_7 = FUNC_6(VAR_4);


 VAR_7->last_ier = 0;
 FUNC_11(VAR_7->last_ier, VAR_7->reg_ier);

 FUNC_9(VAR_7);



 VAR_6.port = 0x00;
 VAR_6.reserved = 0;
 VAR_6.RTS = 0;
 VAR_6.DTR = 1;
 FUNC_0("sending flow control 0x%04X", *((u16 *)&VAR_6));


 FUNC_10(VAR_7->port[VAR_2].ul_addr[0], (u32 *)&VAR_6, 2);
 FUNC_11(VAR_0, VAR_7->reg_fcr);

 FUNC_8(VAR_7);

 FUNC_1(VAR_4->irq, VAR_7);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_3(&VAR_7->port[VAR_5].fifo_ul);

 FUNC_4(VAR_7->send_buf);

 FUNC_2(VAR_7->base_addr);

 FUNC_7(VAR_4);

 FUNC_5(VAR_4);

 VAR_3[VAR_7->index_start / VAR_1] = ((void*)0);

 FUNC_4(VAR_7);
}
