
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int crq_token; } ;
struct TYPE_3__ {int unit_id; } ;
struct scsi_info {int flags; int state; TYPE_2__ cmd_q; TYPE_1__ dds; } ;


 long VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_0 (int ,int ,int) ;
 long FUNC_1 (struct scsi_info*) ;

__attribute__((used)) static long FUNC_2(struct scsi_info *VAR_7)
{
 int VAR_8;
 long VAR_9 = VAR_0;

 VAR_8 = VAR_7->cmd_q.size * VAR_4;
 VAR_9 = FUNC_0(VAR_7->dds.unit_id, VAR_7->cmd_q.crq_token, VAR_8);
 if (VAR_9 == VAR_2 || VAR_9 == VAR_3) {
  VAR_7->state = VAR_6;
  VAR_9 = FUNC_1(VAR_7);
 }

 if (VAR_9 != VAR_0) {
  VAR_7->state = VAR_1;
  VAR_7->flags |= VAR_5;
 }

 return VAR_9;
}
