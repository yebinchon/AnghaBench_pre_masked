
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ec_host_response {int dummy; } ;
struct TYPE_2__ {int data_len; int result; } ;
struct cros_ish_in_msg {TYPE_1__ ec_response; } ;
struct cros_ec_device {int dev; } ;
struct cros_ec_command {int insize; scalar_t__* data; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct cros_ec_device *VAR_3,
         const struct cros_ish_in_msg *VAR_4,
         struct cros_ec_command *VAR_5)
{
 u8 VAR_6 = 0;
 int VAR_7, VAR_8, VAR_9;


 VAR_5->result = VAR_4->ec_response.result;
 VAR_8 = FUNC_0(VAR_3, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_4->ec_response.data_len > VAR_5->insize) {
  FUNC_2(VAR_3->dev, "Packet too long (%d bytes, expected %d)",
   VAR_4->ec_response.data_len, VAR_5->insize);
  return -VAR_1;
 }


 for (VAR_7 = 0; VAR_7 < sizeof(struct ec_host_response); VAR_7++)
  VAR_6 += ((u8 *)VAR_4)[VAR_2 + VAR_7];

 VAR_9 = sizeof(struct cros_ish_in_msg);
 for (VAR_7 = 0; VAR_7 < VAR_4->ec_response.data_len; VAR_7++)
  VAR_6 += VAR_5->data[VAR_7] = ((u8 *)VAR_4)[VAR_9 + VAR_7];

 if (VAR_6) {
  FUNC_1(VAR_3->dev, "Bad received packet checksum %d\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
