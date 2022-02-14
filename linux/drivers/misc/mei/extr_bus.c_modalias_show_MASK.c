
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
typedef int u8 ;
struct mei_cl_device {int name; int me_cl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int ,int const*,int ) ;
 struct mei_cl_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct mei_cl_device *VAR_4 = FUNC_3(VAR_1);
 const uuid_le *VAR_5 = FUNC_0(VAR_4->me_cl);
 u8 VAR_6 = FUNC_1(VAR_4->me_cl);

 return FUNC_2(VAR_3, VAR_0, "mei:%s:%pUl:%02X:",
    VAR_4->name, VAR_5, VAR_6);
}
