
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcnss_msg_hdr {int len; int type; } ;
struct wcnss_ctrl {int dev; int ack; int channel; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct wcnss_msg_hdr*,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct wcnss_ctrl *VAR_3)
{
 struct wcnss_msg_hdr VAR_4;
 int VAR_5;

 VAR_4.type = VAR_2;
 VAR_4.len = sizeof(VAR_4);
 VAR_5 = FUNC_1(VAR_3->channel, &VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(&VAR_3->ack, VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_3->dev, "timeout waiting for version response\n");
  return -VAR_0;
 }

 return 0;
}
