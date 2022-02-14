
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_ce {TYPE_1__* bus_ops; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int (* write32 ) (struct ath10k*,int ,int ) ;} ;


 struct ath10k_ce* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;

inline void FUNC_2(struct ath10k *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct ath10k_ce *VAR_3 = FUNC_0(VAR_0);

 VAR_3->bus_ops->write32(VAR_0, VAR_1, VAR_2);
}
