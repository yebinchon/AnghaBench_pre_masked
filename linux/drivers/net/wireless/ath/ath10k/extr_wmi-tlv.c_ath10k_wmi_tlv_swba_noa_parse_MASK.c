
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wmi_tlv_swba_parse {scalar_t__ n_noa; TYPE_1__* arg; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {void const** noa_info; } ;


 scalar_t__ FUNC_0 (void const**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_3, u16 VAR_4, u16 VAR_5,
      const void *VAR_6, void *VAR_7)
{
 struct wmi_tlv_swba_parse *VAR_8 = VAR_7;

 if (VAR_4 != VAR_2)
  return -VAR_1;

 if (VAR_8->n_noa >= FUNC_0(VAR_8->arg->noa_info))
  return -VAR_0;

 VAR_8->arg->noa_info[VAR_8->n_noa++] = VAR_6;
 return 0;
}
