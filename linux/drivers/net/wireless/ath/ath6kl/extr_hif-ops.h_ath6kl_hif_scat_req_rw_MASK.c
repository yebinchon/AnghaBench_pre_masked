
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hif_scatter_req {int dummy; } ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* scat_req_rw ) (struct ath6kl*,struct hif_scatter_req*) ;} ;


 int FUNC_0 (struct ath6kl*,struct hif_scatter_req*) ;

__attribute__((used)) static inline int FUNC_1(struct ath6kl *VAR_0,
      struct hif_scatter_req *VAR_1)
{
 return VAR_0->hif_ops->scat_req_rw(VAR_0, VAR_1);
}
