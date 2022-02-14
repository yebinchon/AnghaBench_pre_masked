
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct Scsi_Host {int sg_tablesize; scalar_t__ can_queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static inline void FUNC_3(struct Scsi_Host *VAR_1, u_int VAR_2, u_int VAR_3)
{


 int VAR_4 = VAR_0 - FUNC_1(VAR_2, VAR_3) - 64;
 VAR_1->can_queue = FUNC_2(VAR_1) + VAR_4;
 VAR_1->sg_tablesize = FUNC_0(VAR_4);
}
