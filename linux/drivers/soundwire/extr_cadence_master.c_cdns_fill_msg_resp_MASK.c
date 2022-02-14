
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_msg {int* buf; int dev_num; } ;
struct sdw_cdns {int* response_buf; int dev; } ;
typedef enum sdw_command_response { ____Placeholder_sdw_command_response } sdw_command_response ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static enum sdw_command_response
FUNC_3(struct sdw_cdns *VAR_6,
     struct sdw_msg *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10 = 0, VAR_11 = 0;
 int VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if (!(VAR_6->response_buf[VAR_12] & VAR_0)) {
   VAR_11 = 1;
   FUNC_1(VAR_6->dev, "Msg Ack not received\n");
   if (VAR_6->response_buf[VAR_12] & VAR_1) {
    VAR_10 = 1;
    FUNC_2(VAR_6->dev, "Msg NACK received\n");
   }
  }
 }

 if (VAR_10) {
  FUNC_2(VAR_6->dev, "Msg NACKed for Slave %d\n", VAR_7->dev_num);
  return VAR_3;
 } else if (VAR_11) {
  FUNC_1(VAR_6->dev, "Msg ignored for Slave %d\n", VAR_7->dev_num);
  return VAR_4;
 }


 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  VAR_7->buf[VAR_12 + VAR_9] = VAR_6->response_buf[VAR_12] >>
    FUNC_0(VAR_2);

 return VAR_5;
}
