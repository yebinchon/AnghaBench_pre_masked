
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nicvf {TYPE_1__* pnicvf; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 struct netdev_queue* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct nicvf*,int ,int,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(struct nicvf *VAR_1, struct sk_buff *VAR_2,
         int VAR_3, int VAR_4)
{
 struct netdev_queue *VAR_5;

 VAR_5 = FUNC_0(VAR_1->pnicvf->netdev,
      FUNC_3(VAR_2));

 FUNC_1(VAR_5, VAR_2->len);


 FUNC_4();


 FUNC_2(VAR_1, VAR_0,
         VAR_3, VAR_4);
}
