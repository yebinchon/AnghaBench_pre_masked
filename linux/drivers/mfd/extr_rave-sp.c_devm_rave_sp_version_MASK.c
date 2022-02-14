
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rave_sp_version {int * letter; int minor; int major; int hardware; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 char const* FUNC_0 (struct device*,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(struct device *VAR_1,
     struct rave_sp_version *VAR_2)
{





 return FUNC_0(VAR_1, VAR_0, "%02d%02d%02d.%c%c\n",
         VAR_2->hardware,
         FUNC_1(VAR_2->major),
         VAR_2->minor,
         VAR_2->letter[0],
         VAR_2->letter[1]);
}
