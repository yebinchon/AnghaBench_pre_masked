
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lcs_card {int portno; TYPE_1__* dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int s16 ;
struct TYPE_2__ {int dev_port; } ;


 size_t VAR_0 ;
 struct lcs_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_2 (struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
        struct lcs_card *VAR_5;
 int VAR_6;
 s16 VAR_7;

 VAR_5 = FUNC_0(VAR_1);

        if (!VAR_5)
                return 0;

 VAR_6 = FUNC_1(VAR_3, 0, &VAR_7);
 if (VAR_6)
  return -VAR_0;

        VAR_5->portno = VAR_7;
 if (VAR_5->dev)
  VAR_5->dev->dev_port = VAR_5->portno;

        return VAR_4;

}
