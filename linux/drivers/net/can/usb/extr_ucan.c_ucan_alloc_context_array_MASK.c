
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_fifo; } ;
struct ucan_priv {int available_tx_urbs; TYPE_1__ device_info; TYPE_2__* context_array; int netdev; } ;
struct TYPE_4__ {int allocated; struct ucan_priv* up; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ucan_priv*) ;

__attribute__((used)) static int FUNC_3(struct ucan_priv *VAR_2)
{
 int VAR_3;


 FUNC_2(VAR_2);

 VAR_2->context_array = FUNC_0(VAR_2->device_info.tx_fifo,
        sizeof(*VAR_2->context_array),
        VAR_1);
 if (!VAR_2->context_array) {
  FUNC_1(VAR_2->netdev,
      "Not enough memory to allocate tx contexts\n");
  return -VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->device_info.tx_fifo; VAR_3++) {
  VAR_2->context_array[VAR_3].allocated = 0;
  VAR_2->context_array[VAR_3].up = VAR_2;
 }


 VAR_2->available_tx_urbs = VAR_2->device_info.tx_fifo;

 return 0;
}
