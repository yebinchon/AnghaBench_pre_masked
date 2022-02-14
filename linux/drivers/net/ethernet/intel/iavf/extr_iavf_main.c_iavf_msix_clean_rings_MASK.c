
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ring; } ;
struct TYPE_3__ {int ring; } ;
struct iavf_q_vector {int napi; TYPE_2__ rx; TYPE_1__ tx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct iavf_q_vector *VAR_3 = VAR_2;

 if (!VAR_3->tx.ring && !VAR_3->rx.ring)
  return VAR_0;

 FUNC_0(&VAR_3->napi);

 return VAR_0;
}
