
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_req {scalar_t__ sg_cnt; int * sg; scalar_t__ p2p_dev; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct nvmet_req *VAR_0)
{
 if (VAR_0->p2p_dev)
  FUNC_0(VAR_0->p2p_dev, VAR_0->sg);
 else
  FUNC_1(VAR_0->sg);

 VAR_0->sg = ((void*)0);
 VAR_0->sg_cnt = 0;
}
