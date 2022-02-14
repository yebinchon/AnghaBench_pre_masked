
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmi_phyerr_ev_arg {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ wmi; } ;
struct TYPE_3__ {int (* pull_phyerr ) (struct ath10k*,void const*,int,struct wmi_phyerr_ev_arg*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,void const*,int,struct wmi_phyerr_ev_arg*) ;

__attribute__((used)) static inline int
FUNC_1(struct ath10k *VAR_1, const void *VAR_2,
         int VAR_3, struct wmi_phyerr_ev_arg *VAR_4)
{
 if (!VAR_1->wmi.ops->pull_phyerr)
  return -VAR_0;

 return VAR_1->wmi.ops->pull_phyerr(VAR_1, VAR_2, VAR_3, VAR_4);
}
