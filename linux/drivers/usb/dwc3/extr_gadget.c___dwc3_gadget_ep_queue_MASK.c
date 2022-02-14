
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int status; scalar_t__ actual; } ;
struct dwc3_request {scalar_t__ status; int list; TYPE_2__ request; struct dwc3_ep* dep; } ;
struct TYPE_5__ {int desc; } ;
struct dwc3_ep {int flags; TYPE_1__ endpoint; int pending_list; TYPE_2__* name; struct dwc3* dwc; } ;
struct dwc3 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,char*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (struct dwc3_ep*) ;
 int FUNC_2 (struct dwc3_ep*) ;
 int FUNC_3 (int ,char*,TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dwc3_request*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dwc3_ep *VAR_7, struct dwc3_request *VAR_8)
{
 struct dwc3 *VAR_9 = VAR_7->dwc;

 if (!VAR_7->endpoint.desc) {
  FUNC_3(VAR_9->dev, "%s: can't queue to disabled endpoint\n",
    VAR_7->name);
  return -VAR_6;
 }

 if (FUNC_0(VAR_8->dep != VAR_7, "request %pK belongs to '%s'\n",
    &VAR_8->request, VAR_8->dep->name))
  return -VAR_5;

 if (FUNC_0(VAR_8->status < VAR_2,
    "%s: request %pK already in flight\n",
    VAR_7->name, &VAR_8->request))
  return -VAR_5;

 FUNC_5(VAR_9->dev);

 VAR_8->request.actual = 0;
 VAR_8->request.status = -VAR_4;

 FUNC_6(VAR_8);

 FUNC_4(&VAR_8->list, &VAR_7->pending_list);
 VAR_8->status = VAR_3;
 if (FUNC_7(VAR_7->endpoint.desc)) {
  if (!(VAR_7->flags & VAR_0) &&
    !(VAR_7->flags & VAR_1))
   return 0;

  if ((VAR_7->flags & VAR_0)) {
   if (!(VAR_7->flags & VAR_1)) {
    return FUNC_2(VAR_7);
   }
  }
 }

 return FUNC_1(VAR_7);
}
