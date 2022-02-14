
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_qla_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_3 (struct scsi_qla_host*,scalar_t__,int*) ;
 int FUNC_4 (struct scsi_qla_host*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct scsi_qla_host *VAR_11)
{
 u32 VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15 = VAR_10;

 VAR_15 = FUNC_3(VAR_11, VAR_9, &VAR_12);
 FUNC_0(FUNC_2(VAR_0, VAR_11, "SRE-Shim Ctrl:0x%x\n", VAR_12));


 FUNC_0(FUNC_2(VAR_0, VAR_11,
  "Port 0 Rx Buffer Pause Threshold Registers[TC7..TC0]:"));
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  VAR_15 = FUNC_3(VAR_11,
    VAR_1 + (VAR_14 * 0x4), &VAR_12);
  FUNC_0(FUNC_1("0x%x ", VAR_12));
 }

 FUNC_0(FUNC_1("\n"));


 FUNC_0(FUNC_2(VAR_0, VAR_11,
  "Port 1 Rx Buffer Pause Threshold Registers[TC7..TC0]:"));
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  VAR_15 = FUNC_3(VAR_11,
    VAR_4 + (VAR_14 * 0x4), &VAR_12);
  FUNC_0(FUNC_1("0x%x  ", VAR_12));
 }

 FUNC_0(FUNC_1("\n"));


 FUNC_0(FUNC_2(VAR_0, VAR_11,
  "Port 0 RxB Traffic Class Max Cell Registers[3..0]:"));
 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_15 = FUNC_3(VAR_11,
          VAR_2 + (VAR_14 * 0x4), &VAR_12);
  FUNC_0(FUNC_1("0x%x  ", VAR_12));
 }

 FUNC_0(FUNC_1("\n"));


 FUNC_0(FUNC_2(VAR_0, VAR_11,
  "Port 1 RxB Traffic Class Max Cell Registers[3..0]:"));
 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_15 = FUNC_3(VAR_11,
          VAR_5 + (VAR_14 * 0x4), &VAR_12);
  FUNC_0(FUNC_1("0x%x  ", VAR_12));
 }

 FUNC_0(FUNC_1("\n"));


 FUNC_0(FUNC_2(VAR_0, VAR_11,
     "Port 0 RxB Rx Traffic Class Stats [TC7..TC0]"));
 for (VAR_14 = 7; VAR_14 >= 0; VAR_14--) {
  VAR_15 = FUNC_3(VAR_11,
         VAR_3,
         &VAR_12);
  VAR_12 &= ~(0x7 << 29);
  FUNC_4(VAR_11, VAR_3,
       (VAR_12 | (VAR_14 << 29)));
  VAR_15 = FUNC_3(VAR_11,
         VAR_3,
         &VAR_12);
  FUNC_0(FUNC_1("0x%x  ", VAR_12));
 }

 FUNC_0(FUNC_1("\n"));


 FUNC_0(FUNC_2(VAR_0, VAR_11,
     "Port 1 RxB Rx Traffic Class Stats [TC7..TC0]"));
 for (VAR_14 = 7; VAR_14 >= 0; VAR_14--) {
  VAR_15 = FUNC_3(VAR_11,
         VAR_6,
         &VAR_12);
  VAR_12 &= ~(0x7 << 29);
  FUNC_4(VAR_11, VAR_6,
       (VAR_12 | (VAR_14 << 29)));
  VAR_15 = FUNC_3(VAR_11,
         VAR_6,
         &VAR_12);
  FUNC_0(FUNC_1("0x%x  ", VAR_12));
 }

 FUNC_0(FUNC_1("\n"));

 VAR_15 = FUNC_3(VAR_11, VAR_7,
        &VAR_12);
 VAR_15 = FUNC_3(VAR_11, VAR_8,
        &VAR_13);

 FUNC_0(FUNC_2(VAR_0, VAR_11,
     "IFB-Pause Thresholds: Port 2:0x%x, Port 3:0x%x\n",
     VAR_12, VAR_13));
}
