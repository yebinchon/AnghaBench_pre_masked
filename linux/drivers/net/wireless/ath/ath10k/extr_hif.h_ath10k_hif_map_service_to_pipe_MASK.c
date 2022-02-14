
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
struct TYPE_3__ {int (* map_service_to_pipe ) (struct ath10k*,int ,int *,int *) ;} ;


 int FUNC_0 (struct ath10k*,int ,int *,int *) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k *VAR_0,
       u16 VAR_1,
       u8 *VAR_2, u8 *VAR_3)
{
 return VAR_0->hif.ops->map_service_to_pipe(VAR_0, VAR_1,
      VAR_2, VAR_3);
}
