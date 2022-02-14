
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct cros_ec_platform {char* ec_name; } ;
struct cros_ec_dev {struct cros_ec_debugfs* debug_info; TYPE_1__* ec_dev; int dev; } ;
struct cros_ec_debugfs {int dir; struct cros_ec_dev* ec; } ;
struct TYPE_3__ {int last_resume_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cros_ec_debugfs*) ;
 int FUNC_1 (struct cros_ec_debugfs*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char*,int,int ,struct cros_ec_debugfs*,int *) ;
 int FUNC_4 (char*,int,int ,int *) ;
 int FUNC_5 (int ) ;
 struct cros_ec_dev* FUNC_6 (int ) ;
 struct cros_ec_platform* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,struct cros_ec_dev*) ;
 struct cros_ec_debugfs* FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct cros_ec_dev *VAR_5 = FUNC_6(VAR_4->dev.parent);
 struct cros_ec_platform *VAR_6 = FUNC_7(VAR_5->dev);
 const char *VAR_7 = VAR_6->ec_name;
 struct cros_ec_debugfs *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_9(VAR_5->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->ec = VAR_5;
 VAR_8->dir = FUNC_2(VAR_7, ((void*)0));

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9)
  goto remove_debugfs;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9)
  goto remove_debugfs;

 FUNC_3("pdinfo", 0444, VAR_8->dir, VAR_8,
       &VAR_2);

 FUNC_3("uptime", 0444, VAR_8->dir, VAR_8,
       &VAR_3);

 FUNC_4("last_resume_result", 0444, VAR_8->dir,
      &VAR_5->ec_dev->last_resume_result);

 VAR_5->debug_info = VAR_8;

 FUNC_8(&VAR_4->dev, VAR_5);

 return 0;

remove_debugfs:
 FUNC_5(VAR_8->dir);
 return VAR_9;
}
