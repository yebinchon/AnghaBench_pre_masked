
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ drbl_regs_memmap_p; scalar_t__ BMBXregaddr; scalar_t__ MQDBregaddr; scalar_t__ CQDBregaddr; scalar_t__ EQDBregaddr; scalar_t__ WQDBregaddr; scalar_t__ RQDBregaddr; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_0(struct lpfc_hba *VAR_8, uint32_t VAR_9)
{
 if (VAR_9 > VAR_7)
  return -VAR_0;

 VAR_8->sli4_hba.RQDBregaddr = (VAR_8->sli4_hba.drbl_regs_memmap_p +
    VAR_9 * VAR_6 +
     VAR_4);
 VAR_8->sli4_hba.WQDBregaddr = (VAR_8->sli4_hba.drbl_regs_memmap_p +
    VAR_9 * VAR_6 +
     VAR_5);
 VAR_8->sli4_hba.CQDBregaddr = (VAR_8->sli4_hba.drbl_regs_memmap_p +
    VAR_9 * VAR_6 +
     VAR_2);
 VAR_8->sli4_hba.EQDBregaddr = VAR_8->sli4_hba.CQDBregaddr;
 VAR_8->sli4_hba.MQDBregaddr = (VAR_8->sli4_hba.drbl_regs_memmap_p +
    VAR_9 * VAR_6 + VAR_3);
 VAR_8->sli4_hba.BMBXregaddr = (VAR_8->sli4_hba.drbl_regs_memmap_p +
    VAR_9 * VAR_6 + VAR_1);
 return 0;
}
