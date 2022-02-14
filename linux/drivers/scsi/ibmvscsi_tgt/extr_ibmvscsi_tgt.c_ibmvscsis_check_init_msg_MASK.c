
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct viosrp_crq {scalar_t__ valid; scalar_t__ format; } ;
struct TYPE_2__ {int base_addr; int index; int mask; } ;
struct scsi_info {TYPE_1__ cmd_q; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 struct viosrp_crq* FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static long FUNC_2(struct scsi_info *VAR_6, uint *VAR_7)
{
 struct viosrp_crq *VAR_8;
 long VAR_9 = VAR_0;

 VAR_8 = FUNC_1(VAR_6->cmd_q.mask, &VAR_6->cmd_q.index,
          VAR_6->cmd_q.base_addr);
 if (!VAR_8) {
  *VAR_7 = (uint)VAR_4;
 } else if (VAR_8->valid == VAR_5 && VAR_8->format == VAR_2) {
  *VAR_7 = (uint)VAR_2;
  VAR_8->valid = VAR_3;
  FUNC_0();






  VAR_8 = FUNC_1(VAR_6->cmd_q.mask,
           &VAR_6->cmd_q.index,
           VAR_6->cmd_q.base_addr);
  if (VAR_8) {
   *VAR_7 = (uint)(VAR_8->format);
   VAR_9 = VAR_1;
   VAR_8->valid = VAR_3;
   FUNC_0();
  }
 } else {
  *VAR_7 = (uint)(VAR_8->format);
  VAR_9 = VAR_1;
  VAR_8->valid = VAR_3;
  FUNC_0();
 }

 return VAR_9;
}
