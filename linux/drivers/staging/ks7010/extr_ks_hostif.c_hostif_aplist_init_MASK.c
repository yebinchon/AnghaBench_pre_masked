
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct local_ap {int dummy; } ;
struct TYPE_2__ {int * ap; int size; } ;
struct ks_wlan_private {TYPE_1__ aplist; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;

__attribute__((used)) static inline void FUNC_1(struct ks_wlan_private *VAR_1)
{
 size_t VAR_2 = VAR_0 * sizeof(struct local_ap);

 VAR_1->aplist.size = 0;
 FUNC_0(&VAR_1->aplist.ap[0], 0, VAR_2);
}
