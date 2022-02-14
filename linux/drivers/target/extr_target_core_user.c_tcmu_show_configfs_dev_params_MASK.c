
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {char* dev_config; int dev_size; int max_blocks; } ;
struct se_device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct tcmu_dev* FUNC_1 (struct se_device*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct se_device *VAR_0, char *VAR_1)
{
 struct tcmu_dev *VAR_2 = FUNC_1(VAR_0);
 ssize_t VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_1 + VAR_3, "Config: %s ",
       VAR_2->dev_config[0] ? VAR_2->dev_config : "NULL");
 VAR_3 += FUNC_2(VAR_1 + VAR_3, "Size: %llu ", VAR_2->dev_size);
 VAR_3 += FUNC_2(VAR_1 + VAR_3, "MaxDataAreaMB: %u\n",
        FUNC_0(VAR_2->max_blocks));

 return VAR_3;
}
