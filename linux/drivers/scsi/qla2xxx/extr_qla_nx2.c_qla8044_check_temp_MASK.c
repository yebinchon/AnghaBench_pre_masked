
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct scsi_qla_host *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;
 int VAR_10 = VAR_4;

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_8 = FUNC_2(VAR_7);
 VAR_9 = FUNC_3(VAR_7);

 if (VAR_8 == VAR_1) {
  FUNC_0(VAR_5, VAR_6, 0xb0d2,
      "Device temperature %d degrees C"
      " exceeds maximum allowed. Hardware has been shut"
      " down\n", VAR_9);
  VAR_10 = VAR_3;
  return VAR_10;
 } else if (VAR_8 == VAR_2) {
  FUNC_0(VAR_5, VAR_6, 0xb0d3,
      "Device temperature %d"
      " degrees C exceeds operating range."
      " Immediate action needed.\n", VAR_9);
 }
 return 0;
}
