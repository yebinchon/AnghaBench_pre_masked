
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_trb {int control; } ;
struct cdns3_request {size_t start_trb; int end_trb; struct cdns3_trb* trb; } ;
struct cdns3_endpoint {int ccs; int dequeue; scalar_t__ type; int enqueue; scalar_t__ free_trbs; int num_trbs; struct cdns3_trb* trb_pool; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cdns3_device*,struct cdns3_endpoint*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cdns3_request*,int,int) ;

__attribute__((used)) static bool FUNC_3(struct cdns3_endpoint *VAR_4,
      struct cdns3_request *VAR_5)
{
 struct cdns3_device *VAR_6 = VAR_4->cdns3_dev;
 struct cdns3_trb *VAR_7 = VAR_5->trb;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_6, VAR_4);
 VAR_10 = !!(FUNC_1(&VAR_6->regs->ep_cmd) & VAR_0);

 VAR_7 = &VAR_4->trb_pool[VAR_5->start_trb];

 if ((VAR_7->control & VAR_2) != VAR_4->ccs)
  goto finish;

 if (VAR_10 == 1 && VAR_8 == VAR_4->dequeue)
  goto finish;


 if (VAR_1 == 2 && VAR_4->type != VAR_3) {
  VAR_9 = 1;
  goto finish;
 }

 if (VAR_4->enqueue == VAR_4->dequeue &&
     VAR_4->free_trbs == 0) {
  VAR_9 = 1;
 } else if (VAR_4->dequeue < VAR_8) {
  if ((VAR_8 == (VAR_4->num_trbs - 1)) &&
      !VAR_4->dequeue)
   goto finish;

  if (VAR_5->end_trb >= VAR_4->dequeue &&
      VAR_5->end_trb < VAR_8)
   VAR_9 = 1;
 } else if (VAR_4->dequeue > VAR_8) {
  if (VAR_5->end_trb < VAR_8 ||
      VAR_5->end_trb >= VAR_4->dequeue)
   VAR_9 = 1;
 }

finish:
 FUNC_2(VAR_5, VAR_8, VAR_9);

 return VAR_9;
}
