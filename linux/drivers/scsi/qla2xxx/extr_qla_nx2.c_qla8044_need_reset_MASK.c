
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct TYPE_2__ {scalar_t__ eeh_busy; } ;
struct qla_hw_data {int portnum; TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_qla_host*,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct scsi_qla_host *VAR_2)
{
 uint32_t VAR_3, VAR_4;
 int VAR_5;
 struct qla_hw_data *VAR_6 = VAR_2->hw;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_3 = FUNC_0(VAR_2, VAR_1);

 VAR_5 = VAR_3 & (1 << VAR_6->portnum);

 if (VAR_6->flags.eeh_busy && VAR_4)
  VAR_5 = 1;
 return VAR_5;
}
