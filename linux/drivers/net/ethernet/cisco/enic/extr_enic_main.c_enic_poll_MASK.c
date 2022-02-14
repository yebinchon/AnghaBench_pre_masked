
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct TYPE_2__ {scalar_t__ use_adaptive_rx_coalesce; } ;
struct enic {int * intr; int * rq; TYPE_1__ rx_coalesce_setting; int * cq; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct enic*,int *) ;
 unsigned int FUNC_1 (struct enic*,int ) ;
 unsigned int FUNC_2 (struct enic*,int ) ;
 unsigned int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct enic*,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct napi_struct*,unsigned int) ;
 struct enic* FUNC_6 (struct net_device*) ;
 unsigned int FUNC_7 (int *,unsigned int,int ,int *) ;
 int FUNC_8 (int *,unsigned int,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct napi_struct *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev;
 struct enic *VAR_7 = FUNC_6(VAR_6);
 unsigned int VAR_8 = FUNC_1(VAR_7, 0);
 unsigned int VAR_9 = FUNC_2(VAR_7, 0);
 unsigned int VAR_10 = FUNC_3();
 unsigned int VAR_11 = VAR_5;
 unsigned int VAR_12 = VAR_0;
 unsigned int VAR_13, VAR_14 = 0, VAR_15;
 int VAR_16;

 VAR_15 = FUNC_7(&VAR_7->cq[VAR_9], VAR_12,
           VAR_3, ((void*)0));

 if (VAR_5 > 0)
  VAR_14 = FUNC_7(&VAR_7->cq[VAR_8],
   VAR_11, VAR_2, ((void*)0));






 VAR_13 = VAR_14 + VAR_15;

 if (VAR_13 > 0)
  FUNC_8(&VAR_7->intr[VAR_10],
   VAR_13,
   0 ,
   0 );

 VAR_16 = FUNC_10(&VAR_7->rq[0], VAR_1);





 if (VAR_16)
  VAR_14 = VAR_11;
 if (VAR_7->rx_coalesce_setting.use_adaptive_rx_coalesce)



  FUNC_0(VAR_7, &VAR_7->rq[0]);

 if ((VAR_14 < VAR_5) && FUNC_5(VAR_4, VAR_14)) {





  if (VAR_7->rx_coalesce_setting.use_adaptive_rx_coalesce)
   FUNC_4(VAR_7, &VAR_7->rq[0]);
  FUNC_9(&VAR_7->intr[VAR_10]);
 }

 return VAR_14;
}
