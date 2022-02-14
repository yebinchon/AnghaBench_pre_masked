
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_ce {TYPE_1__* bus_ops; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int (* get_num_banks ) (struct ath10k*) ;} ;


 struct ath10k_ce* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_0)
{
 struct ath10k_ce *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->bus_ops->get_num_banks(VAR_0);
}
