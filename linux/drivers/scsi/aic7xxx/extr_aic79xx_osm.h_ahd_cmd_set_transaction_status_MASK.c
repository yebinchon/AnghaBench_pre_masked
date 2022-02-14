
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_cmnd {int result; } ;


 int VAR_0 ;

__attribute__((used)) static inline
void FUNC_0(struct scsi_cmnd *VAR_1, uint32_t VAR_2)
{
 VAR_1->result &= ~(VAR_0 << 16);
 VAR_1->result |= VAR_2 << 16;
}
