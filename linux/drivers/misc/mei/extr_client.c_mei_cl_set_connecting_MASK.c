
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fixed_address; } ;
struct mei_me_client {scalar_t__ connect_count; TYPE_1__ props; } ;
struct mei_cl {struct mei_me_client* me_cl; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mei_me_client*) ;
 int FUNC_1 (struct mei_me_client*) ;

__attribute__((used)) static int FUNC_2(struct mei_cl *VAR_3, struct mei_me_client *VAR_4)
{
 if (!FUNC_0(VAR_4))
  return -VAR_1;


 if (VAR_4->props.fixed_address) {
  if (VAR_4->connect_count) {
   FUNC_1(VAR_4);
   return -VAR_0;
  }
 }

 VAR_3->me_cl = VAR_4;
 VAR_3->state = VAR_2;
 VAR_3->me_cl->connect_count++;

 return 0;
}
