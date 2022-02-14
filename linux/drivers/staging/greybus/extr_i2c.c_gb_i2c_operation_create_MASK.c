
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct i2c_msg {int flags; scalar_t__ len; int buf; } ;
struct gb_operation {TYPE_2__* request; } ;
struct gb_i2c_transfer_request {struct gb_i2c_transfer_op* ops; int op_count; } ;
struct gb_i2c_transfer_op {int dummy; } ;
struct gb_i2c_device {TYPE_1__* gbphy_dev; } ;
struct gb_connection {int dummy; } ;
struct TYPE_4__ {struct gb_i2c_transfer_request* payload; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 struct gb_i2c_device* FUNC_2 (struct gb_connection*) ;
 int FUNC_3 (int ,int ) ;
 struct gb_operation* FUNC_4 (struct gb_connection*,int ,size_t,scalar_t__,int ) ;
 int FUNC_5 (void*,int ,scalar_t__) ;

__attribute__((used)) static struct gb_operation *
FUNC_6(struct gb_connection *VAR_4,
   struct i2c_msg *VAR_5, u32 VAR_6)
{
 struct gb_i2c_device *VAR_7 = FUNC_2(VAR_4);
 struct gb_i2c_transfer_request *VAR_8;
 struct gb_operation *VAR_9;
 struct gb_i2c_transfer_op *VAR_10;
 struct i2c_msg *VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 size_t VAR_14;
 void *VAR_15;
 u16 VAR_16;
 u32 VAR_17;

 if (VAR_6 > (u32)VAR_3) {
  FUNC_1(&VAR_7->gbphy_dev->dev, "msg_count (%u) too big\n",
   VAR_6);
  return ((void*)0);
 }
 VAR_16 = (u16)VAR_6;





 VAR_11 = VAR_5;
 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++, VAR_11++)
  if (VAR_11->flags & VAR_2)
   VAR_13 += (u32)VAR_11->len;
  else
   VAR_12 += (u32)VAR_11->len;

 VAR_14 = sizeof(*VAR_8);
 VAR_14 += VAR_6 * sizeof(*VAR_10);
 VAR_14 += VAR_12;


 VAR_9 = FUNC_4(VAR_4, VAR_0,
     VAR_14, VAR_13, VAR_1);
 if (!VAR_9)
  return ((void*)0);

 VAR_8 = VAR_9->request->payload;
 VAR_8->op_count = FUNC_0(VAR_16);

 VAR_10 = &VAR_8->ops[0];
 VAR_11 = VAR_5;
 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++)
  FUNC_3(VAR_10++, VAR_11++);

 if (!VAR_12)
  return VAR_9;


 VAR_15 = VAR_10;
 VAR_11 = VAR_5;
 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  if (!(VAR_11->flags & VAR_2)) {
   FUNC_5(VAR_15, VAR_11->buf, VAR_11->len);
   VAR_15 += VAR_11->len;
  }
  VAR_11++;
 }

 return VAR_9;
}
