
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_arr; } ;
struct wil6210_priv {int max_assoc_sta; TYPE_2__* sta; TYPE_1__ dbg_data; int * debug; } ;
struct TYPE_4__ {int tx_latency_bins; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wil6210_priv*,int) ;

void FUNC_3(struct wil6210_priv *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->debug);
 VAR_0->debug = ((void*)0);

 FUNC_1(VAR_0->dbg_data.data_arr);
 for (VAR_1 = 0; VAR_1 < VAR_0->max_assoc_sta; VAR_1++)
  FUNC_1(VAR_0->sta[VAR_1].tx_latency_bins);




 FUNC_2(VAR_0, 0);
}
