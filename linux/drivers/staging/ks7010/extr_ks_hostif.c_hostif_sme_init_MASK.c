
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sme_flag; int sme_spin; scalar_t__ qtail; scalar_t__ qhead; int sme_status; } ;
struct ks_wlan_private {int sme_task; TYPE_1__ sme_i; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct ks_wlan_private *VAR_2)
{
 VAR_2->sme_i.sme_status = VAR_0;
 VAR_2->sme_i.qhead = 0;
 VAR_2->sme_i.qtail = 0;
 FUNC_0(&VAR_2->sme_i.sme_spin);
 VAR_2->sme_i.sme_flag = 0;
 FUNC_1(&VAR_2->sme_task, VAR_1, (unsigned long)VAR_2);
}
