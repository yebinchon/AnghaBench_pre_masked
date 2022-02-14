
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ec_host_response {int data_len; int checksum; scalar_t__ result; } ;
struct cros_ec_device {int dev; scalar_t__* dout; } ;
struct cros_ec_command {int insize; scalar_t__* data; scalar_t__ result; } ;
typedef int response ;
struct TYPE_2__ {scalar_t__ (* read ) (scalar_t__,int,scalar_t__*) ;int (* write ) (scalar_t__,int,scalar_t__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,int,scalar_t__*) ;
 int FUNC_6 (scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_10(struct cros_ec_device *VAR_8,
    struct cros_ec_command *VAR_9)
{
 struct ec_host_response VAR_10;
 u8 VAR_11;
 int VAR_12 = 0;
 u8 *VAR_13;

 VAR_12 = FUNC_1(VAR_8, VAR_9);


 VAR_7.write(VAR_4, VAR_12, VAR_8->dout);


 VAR_11 = VAR_1;
 VAR_7.write(VAR_2, 1, &VAR_11);

 if (FUNC_4()) {
  FUNC_3(VAR_8->dev, "EC responsed timed out\n");
  VAR_12 = -VAR_5;
  goto done;
 }


 VAR_9->result = VAR_7.read(VAR_3, 1, &VAR_11);
 VAR_12 = FUNC_0(VAR_8, VAR_9);
 if (VAR_12)
  goto done;


 VAR_13 = (u8 *)&VAR_10;
 VAR_11 = VAR_7.read(VAR_4, sizeof(VAR_10),
       VAR_13);

 VAR_9->result = VAR_10.result;

 if (VAR_10.data_len > VAR_9->insize) {
  FUNC_2(VAR_8->dev,
   "packet too long (%d bytes, expected %d)",
   VAR_10.data_len, VAR_9->insize);
  VAR_12 = -VAR_6;
  goto done;
 }


 VAR_11 += VAR_7.read(VAR_4 +
        sizeof(VAR_10), VAR_10.data_len,
        VAR_9->data);

 if (VAR_11) {
  FUNC_2(VAR_8->dev,
   "bad packet checksum %02x\n",
   VAR_10.checksum);
  VAR_12 = -VAR_0;
  goto done;
 }


 VAR_12 = VAR_10.data_len;
done:
 return VAR_12;
}
