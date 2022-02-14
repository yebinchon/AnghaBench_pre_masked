
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct dwc3_ep* private; } ;
struct TYPE_2__ {int desc; } ;
struct dwc3_ep {int flags; TYPE_1__ endpoint; struct dwc3* dwc; } ;
struct dwc3 {int lock; } ;


 int VAR_0 ;




 int FUNC_0 (struct seq_file*,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct dwc3_ep *VAR_3 = VAR_1->private;
 struct dwc3 *VAR_4 = VAR_3->dwc;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->lock, VAR_5);
 if (!(VAR_3->flags & VAR_0) ||
   !VAR_3->endpoint.desc) {
  FUNC_0(VAR_1, "--\n");
  goto out;
 }

 switch (FUNC_3(VAR_3->endpoint.desc)) {
 case 130:
  FUNC_0(VAR_1, "control\n");
  break;
 case 128:
  FUNC_0(VAR_1, "isochronous\n");
  break;
 case 131:
  FUNC_0(VAR_1, "bulk\n");
  break;
 case 129:
  FUNC_0(VAR_1, "interrupt\n");
  break;
 default:
  FUNC_0(VAR_1, "--\n");
 }

out:
 FUNC_2(&VAR_4->lock, VAR_5);

 return 0;
}
