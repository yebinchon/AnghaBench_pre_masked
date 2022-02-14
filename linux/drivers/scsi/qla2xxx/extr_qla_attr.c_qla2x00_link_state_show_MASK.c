
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qla_hw_data {int current_topology; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int device_flags; int loop_state; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ,char*) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_5, struct device_attribute *VAR_6,
   char *VAR_7)
{
 scsi_qla_host_t *VAR_8 = FUNC_4(FUNC_1(VAR_5));
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 int VAR_10 = 0;

 if (FUNC_0(&VAR_8->loop_state) == VAR_2 ||
     FUNC_0(&VAR_8->loop_state) == VAR_1 ||
     VAR_8->device_flags & VAR_0)
  VAR_10 = FUNC_3(VAR_7, VAR_4, "Link Down\n");
 else if (FUNC_0(&VAR_8->loop_state) != VAR_3 ||
     FUNC_2(VAR_8))
  VAR_10 = FUNC_3(VAR_7, VAR_4, "Unknown Link State\n");
 else {
  VAR_10 = FUNC_3(VAR_7, VAR_4, "Link Up - ");

  switch (VAR_9->current_topology) {
  case 128:
   VAR_10 += FUNC_3(VAR_7 + VAR_10, VAR_4-VAR_10, "Loop\n");
   break;
  case 130:
   VAR_10 += FUNC_3(VAR_7 + VAR_10, VAR_4-VAR_10, "FL_Port\n");
   break;
  case 129:
   VAR_10 += FUNC_3(VAR_7 + VAR_10, VAR_4-VAR_10,
       "N_Port to N_Port\n");
   break;
  case 131:
   VAR_10 += FUNC_3(VAR_7 + VAR_10, VAR_4-VAR_10, "F_Port\n");
   break;
  default:
   VAR_10 += FUNC_3(VAR_7 + VAR_10, VAR_4-VAR_10, "Loop\n");
   break;
  }
 }
 return VAR_10;
}
