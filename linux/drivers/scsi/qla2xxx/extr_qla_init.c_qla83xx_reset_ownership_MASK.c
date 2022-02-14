
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int nic_core_reset_owner; } ;
struct qla_hw_data {int portnum; TYPE_1__ flags; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_2__*,int,char*) ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int*) ;

void
FUNC_4(scsi_qla_host_t *VAR_8)
{
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15 = 0x3;
 uint16_t VAR_16 = 0xffff, VAR_17;

 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_2(VAR_8,
      VAR_2);
  VAR_12 = FUNC_2(VAR_8,
      VAR_1);
  VAR_13 = FUNC_2(VAR_8,
      VAR_0);
 } else {
  FUNC_3(VAR_8, VAR_6, &VAR_10);
  FUNC_3(VAR_8, VAR_4, &VAR_12);
  FUNC_3(VAR_8, VAR_5, &VAR_13);
 }
 for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
  VAR_14 = ((VAR_12 >> (VAR_17 * 4)) & VAR_15);
  if ((VAR_14 == VAR_3) &&
      (VAR_17 != VAR_9->portnum)) {
   VAR_16 = VAR_17;
   break;
  }
 }
 if (VAR_16 == 0xffff) {
  for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
   VAR_14 = ((VAR_13 >> (VAR_17 * 4)) &
       VAR_15);
   if ((VAR_14 == VAR_3) &&
       ((VAR_17 + 8) != VAR_9->portnum)) {
    VAR_16 = VAR_17 + 8;
    break;
   }
  }
 }




 VAR_11 = ~((1 << (VAR_9->portnum)) |
   ((VAR_16 == 0xffff) ?
    0 : (1 << (VAR_16))));




 if (!(VAR_10 & VAR_11) &&
   (VAR_9->portnum < VAR_16)) {
  FUNC_1(VAR_7, VAR_8, 0xb07f,
      "This host is Reset owner.\n");
  VAR_9->flags.nic_core_reset_owner = 1;
 }
}
