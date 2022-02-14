
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int error; int proc_id; } ;
struct TYPE_5__ {TYPE_1__ rsp; } ;
struct TYPE_6__ {TYPE_2__ context; } ;
struct as10x_cmd_t {TYPE_3__ body; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct as10x_cmd_t *VAR_1, uint16_t VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1->body.context.rsp.error;

 if ((VAR_3 == 0) &&
     (FUNC_0(VAR_1->body.context.rsp.proc_id) == VAR_2)) {
  return 0;
 }
 return VAR_0;
}
