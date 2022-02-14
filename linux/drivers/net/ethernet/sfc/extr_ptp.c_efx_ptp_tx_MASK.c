
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct efx_ptp_data {int work; int workwq; int txq; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;
struct TYPE_2__ {scalar_t__ dest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct efx_nic *VAR_3, struct sk_buff *VAR_4)
{
 struct efx_ptp_data *VAR_5 = VAR_3->ptp_data;

 FUNC_3(&VAR_5->txq, VAR_4);

 if ((FUNC_4(VAR_4)->dest == FUNC_1(VAR_2)) &&
     (VAR_4->len <= VAR_0))
  FUNC_0(VAR_4);
 FUNC_2(VAR_5->workwq, &VAR_5->work);

 return VAR_1;
}
