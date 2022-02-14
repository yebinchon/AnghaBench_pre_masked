
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int scsi_qla_host_t ;



__attribute__((used)) static inline uint16_t
FUNC_0(scsi_qla_host_t *VAR_0, uint16_t VAR_1)
{
 uint16_t VAR_2;

 VAR_2 = 1;
 if (VAR_1 > 1) {
  VAR_2 += (VAR_1 - 1) / 5;
  if ((VAR_1 - 1) % 5)
   VAR_2++;
 }
 return VAR_2;
}
