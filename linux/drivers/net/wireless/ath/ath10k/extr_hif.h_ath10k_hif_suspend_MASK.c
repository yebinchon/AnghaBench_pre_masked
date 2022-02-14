
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* suspend ) (struct ath10k*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_1)
{
 if (!VAR_1->hif.ops->suspend)
  return -VAR_0;

 return VAR_1->hif.ops->suspend(VAR_1);
}
