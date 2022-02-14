
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fnic {unsigned int rq_count; TYPE_1__* lport; int * rq; int * cq; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 unsigned int FUNC_1 (int *,int,int ,int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct fnic *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3->rq_count; VAR_7++) {
  VAR_6 = FUNC_1(&VAR_3->cq[VAR_7], VAR_4,
      VAR_2,
      ((void*)0));
  if (VAR_6) {
   VAR_8 = FUNC_2(&VAR_3->rq[VAR_7], VAR_1);
   if (VAR_8)
    FUNC_0(VAR_0, VAR_3->lport->host,
          "fnic_alloc_rq_frame can't alloc"
          " frame\n");
  }
  VAR_5 += VAR_6;
 }

 return VAR_5;
}
