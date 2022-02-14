
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int flags; int chid; } ;
struct channel_path {int lock; TYPE_1__ desc_fmt1; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 struct channel_path* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct channel_path *VAR_3 = FUNC_3(VAR_0);
 ssize_t VAR_4;

 FUNC_0(&VAR_3->lock);
 if (VAR_3->desc_fmt1.flags & 0x10)
  VAR_4 = FUNC_2(VAR_2, "%04x\n", VAR_3->desc_fmt1.chid);
 else
  VAR_4 = 0;
 FUNC_1(&VAR_3->lock);

 return VAR_4;
}
