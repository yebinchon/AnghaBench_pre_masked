
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct swStat {int mem_allocated; int mem_freed; int mem_alloc_fail_cnt; } ;
struct TYPE_4__ {TYPE_1__* stats_info; } ;
struct s2io_nic {scalar_t__ device_type; scalar_t__* product_name; scalar_t__* serial_num; int pdev; TYPE_2__ mac_control; } ;
struct TYPE_3__ {struct swStat sw_stat; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__*,int*,int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int,int*) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (scalar_t__*,char*) ;

__attribute__((used)) static void FUNC_11(struct s2io_nic *VAR_4)
{
 u8 *VAR_5;
 u8 VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9, VAR_10 = 0;
 int VAR_11 = 0x80;
 struct swStat *VAR_12 = &VAR_4->mac_control.stats_info->sw_stat;

 if (VAR_4->device_type == VAR_3) {
  FUNC_10(VAR_4->product_name, "Xframe II 10GbE network adapter");
  VAR_11 = 0x80;
 } else {
  FUNC_10(VAR_4->product_name, "Xframe I 10GbE network adapter");
  VAR_11 = 0x50;
 }
 FUNC_10(VAR_4->serial_num, "NOT AVAILABLE");

 VAR_5 = FUNC_2(256, VAR_1);
 if (!VAR_5) {
  VAR_12->mem_alloc_fail_cnt++;
  return;
 }
 VAR_12->mem_allocated += 256;

 for (VAR_7 = 0; VAR_7 < 256; VAR_7 += 4) {
  FUNC_9(VAR_4->pdev, (VAR_11 + 2), VAR_7);
  FUNC_7(VAR_4->pdev, (VAR_11 + 2), &VAR_6);
  FUNC_9(VAR_4->pdev, (VAR_11 + 3), 0);
  for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
   FUNC_6(2);
   FUNC_7(VAR_4->pdev, (VAR_11 + 3), &VAR_6);
   if (VAR_6 == 0x80)
    break;
  }
  if (VAR_8 >= 5) {
   FUNC_0(VAR_0, "Read of VPD data failed\n");
   VAR_10 = 1;
   break;
  }
  FUNC_8(VAR_4->pdev, (VAR_11 + 4),
          (u32 *)&VAR_5[VAR_7]);
 }

 if (!VAR_10) {

  for (VAR_8 = 0; VAR_8 < 252; VAR_8++) {
   if ((VAR_5[VAR_8] == 'S') &&
       (VAR_5[VAR_8+1] == 'N')) {
    VAR_9 = VAR_5[VAR_8+2];
    if (VAR_9 < FUNC_5(VAR_2, 256-VAR_8-2)) {
     FUNC_3(VAR_4->serial_num,
            &VAR_5[VAR_8 + 3],
            VAR_9);
     FUNC_4(VAR_4->serial_num+VAR_9,
            0,
            VAR_2-VAR_9);
     break;
    }
   }
  }
 }

 if ((!VAR_10) && (VAR_5[1] < VAR_2)) {
  VAR_9 = VAR_5[1];
  FUNC_3(VAR_4->product_name, &VAR_5[3], VAR_9);
  VAR_4->product_name[VAR_9] = 0;
 }
 FUNC_1(VAR_5);
 VAR_12->mem_freed += 256;
}
