
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int (* recv ) (struct t3cdev*,struct sk_buff**,unsigned int) ;} ;
struct sk_buff {int dummy; } ;
struct sge_rspq {int offload_bundles; scalar_t__ polling; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sge_rspq*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct t3cdev*,struct sk_buff**,unsigned int) ;

__attribute__((used)) static inline int FUNC_5(struct t3cdev *VAR_1, struct sge_rspq *VAR_2,
        struct sk_buff *VAR_3, struct sk_buff *VAR_4[],
        unsigned int VAR_5)
{
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);

 if (VAR_2->polling) {
  VAR_4[VAR_5++] = VAR_3;
  if (VAR_5 == VAR_0) {
   VAR_1->recv(VAR_1, VAR_4, VAR_0);
   VAR_5 = 0;
   VAR_2->offload_bundles++;
  }
 } else
  FUNC_0(VAR_2, VAR_3);

 return VAR_5;
}
