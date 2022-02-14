
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tp_cpl_stats {int rsp; int req; } ;
struct TYPE_3__ {int nchan; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int,int ,int) ;

void FUNC_1(struct adapter *VAR_2, struct tp_cpl_stats *VAR_3,
    bool VAR_4)
{
 int VAR_5 = VAR_2->params.arch.nchan;

 FUNC_0(VAR_2, VAR_3->req, VAR_5, VAR_0, VAR_4);

 FUNC_0(VAR_2, VAR_3->rsp, VAR_5, VAR_1, VAR_4);
}
