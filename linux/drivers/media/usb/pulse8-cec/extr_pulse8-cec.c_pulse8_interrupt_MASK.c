
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct cec_msg {int len; int* msg; } ;
struct pulse8 {int started; int escape; scalar_t__ idx; int* buf; int* data; scalar_t__ len; int dev; int cmd_done; int work; struct cec_msg rx_msg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__,int*) ;
 int FUNC_3 (int*,int*,scalar_t__) ;
 int FUNC_4 (int *) ;
 struct pulse8* FUNC_5 (struct serio*) ;

__attribute__((used)) static irqreturn_t FUNC_6(struct serio *VAR_9, unsigned char VAR_10,
        unsigned int VAR_11)
{
 struct pulse8 *VAR_12 = FUNC_5(VAR_9);

 if (!VAR_12->started && VAR_10 != VAR_7)
  return VAR_2;
 if (VAR_10 == VAR_5) {
  VAR_12->escape = 1;
  return VAR_2;
 }
 if (VAR_12->escape) {
  VAR_10 += VAR_6;
  VAR_12->escape = 0;
 } else if (VAR_10 == VAR_4) {
  struct cec_msg *VAR_13 = &VAR_12->rx_msg;

  if (VAR_8)
   FUNC_2(VAR_12->dev, "received: %*ph\n",
     VAR_12->idx, VAR_12->buf);
  VAR_12->data[0] = VAR_12->buf[0];
  switch (VAR_12->buf[0] & 0x3f) {
  case 137:
   VAR_13->len = 1;
   VAR_13->msg[0] = VAR_12->buf[1];
   break;
  case 138:
   if (VAR_13->len == VAR_0)
    break;
   VAR_13->msg[VAR_13->len++] = VAR_12->buf[1];
   if (VAR_12->buf[0] & VAR_3)
    FUNC_4(&VAR_12->work);
   break;
  case 128:
  case 131:
  case 132:
  case 130:
  case 129:
   FUNC_4(&VAR_12->work);
   break;
  case 136:
  case 135:
  case 134:
  case 133:
   break;
  case 140:
  case 139:
  default:
   if (VAR_12->idx == 0)
    break;
   FUNC_3(VAR_12->data, VAR_12->buf, VAR_12->idx);
   VAR_12->len = VAR_12->idx;
   FUNC_0(&VAR_12->cmd_done);
   break;
  }
  VAR_12->idx = 0;
  VAR_12->started = 0;
  return VAR_2;
 } else if (VAR_10 == VAR_7) {
  VAR_12->idx = 0;
  VAR_12->started = 1;
  return VAR_2;
 }

 if (VAR_12->idx >= VAR_1) {
  FUNC_1(VAR_12->dev,
   "throwing away %d bytes of garbage\n", VAR_12->idx);
  VAR_12->idx = 0;
 }
 VAR_12->buf[VAR_12->idx++] = VAR_10;
 return VAR_2;
}
