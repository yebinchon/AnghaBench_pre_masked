
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_cmnd {int result; } ;



__attribute__((used)) static inline
void FUNC_0(struct scsi_cmnd *VAR_0, uint32_t VAR_1)
{
 VAR_0->result &= ~0xFFFF;
 VAR_0->result |= VAR_1;
}
