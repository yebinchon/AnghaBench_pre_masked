
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {size_t state; } ;
struct fc_lport {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 char** VAR_1 ;
 struct fnic* FUNC_1 (struct fc_lport*) ;
 struct fc_lport* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 struct fc_lport *VAR_5 = FUNC_2(FUNC_0(VAR_2));
 struct fnic *VAR_6 = FUNC_1(VAR_5);

 return FUNC_3(VAR_4, VAR_0, "%s\n", VAR_1[VAR_6->state]);
}
