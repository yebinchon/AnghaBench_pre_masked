
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int bus; int target; int lun; } ;



__attribute__((used)) static inline void FUNC_0(struct hpsa_scsi_dev_t *VAR_0,
 int VAR_1, int VAR_2, int VAR_3)
{
 VAR_0->bus = VAR_1;
 VAR_0->target = VAR_2;
 VAR_0->lun = VAR_3;
}
