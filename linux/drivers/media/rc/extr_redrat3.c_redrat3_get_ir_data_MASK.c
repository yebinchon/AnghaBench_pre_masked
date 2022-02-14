
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct redrat3_header {int dummy; } ;
struct TYPE_3__ {int transfer_type; int length; } ;
struct TYPE_4__ {TYPE_1__ header; } ;
struct redrat3_dev {scalar_t__ bytes_read; TYPE_2__ irdata; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct redrat3_dev*) ;
 int FUNC_4 (struct redrat3_dev*,unsigned int) ;
 int FUNC_5 (struct redrat3_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct redrat3_dev *VAR_2, unsigned VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 unsigned VAR_5;
 int VAR_6 = 0;

 if (VAR_2->bytes_read == 0 && VAR_3 >= sizeof(struct redrat3_header)) {
  FUNC_5(VAR_2, VAR_3);
 } else if (VAR_2->bytes_read != 0) {
  FUNC_4(VAR_2, VAR_3);
 } else if (VAR_2->bytes_read == 0) {
  FUNC_2(VAR_4, "error: no packet data read\n");
  VAR_6 = -VAR_0;
  goto out;
 }

 if (VAR_2->bytes_read < FUNC_0(VAR_2->irdata.header.length) +
      sizeof(struct redrat3_header))

  return 0;


 VAR_5 = FUNC_0(VAR_2->irdata.header.transfer_type);
 if (VAR_5 == VAR_1)
  FUNC_3(VAR_2);
 else
  FUNC_1(VAR_4, "discarding non-signal data packet (type 0x%02x)\n",
        VAR_5);

out:
 VAR_2->bytes_read = 0;
 return VAR_6;
}
