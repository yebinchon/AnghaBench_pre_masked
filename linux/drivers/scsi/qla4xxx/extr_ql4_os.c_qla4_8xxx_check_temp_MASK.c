
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {scalar_t__ temperature; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct scsi_qla_host*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct scsi_qla_host *VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11;
 int VAR_12 = VAR_7;

 VAR_9 = FUNC_1(VAR_8, VAR_5);

 VAR_10 = FUNC_2(VAR_9);
 VAR_11 = FUNC_3(VAR_9);

 if (VAR_10 == VAR_3) {
  FUNC_0(VAR_1, VAR_8, "Device temperature %d degrees C"
      " exceeds maximum allowed. Hardware has been shut"
      " down.\n", VAR_11);
  VAR_12 = VAR_6;
 } else if (VAR_10 == VAR_4) {
  if (VAR_8->temperature == VAR_2)
   FUNC_0(VAR_1, VAR_8, "Device temperature %d"
       " degrees C exceeds operating range."
       " Immediate action needed.\n", VAR_11);
 } else {
  if (VAR_8->temperature == VAR_4)
   FUNC_0(VAR_0, VAR_8, "Device temperature is"
       " now %d degrees C in normal range.\n",
       VAR_11);
 }
 VAR_8->temperature = VAR_10;
 return VAR_12;
}
