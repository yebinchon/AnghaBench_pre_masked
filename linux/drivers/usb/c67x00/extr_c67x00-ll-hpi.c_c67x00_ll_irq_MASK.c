
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int msg_received; int last_msg; } ;
struct TYPE_4__ {TYPE_1__ lcp; } ;
struct c67x00_device {TYPE_2__ hpi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct c67x00_device*) ;

void FUNC_2(struct c67x00_device *VAR_1, u16 VAR_2)
{
 if ((VAR_2 & VAR_0) == 0)
  return;

 VAR_1->hpi.lcp.last_msg = FUNC_1(VAR_1);
 FUNC_0(&VAR_1->hpi.lcp.msg_received);
}
