
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct scsi_qla_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_qla_host*,int) ;

u8 FUNC_2(struct scsi_qla_host *VAR_0, int VAR_1)
{
 u16 VAR_2 = 0;
 u8 VAR_3 = 0;
 int VAR_4 = 0;

 if (VAR_1 & 0x1)
  VAR_4 = (VAR_1 - 1) / 2;
 else
  VAR_4 = VAR_1 / 2;

 VAR_2 = FUNC_0(FUNC_1(VAR_0, VAR_4));

 if (VAR_1 & 0x1)
  VAR_3 = (u8)((VAR_2 & 0xff00) >> 8);
 else
  VAR_3 = (u8)((VAR_2 & 0x00ff));

 return VAR_3;
}
