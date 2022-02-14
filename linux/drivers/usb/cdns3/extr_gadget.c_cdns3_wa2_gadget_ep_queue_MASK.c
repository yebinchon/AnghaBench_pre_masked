
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int status; int list; } ;
struct cdns3_request {int flags; int list; TYPE_2__ request; } ;
struct cdns3_endpoint {int flags; int num; int dir; int wa2_descmiss_req_list; int pending_req_list; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_3__ {int ep_sts_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cdns3_endpoint*,struct cdns3_request*,int ) ;
 int FUNC_1 (struct cdns3_device*,int) ;
 int FUNC_2 (struct cdns3_endpoint*,TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cdns3_endpoint*,char*) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct cdns3_device *VAR_5,
         struct cdns3_endpoint *VAR_6,
         struct cdns3_request *VAR_7)
{
 int VAR_8 = 0;






 if (VAR_6->flags & VAR_1) {
  u32 VAR_9;

  FUNC_1(VAR_5, VAR_6->num | VAR_6->dir);
  VAR_6->flags &= ~VAR_1;
  VAR_9 = FUNC_5(&VAR_5->regs->ep_sts_en);
  VAR_9 &= ~VAR_3;
  FUNC_6(VAR_6, "workaround disabled\n");
  FUNC_7(VAR_9, &VAR_5->regs->ep_sts_en);
 }

 if (VAR_6->flags & VAR_2) {
  u8 VAR_10 = FUNC_4(&VAR_6->pending_req_list);
  u8 VAR_11 = FUNC_4(&VAR_6->wa2_descmiss_req_list);






  if (VAR_10 && !VAR_11 &&
      !(VAR_7->flags & VAR_4)) {
   FUNC_2(VAR_6,
           &VAR_7->request);

   FUNC_6(VAR_6, "get internal stored data");

   FUNC_3(&VAR_7->request.list,
          &VAR_6->pending_req_list);
   FUNC_0(VAR_6, VAR_7,
           VAR_7->request.status);






   return VAR_0;
  }





  if (!VAR_10 && !VAR_11) {
   FUNC_6(VAR_6, "wait for pending transfer\n");
   VAR_8 = 1;
  }

  if (VAR_7->flags & VAR_4)
   FUNC_3(&VAR_7->list,
          &VAR_6->wa2_descmiss_req_list);
 }

 return VAR_8;
}
