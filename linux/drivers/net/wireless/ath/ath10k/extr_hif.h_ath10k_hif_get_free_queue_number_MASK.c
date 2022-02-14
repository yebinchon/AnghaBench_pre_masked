
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* get_free_queue_number ) (struct ath10k*,int ) ;} ;


 int FUNC_0 (struct ath10k*,int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct ath10k *VAR_0,
         u8 VAR_1)
{
 return VAR_0->hif.ops->get_free_queue_number(VAR_0, VAR_1);
}
