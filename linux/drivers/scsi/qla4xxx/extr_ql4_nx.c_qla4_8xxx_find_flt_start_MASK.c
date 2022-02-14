
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_2(struct scsi_qla_host *VAR_3, uint32_t *VAR_4)
{
 const char *VAR_5, *VAR_6[] = { "DEF", "PCI" };






 VAR_5 = VAR_6[0];
 *VAR_4 = VAR_0;

 FUNC_0(FUNC_1(VAR_1, VAR_3, "FLTL[%s] = 0x%x.\n", VAR_5, *VAR_4));
 return VAR_2;
}
