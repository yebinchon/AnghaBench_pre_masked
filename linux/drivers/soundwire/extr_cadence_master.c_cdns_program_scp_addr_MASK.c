
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdw_msg {int dev_num; int addr_page1; int addr_page2; scalar_t__ len; } ;
struct sdw_cdns {scalar_t__ msg_count; int* response_buf; int dev; int tx_complete; } ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct sdw_cdns*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int *,int ) ;

__attribute__((used)) static enum sdw_command_response
FUNC_7(struct sdw_cdns *VAR_16, struct sdw_msg *VAR_17)
{
 int VAR_18 = 0, VAR_19 = 0;
 unsigned long VAR_20;
 u32 VAR_21[2], VAR_22;
 int VAR_23;


 if (VAR_16->msg_count != VAR_8) {
  FUNC_1(VAR_16, VAR_5, VAR_8);
  VAR_16->msg_count = VAR_8;
 }

 VAR_21[0] = VAR_17->dev_num << FUNC_0(VAR_2);
 VAR_21[0] |= 0x3 << FUNC_0(VAR_1);
 VAR_21[1] = VAR_21[0];

 VAR_21[0] |= VAR_14 << FUNC_0(VAR_3);
 VAR_21[1] |= VAR_15 << FUNC_0(VAR_3);

 VAR_21[0] |= VAR_17->addr_page1;
 VAR_21[1] |= VAR_17->addr_page2;

 VAR_22 = VAR_0;
 FUNC_1(VAR_16, VAR_22, VAR_21[0]);
 VAR_22 += VAR_4;
 FUNC_1(VAR_16, VAR_22, VAR_21[1]);

 VAR_20 = FUNC_6(&VAR_16->tx_complete,
        FUNC_5(VAR_9));
 if (!VAR_20) {
  FUNC_3(VAR_16->dev, "SCP Msg trf timed out\n");
  VAR_17->len = 0;
  return VAR_13;
 }


 for (VAR_23 = 0; VAR_23 < 2; VAR_23++) {
  if (!(VAR_16->response_buf[VAR_23] & VAR_6)) {
   VAR_19 = 1;
   FUNC_3(VAR_16->dev, "Program SCP Ack not received\n");
   if (VAR_16->response_buf[VAR_23] & VAR_7) {
    VAR_18 = 1;
    FUNC_3(VAR_16->dev, "Program SCP NACK received\n");
   }
  }
 }


 if (VAR_18) {
  FUNC_4(VAR_16->dev,
        "SCP_addrpage NACKed for Slave %d\n", VAR_17->dev_num);
  return VAR_10;
 } else if (VAR_19) {
  FUNC_2(VAR_16->dev,
        "SCP_addrpage ignored for Slave %d\n", VAR_17->dev_num);
  return VAR_11;
 }

 return VAR_12;
}
