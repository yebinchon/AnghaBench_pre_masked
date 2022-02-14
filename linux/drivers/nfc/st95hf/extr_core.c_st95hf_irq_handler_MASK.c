
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req_issync; int done; } ;
struct st95hf_context {TYPE_1__ spicontext; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct st95hf_context *VAR_4 =
  (struct st95hf_context *)VAR_3;

 if (VAR_4->spicontext.req_issync) {
  FUNC_0(&VAR_4->spicontext.done);
  VAR_4->spicontext.req_issync = 0;
  return VAR_0;
 }

 return VAR_1;
}
