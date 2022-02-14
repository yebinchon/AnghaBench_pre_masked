
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qmp {scalar_t__ msgram; int dev; int event; scalar_t__ size; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct qmp*) ;
 int FUNC_2 (struct qmp*) ;
 int FUNC_3 (struct qmp*) ;
 int FUNC_4 (struct qmp*) ;
 int FUNC_5 (struct qmp*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct qmp *VAR_14)
{
 int VAR_15;
 u32 VAR_16;

 if (!FUNC_3(VAR_14)) {
  FUNC_0(VAR_14->dev, "QMP magic doesn't match\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_6(VAR_14->msgram + VAR_10);
 if (VAR_16 != VAR_13) {
  FUNC_0(VAR_14->dev, "unsupported QMP version %d\n", VAR_16);
  return -VAR_0;
 }

 VAR_14->offset = FUNC_6(VAR_14->msgram + VAR_5);
 VAR_14->size = FUNC_6(VAR_14->msgram + VAR_6);
 if (!VAR_14->size) {
  FUNC_0(VAR_14->dev, "invalid mailbox size\n");
  return -VAR_0;
 }


 VAR_16 = FUNC_6(VAR_14->msgram + VAR_8);
 FUNC_8(VAR_16, VAR_14->msgram + VAR_9);


 FUNC_8(VAR_12, VAR_14->msgram + VAR_4);

 FUNC_1(VAR_14);

 VAR_15 = FUNC_7(VAR_14->event, FUNC_2(VAR_14), VAR_2);
 if (!VAR_15) {
  FUNC_0(VAR_14->dev, "ucore didn't ack link\n");
  goto timeout_close_link;
 }

 FUNC_8(VAR_12, VAR_14->msgram + VAR_3);

 FUNC_1(VAR_14);

 VAR_15 = FUNC_7(VAR_14->event, FUNC_5(VAR_14), VAR_2);
 if (!VAR_15) {
  FUNC_0(VAR_14->dev, "ucore didn't open channel\n");
  goto timeout_close_channel;
 }


 FUNC_8(VAR_12, VAR_14->msgram + VAR_7);

 FUNC_1(VAR_14);

 VAR_15 = FUNC_7(VAR_14->event, FUNC_4(VAR_14), VAR_2);
 if (!VAR_15) {
  FUNC_0(VAR_14->dev, "ucore didn't ack channel\n");
  goto timeout_close_channel;
 }

 return 0;

timeout_close_channel:
 FUNC_8(VAR_11, VAR_14->msgram + VAR_3);

timeout_close_link:
 FUNC_8(VAR_11, VAR_14->msgram + VAR_4);
 FUNC_1(VAR_14);

 return -VAR_1;
}
