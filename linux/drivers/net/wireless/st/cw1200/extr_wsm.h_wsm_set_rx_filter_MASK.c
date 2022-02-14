
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct wsm_rx_filter {scalar_t__ probeResponder; scalar_t__ fcs; scalar_t__ bssid; scalar_t__ promiscuous; } ;
struct cw1200_common {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cw1200_common*,int ,int *,int) ;

__attribute__((used)) static inline int FUNC_3(struct cw1200_common *VAR_1,
        const struct wsm_rx_filter *VAR_2)
{
 __le32 VAR_3 = 0;
 if (VAR_2->promiscuous)
  VAR_3 |= FUNC_1(FUNC_0(0));
 if (VAR_2->bssid)
  VAR_3 |= FUNC_1(FUNC_0(1));
 if (VAR_2->fcs)
  VAR_3 |= FUNC_1(FUNC_0(2));
 if (VAR_2->probeResponder)
  VAR_3 |= FUNC_1(FUNC_0(3));
 return FUNC_2(VAR_1, VAR_0, &VAR_3, sizeof(VAR_3));
}
