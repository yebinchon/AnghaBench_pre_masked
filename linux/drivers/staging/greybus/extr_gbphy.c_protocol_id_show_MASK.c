
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbphy_device {TYPE_1__* cport_desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int protocol_id; } ;


 int FUNC_0 (char*,char*,int) ;
 struct gbphy_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct gbphy_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "0x%02x\n", VAR_3->cport_desc->protocol_id);
}
