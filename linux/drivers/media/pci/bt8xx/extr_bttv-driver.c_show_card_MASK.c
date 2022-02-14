
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct bttv {TYPE_1__ c; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct video_device* FUNC_1 (struct device*) ;
 struct bttv* FUNC_2 (struct video_device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct video_device *VAR_4 = FUNC_1(VAR_1);
 struct bttv *VAR_5 = FUNC_2(VAR_4);
 return FUNC_0(VAR_3, "%d\n", VAR_5 ? VAR_5->c.type : VAR_0);
}
