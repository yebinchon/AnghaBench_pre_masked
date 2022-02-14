
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {struct dwc3_ep* private; } ;
struct dwc3_ep {struct dwc3* dwc; } ;
struct TYPE_2__ {int hwparams0; } ;
struct dwc3 {int lock; TYPE_1__ hwparams; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dwc3_ep*,int ) ;
 int FUNC_2 (struct seq_file*,char*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, void *VAR_2)
{
 struct dwc3_ep *VAR_3 = VAR_1->private;
 struct dwc3 *VAR_4 = VAR_3->dwc;
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_3(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_1(VAR_3, VAR_0);


 VAR_6 *= FUNC_0(VAR_4->hwparams.hwparams0);
 VAR_6 >>= 3;
 FUNC_2(VAR_1, "%u\n", VAR_6);
 FUNC_4(&VAR_4->lock, VAR_5);

 return 0;
}
