
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ hif; } ;
struct TYPE_3__ {int (* write32 ) (struct ath10k*,int ,int ) ;} ;


 int FUNC_0 (struct ath10k*,char*) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ath10k *VAR_0,
          u32 VAR_1, u32 VAR_2)
{
 if (!VAR_0->hif.ops->write32) {
  FUNC_0(VAR_0, "hif write32 not supported\n");
  return;
 }

 VAR_0->hif.ops->write32(VAR_0, VAR_1, VAR_2);
}
