
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsd_sockmsg {int len; int type; } ;
struct TYPE_2__ {int len; int type; } ;
struct xb_req_data {scalar_t__ state; TYPE_1__ msg; } ;


 int FUNC_0 (struct xb_req_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct xb_req_data*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct xb_req_data*) ;

__attribute__((used)) static void *FUNC_5(struct xb_req_data *VAR_4, struct xsd_sockmsg *VAR_5)
{
 void *VAR_6;

 VAR_6 = FUNC_3(VAR_4);

 FUNC_4(VAR_4);

 VAR_5->type = VAR_4->msg.type;
 VAR_5->len = VAR_4->msg.len;

 FUNC_1(&VAR_3);
 if (VAR_4->state == VAR_1 ||
     VAR_4->state == VAR_2)
  VAR_4->state = VAR_0;
 else
  FUNC_0(VAR_4);
 FUNC_2(&VAR_3);

 return VAR_6;
}
