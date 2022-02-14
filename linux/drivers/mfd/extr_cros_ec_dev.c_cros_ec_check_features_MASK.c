
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cros_ec_dev {unsigned int* features; int dev; int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {int data; int result; int insize; scalar_t__ command; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct cros_ec_command*) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_5 (int,int ) ;
 int FUNC_6 (unsigned int*,int ,int) ;
 int FUNC_7 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct cros_ec_dev *VAR_3, int VAR_4)
{
 struct cros_ec_command *VAR_5;
 int VAR_6;

 if (VAR_3->features[0] == -1U && VAR_3->features[1] == -1U) {

  VAR_5 = FUNC_5(sizeof(*VAR_5) + sizeof(VAR_3->features), VAR_2);
  if (!VAR_5)
   return -VAR_1;

  VAR_5->command = VAR_0 + VAR_3->cmd_offset;
  VAR_5->insize = sizeof(VAR_3->features);

  VAR_6 = FUNC_1(VAR_3->ec_dev, VAR_5);
  if (VAR_6 < 0) {
   FUNC_3(VAR_3->dev, "cannot get EC features: %d/%d\n",
     VAR_6, VAR_5->result);
   FUNC_7(VAR_3->features, 0, sizeof(VAR_3->features));
  } else {
   FUNC_6(VAR_3->features, VAR_5->data, sizeof(VAR_3->features));
  }

  FUNC_2(VAR_3->dev, "EC features %08x %08x\n",
   VAR_3->features[0], VAR_3->features[1]);

  FUNC_4(VAR_5);
 }

 return VAR_3->features[VAR_4 / 32] & FUNC_0(VAR_4);
}
