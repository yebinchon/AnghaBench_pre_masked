
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_wait {scalar_t__ b_status; int b_wait; } ;
struct TYPE_2__ {scalar_t__ status; } ;
struct nlm_rqst {TYPE_1__ a_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long FUNC_0 (int ,int,long) ;

int FUNC_1(struct nlm_wait *VAR_4, struct nlm_rqst *VAR_5, long VAR_6)
{
 long VAR_7;




 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_4->b_wait,
   VAR_4->b_status != VAR_2,
   VAR_6);
 if (VAR_7 < 0)
  return -VAR_1;

 if (VAR_4->b_status == VAR_3)
  VAR_4->b_status = VAR_2;
 VAR_5->a_res.status = VAR_4->b_status;
 return 0;
}
