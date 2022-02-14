
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vlynq_mapping {int size; int offset; } ;
struct vlynq_device {TYPE_2__* remote; int enabled; } ;
struct TYPE_4__ {TYPE_1__* rx_mapping; int tx_offset; } ;
struct TYPE_3__ {int size; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(struct vlynq_device *VAR_1, u32 VAR_2,
        struct vlynq_mapping *VAR_3)
{
 int VAR_4;

 if (!VAR_1->enabled)
  return -VAR_0;

 FUNC_0(VAR_2, &VAR_1->remote->tx_offset);
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  FUNC_0(VAR_3[VAR_4].offset, &VAR_1->remote->rx_mapping[VAR_4].offset);
  FUNC_0(VAR_3[VAR_4].size, &VAR_1->remote->rx_mapping[VAR_4].size);
 }
 return 0;
}
