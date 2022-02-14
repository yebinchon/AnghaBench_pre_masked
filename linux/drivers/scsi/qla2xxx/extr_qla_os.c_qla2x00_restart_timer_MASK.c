
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int device_flags; int timer; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_2(scsi_qla_host_t *VAR_4, unsigned long VAR_5)
{

 if (VAR_4->device_flags & VAR_0) {
  FUNC_1(VAR_3, VAR_4, 0x600d,
      "Device in a failed state, returning.\n");
  return;
 }

 FUNC_0(&VAR_4->timer, VAR_2 + VAR_5 * VAR_1);
}
