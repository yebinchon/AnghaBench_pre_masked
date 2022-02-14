
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct response_type {int type; } ;
struct ap_message {int private; scalar_t__ psmid; int receive; int message; } ;
typedef int resp_type ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct response_type*,int,int ) ;
 int FUNC_3 (struct ap_message*,int ,unsigned int*) ;
 int VAR_7 ;
 int VAR_8 ;

unsigned int FUNC_4(struct ap_message *VAR_9, int *VAR_10,
         unsigned int *VAR_11)
{
 struct response_type VAR_12 = {
  .type = VAR_0,
 };

 VAR_9->message = FUNC_1(VAR_4, VAR_2);
 if (!VAR_9->message)
  return -VAR_1;
 VAR_9->receive = VAR_7;
 VAR_9->psmid = (((unsigned long long) VAR_6->pid) << 32) +
    FUNC_0(&VAR_8);
 VAR_9->private = FUNC_2(&VAR_12, sizeof(VAR_12), VAR_2);
 if (!VAR_9->private)
  return -VAR_1;

 FUNC_3(VAR_9, VAR_5, VAR_11);

 *VAR_10 = VAR_3;
 return 0;
}
