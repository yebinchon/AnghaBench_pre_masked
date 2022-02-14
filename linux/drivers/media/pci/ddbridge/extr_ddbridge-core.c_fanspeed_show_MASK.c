
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
struct ddb_link {int dummy; } ;
struct ddb {struct ddb_link* link; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct ddb_link*,int ) ;
 struct ddb* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct ddb *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = VAR_2->attr.name[8] - 0x30;
 struct ddb_link *VAR_6 = &VAR_4->link[VAR_5];
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_0) & 0xff;
 return FUNC_2(VAR_3, "%u\n", VAR_7 * 100);
}
