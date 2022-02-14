
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct fhci_hcd* private; } ;
struct fhci_hcd {int* usb_irq_stat; } ;


 int FUNC_0 (struct seq_file*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct fhci_hcd *VAR_2 = VAR_0->private;
 int *VAR_3 = VAR_2->usb_irq_stat;

 FUNC_0(VAR_0,
  "RXB: %d\n" "TXB: %d\n" "BSY: %d\n"
  "SOF: %d\n" "TXE0: %d\n" "TXE1: %d\n"
  "TXE2: %d\n" "TXE3: %d\n" "IDLE: %d\n"
  "RESET: %d\n" "SFT: %d\n" "MSF: %d\n"
  "IDLE_ONLY: %d\n",
  VAR_3[0], VAR_3[1], VAR_3[2],
  VAR_3[3], VAR_3[4], VAR_3[5],
  VAR_3[6], VAR_3[7], VAR_3[8],
  VAR_3[9], VAR_3[10], VAR_3[11],
  VAR_3[12]);

 return 0;
}
