
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fw_fcoe_port_stats {int dummy; } ;
struct fw_fcoe_port_cmd_params {int idx; int nstats; int portid; } ;
struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,char*) ;
 int FUNC_1 (struct csio_hw*,struct csio_mb*,int ,struct fw_fcoe_port_cmd_params*,int *) ;
 scalar_t__ FUNC_2 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_3 (struct csio_hw*,struct csio_mb*,int*,struct fw_fcoe_port_cmd_params*,struct fw_fcoe_port_stats*) ;
 struct csio_mb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct csio_mb*,int ) ;

int
FUNC_6(struct csio_hw *VAR_3, uint8_t VAR_4,
   struct fw_fcoe_port_stats *VAR_5)
{
 struct csio_mb *VAR_6;
 struct fw_fcoe_port_cmd_params VAR_7;
 enum fw_retval VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_3->mb_mempool, VAR_2);
 if (!VAR_6) {
  FUNC_0(VAR_3, "FCoE FCF PARAMS command out of memory!\n");
  return -VAR_1;
 }
 VAR_7.portid = VAR_4;

 for (VAR_9 = 1; VAR_9 <= 3; VAR_9++) {
  VAR_7.idx = (VAR_9-1)*6 + 1;
  VAR_7.nstats = 6;
  if (VAR_9 == 3)
   VAR_7.nstats = 4;
  FUNC_1(VAR_3, VAR_6, VAR_0,
       &VAR_7, ((void*)0));
  if (FUNC_2(VAR_3, VAR_6)) {
   FUNC_0(VAR_3, "Issue of FCoE port params failed!\n");
   FUNC_5(VAR_6, VAR_3->mb_mempool);
   return -VAR_1;
  }
  FUNC_3(VAR_3, VAR_6, &VAR_8,
      &VAR_7, VAR_5);
 }

 FUNC_5(VAR_6, VAR_3->mb_mempool);
 return 0;
}
