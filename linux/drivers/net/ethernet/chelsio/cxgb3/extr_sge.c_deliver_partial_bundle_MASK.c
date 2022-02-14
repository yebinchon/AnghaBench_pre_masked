
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int (* recv ) (struct t3cdev*,struct sk_buff**,int) ;} ;
struct sk_buff {int dummy; } ;
struct sge_rspq {int offload_bundles; } ;


 int FUNC_0 (struct t3cdev*,struct sk_buff**,int) ;

__attribute__((used)) static inline void FUNC_1(struct t3cdev *VAR_0,
       struct sge_rspq *VAR_1,
       struct sk_buff *VAR_2[], int VAR_3)
{
 if (VAR_3) {
  VAR_1->offload_bundles++;
  VAR_0->recv(VAR_0, VAR_2, VAR_3);
 }
}
