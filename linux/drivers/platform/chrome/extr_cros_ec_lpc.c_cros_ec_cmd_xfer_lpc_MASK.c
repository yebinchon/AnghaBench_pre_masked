
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ec_lpc_host_args {scalar_t__ flags; scalar_t__ command_version; scalar_t__ data_size; scalar_t__ checksum; } ;
struct cros_ec_device {int dev; } ;
struct cros_ec_command {scalar_t__ outsize; scalar_t__ insize; scalar_t__ version; scalar_t__ command; scalar_t__* data; scalar_t__ result; } ;
typedef int args ;
struct TYPE_2__ {scalar_t__ (* read ) (int ,int,scalar_t__*) ;int (* write ) (int ,int,scalar_t__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int,scalar_t__*) ;
 int FUNC_5 (int ,int,scalar_t__*) ;
 int FUNC_6 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_8 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_10(struct cros_ec_device *VAR_11,
    struct cros_ec_command *VAR_12)
{
 struct ec_lpc_host_args VAR_13;
 u8 VAR_14;
 int VAR_15 = 0;

 if (VAR_12->outsize > VAR_6 ||
     VAR_12->insize > VAR_6) {
  FUNC_1(VAR_11->dev,
   "invalid buffer sizes (out %d, in %d)\n",
   VAR_12->outsize, VAR_12->insize);
  return -VAR_7;
 }


 VAR_13.flags = VAR_1;
 VAR_13.command_version = VAR_12->version;
 VAR_13.data_size = VAR_12->outsize;


 VAR_14 = VAR_12->command + VAR_13.flags + VAR_13.command_version + VAR_13.data_size;


 VAR_14 += VAR_10.write(VAR_5, VAR_12->outsize,
         VAR_12->data);


 VAR_13.checksum = VAR_14;
 VAR_10.write(VAR_2, sizeof(VAR_13),
         (u8 *)&VAR_13);


 VAR_14 = VAR_12->command;
 VAR_10.write(VAR_3, 1, &VAR_14);

 if (FUNC_3()) {
  FUNC_2(VAR_11->dev, "EC responsed timed out\n");
  VAR_15 = -VAR_8;
  goto done;
 }


 VAR_12->result = VAR_10.read(VAR_4, 1, &VAR_14);
 VAR_15 = FUNC_0(VAR_11, VAR_12);
 if (VAR_15)
  goto done;


 VAR_10.read(VAR_2, sizeof(VAR_13), (u8 *)&VAR_13);

 if (VAR_13.data_size > VAR_12->insize) {
  FUNC_1(VAR_11->dev,
   "packet too long (%d bytes, expected %d)",
   VAR_13.data_size, VAR_12->insize);
  VAR_15 = -VAR_9;
  goto done;
 }


 VAR_14 = VAR_12->command + VAR_13.flags + VAR_13.command_version + VAR_13.data_size;


 VAR_14 += VAR_10.read(VAR_5, VAR_13.data_size,
        VAR_12->data);


 if (VAR_13.checksum != VAR_14) {
  FUNC_1(VAR_11->dev,
   "bad packet checksum, expected %02x, got %02x\n",
   VAR_13.checksum, VAR_14);
  VAR_15 = -VAR_0;
  goto done;
 }


 VAR_15 = VAR_13.data_size;
done:
 return VAR_15;
}
