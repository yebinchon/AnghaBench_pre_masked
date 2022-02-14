
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pulse8 {int* data; scalar_t__ len; int dev; int cmd_done; int serio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ const VAR_6 ;
 scalar_t__ const VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__ const*,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct pulse8 *VAR_8,
         const u8 *VAR_9, u8 VAR_10,
         u8 VAR_11, u8 VAR_12)
{
 int VAR_13;


 FUNC_1(&VAR_8->cmd_done);

 VAR_13 = FUNC_2(VAR_8->serio, VAR_9, VAR_10);
 if (VAR_13)
  return VAR_13;

 if (!FUNC_3(&VAR_8->cmd_done, VAR_3))
  return -VAR_2;
 if ((VAR_8->data[0] & 0x3f) == VAR_4 &&
     VAR_9[0] != VAR_7 &&
     VAR_9[0] != VAR_6 &&
     VAR_9[0] != VAR_5)
  return -VAR_1;
 if (VAR_11 &&
     ((VAR_8->data[0] & 0x3f) != VAR_11 || VAR_8->len < VAR_12 + 1)) {
  FUNC_0(VAR_8->dev, "transmit: failed %02x\n",
    VAR_8->data[0] & 0x3f);
  return -VAR_0;
 }
 return 0;
}
