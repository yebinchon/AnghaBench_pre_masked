
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cros_ec_device {int max_response; } ;
struct TYPE_4__ {int size; int data; } ;
struct cros_ec_debugfs {TYPE_1__* ec; TYPE_2__ panicinfo_blob; int dir; } ;
struct cros_ec_command {int insize; int data; int command; } ;
struct TYPE_3__ {int dev; struct cros_ec_device* ec_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (char*,int,int ,TYPE_2__*) ;
 int FUNC_2 (int ,struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct cros_ec_debugfs *VAR_4)
{
 struct cros_ec_device *VAR_5 = VAR_4->ec->ec_dev;
 int VAR_6;
 struct cros_ec_command *VAR_7;
 int VAR_8;

 VAR_8 = VAR_5->max_response;

 VAR_7 = FUNC_3(VAR_4->ec->dev,
   sizeof(*VAR_7) + VAR_8, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->command = VAR_0;
 VAR_7->insize = VAR_8;

 VAR_6 = FUNC_0(VAR_5, VAR_7);
 if (VAR_6 < 0) {
  VAR_6 = 0;
  goto free;
 }


 if (VAR_6 == 0)
  goto free;

 VAR_4->panicinfo_blob.data = VAR_7->data;
 VAR_4->panicinfo_blob.size = VAR_6;

 FUNC_1("panicinfo", VAR_3 | 0444, VAR_4->dir,
       &VAR_4->panicinfo_blob);

 return 0;

free:
 FUNC_2(VAR_4->ec->dev, VAR_7);
 return VAR_6;
}
