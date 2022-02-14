
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenstore_domain_interface {scalar_t__ req_prod; scalar_t__ req_cons; scalar_t__ rsp_prod; scalar_t__ rsp_cons; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xenstore_domain_interface* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

int FUNC_7(void)
{
 struct xenstore_domain_interface *VAR_8 = VAR_4;

 if (VAR_8->req_prod != VAR_8->req_cons)
  FUNC_4("request ring is not quiescent (%08x:%08x)!\n",
         VAR_8->req_cons, VAR_8->req_prod);

 if (VAR_8->rsp_prod != VAR_8->rsp_cons) {
  FUNC_5("response ring is not quiescent (%08x:%08x): fixing up\n",
   VAR_8->rsp_cons, VAR_8->rsp_prod);

  if (!VAR_0)
   VAR_8->rsp_cons = VAR_8->rsp_prod;
 }

 if (VAR_5) {

  FUNC_6(VAR_3, VAR_5);
 } else {
  int VAR_9;

  VAR_9 = FUNC_2(VAR_3, VAR_1,
      0, "xenbus", &VAR_2);
  if (VAR_9 < 0) {
   FUNC_4("request irq failed %i\n", VAR_9);
   return VAR_9;
  }

  VAR_5 = VAR_9;

  if (!VAR_6) {
   VAR_6 = FUNC_3(VAR_7, ((void*)0),
        "xenbus");
   if (FUNC_0(VAR_6))
    return FUNC_1(VAR_6);
  }
 }

 return 0;
}
