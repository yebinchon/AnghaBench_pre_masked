
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cq; } ;
struct qeth_card {scalar_t__ state; TYPE_1__ options; } ;
typedef enum qeth_cq { ____Placeholder_qeth_cq } qeth_cq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qeth_card*) ;

int FUNC_1(struct qeth_card *VAR_2, enum qeth_cq VAR_3)
{
 int VAR_4;

 if (VAR_2->options.cq == VAR_1) {
  VAR_4 = -1;
  goto out;
 } else {
  if (VAR_2->options.cq == VAR_3) {
   VAR_4 = 0;
   goto out;
  }

  if (VAR_2->state != VAR_0) {
   VAR_4 = -1;
   goto out;
  }

  FUNC_0(VAR_2);
  VAR_2->options.cq = VAR_3;
  VAR_4 = 0;
 }
out:
 return VAR_4;

}
