
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct response_type {int type; } ;
struct ica_xcRB {int dummy; } ;
struct ap_message {int private; scalar_t__ psmid; int receive; int message; } ;
typedef int resp_type ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct ap_message*,struct ica_xcRB*,unsigned int*,unsigned short**) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct response_type*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

unsigned int FUNC_4(struct ica_xcRB *VAR_7,
    struct ap_message *VAR_8,
    unsigned int *VAR_9, unsigned short **VAR_10)
{
 struct response_type VAR_11 = {
  .type = VAR_0,
 };

 VAR_8->message = FUNC_2(VAR_3, VAR_2);
 if (!VAR_8->message)
  return -VAR_1;
 VAR_8->receive = VAR_5;
 VAR_8->psmid = (((unsigned long long) VAR_4->pid) << 32) +
    FUNC_1(&VAR_6);
 VAR_8->private = FUNC_3(&VAR_11, sizeof(VAR_11), VAR_2);
 if (!VAR_8->private)
  return -VAR_1;
 return FUNC_0(VAR_8, VAR_7, VAR_9, VAR_10);
}
