
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xb_req_data {scalar_t__ state; int err; void* body; int wq; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct xb_req_data*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static void *FUNC_4(struct xb_req_data *VAR_2)
{
 while (VAR_2->state != VAR_1) {
  FUNC_2(VAR_2->wq, FUNC_1(VAR_2));

  if (!FUNC_3())






   return FUNC_0(-VAR_0);
  if (VAR_2->err)
   return FUNC_0(VAR_2->err);

 }

 return VAR_2->body;
}
