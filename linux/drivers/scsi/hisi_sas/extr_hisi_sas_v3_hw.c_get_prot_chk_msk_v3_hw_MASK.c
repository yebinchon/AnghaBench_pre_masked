
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_cmnd {unsigned char prot_flags; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct scsi_cmnd *VAR_3)
{
 unsigned char VAR_4 = VAR_3->prot_flags;

 if (VAR_4 & VAR_0)
  return VAR_1;
 return VAR_2 | VAR_1;
}
