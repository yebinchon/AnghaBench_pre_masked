
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ protocol; } ;
struct iphdr {int dummy; } ;
struct efx_nic {TYPE_1__* ptp_data; } ;
struct TYPE_6__ {scalar_t__ protocol; } ;
struct TYPE_5__ {scalar_t__ dest; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;

bool FUNC_8(struct efx_nic *VAR_5, struct sk_buff *VAR_6)
{
 return VAR_5->ptp_data &&
  VAR_5->ptp_data->enabled &&
  VAR_6->len >= VAR_4 &&
  VAR_6->len <= VAR_2 &&
  FUNC_2(VAR_6->protocol == FUNC_0(VAR_0)) &&
  FUNC_5(VAR_6) &&
  FUNC_4(VAR_6) >= sizeof(struct iphdr) &&
  FUNC_1(VAR_6)->protocol == VAR_1 &&
  FUNC_3(VAR_6) >=
  FUNC_6(VAR_6) + sizeof(struct udphdr) &&
  FUNC_7(VAR_6)->dest == FUNC_0(VAR_3);
}
