
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_dev {scalar_t__ cmd_offset; } ;
struct cros_ec_command {unsigned int version; unsigned int outsize; unsigned int insize; void* data; scalar_t__ command; } ;
struct charger_data {int ec_device; struct cros_ec_dev* ec_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cros_ec_command*) ;
 int FUNC_1 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (void*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct charger_data *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4,
      void *VAR_5,
      unsigned int VAR_6,
      void *VAR_7,
      unsigned int VAR_8)
{
 struct cros_ec_dev *VAR_9 = VAR_2->ec_dev;
 struct cros_ec_command *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10) + FUNC_3(VAR_6, VAR_8), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->version = VAR_3;
 VAR_10->command = VAR_9->cmd_offset + VAR_4;
 VAR_10->outsize = VAR_6;
 VAR_10->insize = VAR_8;

 if (VAR_6)
  FUNC_4(VAR_10->data, VAR_5, VAR_6);

 VAR_11 = FUNC_0(VAR_2->ec_device, VAR_10);
 if (VAR_11 >= 0 && VAR_8)
  FUNC_4(VAR_7, VAR_10->data, VAR_8);

 FUNC_1(VAR_10);
 return VAR_11;
}
