
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct TYPE_2__ {scalar_t__ use_adaptive_rx_coalesce; } ;
struct enic {int * intr; int * rq; TYPE_1__ rx_coalesce_setting; int * cq; struct napi_struct* napi; } ;


 int FUNC_0 (struct enic*,int *) ;
 unsigned int FUNC_1 (struct enic*,unsigned int) ;
 unsigned int FUNC_2 (struct enic*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct enic*,int *) ;
 scalar_t__ FUNC_4 (struct napi_struct*,unsigned int) ;
 struct enic* FUNC_5 (struct net_device*) ;
 unsigned int FUNC_6 (int *,unsigned int,int ,int *) ;
 int FUNC_7 (int *,unsigned int,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct napi_struct *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 struct enic *VAR_5 = FUNC_5(VAR_4);
 unsigned int VAR_6 = (VAR_2 - &VAR_5->napi[0]);
 unsigned int VAR_7 = FUNC_1(VAR_5, VAR_6);
 unsigned int VAR_8 = FUNC_2(VAR_5, VAR_6);
 unsigned int VAR_9 = VAR_3;
 unsigned int VAR_10 = 0;
 int VAR_11;




 if (VAR_3 > 0)
  VAR_10 = FUNC_6(&VAR_5->cq[VAR_7],
   VAR_9, VAR_1, ((void*)0));






 if (VAR_10 > 0)
  FUNC_7(&VAR_5->intr[VAR_8],
   VAR_10,
   0 ,
   0 );

 VAR_11 = FUNC_9(&VAR_5->rq[VAR_6], VAR_0);





 if (VAR_11)
  VAR_10 = VAR_9;
 if (VAR_5->rx_coalesce_setting.use_adaptive_rx_coalesce)



  FUNC_0(VAR_5, &VAR_5->rq[VAR_6]);

 if ((VAR_10 < VAR_3) && FUNC_4(VAR_2, VAR_10)) {





  if (VAR_5->rx_coalesce_setting.use_adaptive_rx_coalesce)
   FUNC_3(VAR_5, &VAR_5->rq[VAR_6]);
  FUNC_8(&VAR_5->intr[VAR_8]);
 }

 return VAR_10;
}
