
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct response_type {int type; } ;
struct ep11_urb {int dummy; } ;
struct ap_message {int private; scalar_t__ psmid; int receive; int message; } ;
typedef int resp_type ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct response_type*,int,int ) ;
 unsigned int FUNC_3 (struct ap_message*,struct ep11_urb*,unsigned int*) ;
 int VAR_5 ;
 int VAR_6 ;

unsigned int FUNC_4(struct ep11_urb *VAR_7,
        struct ap_message *VAR_8,
        unsigned int *VAR_9)
{
 struct response_type VAR_10 = {
  .type = VAR_0,
 };

 VAR_8->message = FUNC_1(VAR_3, VAR_2);
 if (!VAR_8->message)
  return -VAR_1;
 VAR_8->receive = VAR_5;
 VAR_8->psmid = (((unsigned long long) VAR_4->pid) << 32) +
    FUNC_0(&VAR_6);
 VAR_8->private = FUNC_2(&VAR_10, sizeof(VAR_10), VAR_2);
 if (!VAR_8->private)
  return -VAR_1;
 return FUNC_3(VAR_8, VAR_7, VAR_9);
}
