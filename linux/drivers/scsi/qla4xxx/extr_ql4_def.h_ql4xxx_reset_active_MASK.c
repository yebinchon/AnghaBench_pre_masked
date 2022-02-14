
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dpc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int FUNC_1(struct scsi_qla_host *VAR_6)
{
 return FUNC_0(VAR_1, &VAR_6->dpc_flags) ||
        FUNC_0(VAR_2, &VAR_6->dpc_flags) ||
        FUNC_0(VAR_5, &VAR_6->dpc_flags) ||
        FUNC_0(VAR_4, &VAR_6->dpc_flags) ||
        FUNC_0(VAR_3, &VAR_6->dpc_flags) ||
        FUNC_0(VAR_0, &VAR_6->dpc_flags);

}
