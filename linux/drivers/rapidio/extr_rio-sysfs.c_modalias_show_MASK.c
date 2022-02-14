
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_dev {int vid; int did; int asm_vid; int asm_did; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,int,int,int) ;
 struct rio_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct rio_dev *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "rapidio:v%04Xd%04Xav%04Xad%04X\n",
         VAR_3->vid, VAR_3->did, VAR_3->asm_vid, VAR_3->asm_did);
}
