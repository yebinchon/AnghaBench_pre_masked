
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TCP_Server_Info {int in_flight; int req_lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int* (* get_credits_field ) (struct TCP_Server_Info*,int const) ;} ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (struct TCP_Server_Info*,int const) ;
 int FUNC_3 (struct TCP_Server_Info*,int,int,int const,unsigned int*) ;

__attribute__((used)) static int
FUNC_4(struct TCP_Server_Info *VAR_2, int VAR_3,
     const int VAR_4, unsigned int *VAR_5)
{
 int *VAR_6;

 VAR_6 = VAR_2->ops->get_credits_field(VAR_2, VAR_4 & VAR_0);

 FUNC_0(&VAR_2->req_lock);
 if (*VAR_6 < VAR_3) {




  if (VAR_2->in_flight < VAR_3 - *VAR_6) {
   FUNC_1(&VAR_2->req_lock);
   return -VAR_1;
  }
 }
 FUNC_1(&VAR_2->req_lock);

 return FUNC_3(VAR_2, VAR_3, 60000, VAR_4,
         VAR_5);
}
