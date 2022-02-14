
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct scsi_qla_host {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_1(struct scsi_qla_host *VAR_5,
 uint8_t VAR_6)
{
 int VAR_7;

 switch (VAR_6) {
 case 129:
  VAR_7 = VAR_3;
  break;
 case 131:
  VAR_7 = VAR_1;
  break;
 case 130:
  VAR_7 = VAR_2;
  break;
 case 132:
  VAR_7 = VAR_0;
  break;
 case 128:
  VAR_7 = VAR_3;
  break;
 default:
  FUNC_0(VAR_4, VAR_5, 0xf05d,
      "qla_target: unknown task code %x, use ORDERED instead\n",
      VAR_6);
  VAR_7 = VAR_2;
  break;
 }

 return VAR_7;
}
