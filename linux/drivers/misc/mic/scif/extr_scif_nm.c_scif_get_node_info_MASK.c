
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {size_t node; } ;
struct TYPE_4__ {int node; } ;
struct scifmsg {scalar_t__* payload; TYPE_2__ dst; TYPE_1__ src; int uop; } ;
struct TYPE_6__ {int nodeid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 TYPE_3__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,struct scifmsg*) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
 struct scifmsg VAR_5;
 FUNC_0(VAR_2);

 VAR_5.uop = VAR_0;
 VAR_5.src.node = VAR_4.nodeid;
 VAR_5.dst.node = VAR_1;
 VAR_5.payload[3] = (u64)&VAR_2;

 if ((FUNC_1(&VAR_3[VAR_1], &VAR_5)))
  return;


 FUNC_2(&VAR_2);
}
