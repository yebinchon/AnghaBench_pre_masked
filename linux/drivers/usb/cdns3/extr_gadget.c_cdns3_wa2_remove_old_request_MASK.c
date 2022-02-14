
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int buf; } ;
struct cdns3_request {int flags; int list; TYPE_1__ request; } ;
struct cdns3_endpoint {int wa2_counter; int endpoint; int wa2_descmiss_req_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 struct cdns3_request* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cdns3_endpoint*,char*) ;

__attribute__((used)) static void FUNC_6(struct cdns3_endpoint *VAR_1)
{
 struct cdns3_request *VAR_2;

 while (!FUNC_4(&VAR_1->wa2_descmiss_req_list)) {
  u8 VAR_3;

  VAR_2 = FUNC_1(&VAR_1->wa2_descmiss_req_list);
  VAR_3 = !!(VAR_2->flags & VAR_0);

  FUNC_5(VAR_1, "removes eldest request");

  FUNC_2(VAR_2->request.buf);
  FUNC_0(&VAR_1->endpoint,
          &VAR_2->request);
  FUNC_3(&VAR_2->list);
  --VAR_1->wa2_counter;

  if (!VAR_3)
   break;
 }
}
