
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {scalar_t__ area; scalar_t__ domain; scalar_t__ al_pa; } ;
struct TYPE_11__ {TYPE_4__ b; } ;
struct scsi_qla_host {TYPE_2__* hw; TYPE_3__ d_id; } ;
struct TYPE_13__ {scalar_t__ area; scalar_t__ domain; scalar_t__ al_pa; } ;
typedef TYPE_5__ be_id_t ;
struct TYPE_14__ {int b24; } ;
struct TYPE_9__ {int host_map; } ;
struct TYPE_10__ {TYPE_1__ tgt; } ;


 TYPE_7__ FUNC_0 (TYPE_5__) ;
 struct scsi_qla_host* FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__,struct scsi_qla_host*,int,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline
struct scsi_qla_host *FUNC_3(struct scsi_qla_host *VAR_2,
         be_id_t VAR_3)
{
 struct scsi_qla_host *VAR_4;
 uint32_t VAR_5;

 if (VAR_2->d_id.b.area == VAR_3.area &&
     VAR_2->d_id.b.domain == VAR_3.domain &&
     VAR_2->d_id.b.al_pa == VAR_3.al_pa)
  return VAR_2;

 VAR_5 = FUNC_0(VAR_3).b24;

 VAR_4 = FUNC_1(&VAR_2->hw->tgt.host_map, VAR_5);
 if (!VAR_4)
  FUNC_2(VAR_0 + VAR_1, VAR_2, 0xf005,
      "Unable to find host %06x\n", VAR_5);

 return VAR_4;
}
