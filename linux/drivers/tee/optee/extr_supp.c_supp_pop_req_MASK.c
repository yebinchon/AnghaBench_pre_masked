
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int a; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
struct tee_param {scalar_t__ const attr; TYPE_2__ u; } ;
struct optee_supp_req {size_t num_params; } ;
struct optee_supp {int req_id; int idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct optee_supp_req* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct optee_supp_req* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static struct optee_supp_req *FUNC_3(struct optee_supp *VAR_4,
        size_t VAR_5,
        struct tee_param *VAR_6,
        size_t *VAR_7)
{
 struct optee_supp_req *VAR_8;
 int VAR_9;
 size_t VAR_10;
 const u32 VAR_11 = VAR_3 |
    VAR_2;

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (VAR_4->req_id == -1) {
  if (VAR_6->attr != VAR_11)
   return FUNC_0(-VAR_0);
  VAR_9 = VAR_6->u.value.a;
  VAR_10 = 1;
 } else {
  VAR_9 = VAR_4->req_id;
  VAR_10 = 0;
 }

 VAR_8 = FUNC_1(&VAR_4->idr, VAR_9);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 if ((VAR_5 - VAR_10) != VAR_8->num_params)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_4->idr, VAR_9);
 VAR_4->req_id = -1;
 *VAR_7 = VAR_10;

 return VAR_8;
}
