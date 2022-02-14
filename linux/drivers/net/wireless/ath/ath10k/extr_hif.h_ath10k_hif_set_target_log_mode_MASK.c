
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* set_target_log_mode ) (struct ath10k*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_1,
       u8 VAR_2)
{
 if (!VAR_1->hif.ops->set_target_log_mode)
  return -VAR_0;

 return VAR_1->hif.ops->set_target_log_mode(VAR_1, VAR_2);
}
