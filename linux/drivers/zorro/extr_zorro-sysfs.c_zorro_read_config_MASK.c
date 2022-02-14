
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_dev {int slotsize; int slotaddr; int rom; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
struct ConfigDev {void* cd_BoardSize; void* cd_BoardAddr; void* cd_SlotSize; void* cd_SlotAddr; int cd_Rom; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int cd ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct kobject*) ;
 int FUNC_3 (char*,size_t,int *,struct ConfigDev*,int) ;
 int FUNC_4 (struct ConfigDev*,int ,int) ;
 struct zorro_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct zorro_dev*) ;
 int FUNC_7 (struct zorro_dev*) ;

__attribute__((used)) static ssize_t FUNC_8(struct file *VAR_0, struct kobject *VAR_1,
     struct bin_attribute *VAR_2,
     char *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 struct zorro_dev *VAR_6 = FUNC_5(FUNC_2(VAR_1));
 struct ConfigDev VAR_7;


 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cd_Rom = VAR_6->rom;
 VAR_7.cd_SlotAddr = FUNC_0(VAR_6->slotaddr);
 VAR_7.cd_SlotSize = FUNC_0(VAR_6->slotsize);
 VAR_7.cd_BoardAddr = FUNC_1(FUNC_7(VAR_6));
 VAR_7.cd_BoardSize = FUNC_1(FUNC_6(VAR_6));

 return FUNC_3(VAR_3, VAR_5, &VAR_4, &VAR_7, sizeof(VAR_7));
}
