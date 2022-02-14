
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_3__ {int ncci_head; TYPE_2__* card; } ;
typedef TYPE_1__ avmctrl_info ;
struct TYPE_4__ {unsigned int port; int lock; } ;
typedef TYPE_2__ avmcard ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct capi_ctr *VAR_1, u16 VAR_2)
{
 avmctrl_info *VAR_3 = (avmctrl_info *)(VAR_1->driverdata);
 avmcard *VAR_4 = VAR_3->card;
 unsigned int VAR_5 = VAR_4->port;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->lock, VAR_6);
 FUNC_2(&VAR_3->ncci_head, VAR_2);
 FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_2);
 FUNC_4(&VAR_4->lock, VAR_6);
}
