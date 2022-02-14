
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct power_supply {TYPE_1__* desc; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ individual_addressing; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 struct power_supply* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int,int,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(int VAR_3,
       struct device *VAR_4,
       char *VAR_5)
{
 struct power_supply *VAR_6 = FUNC_1(VAR_4);
 int VAR_7, VAR_8;
 if (VAR_2.individual_addressing)

  VAR_8 = FUNC_3(VAR_6->desc->name);
 else
  VAR_8 = VAR_0;
 if (FUNC_2(VAR_3, VAR_8, &VAR_7))
  return -VAR_1;
 return FUNC_0(VAR_5, "%d\n", VAR_7);
}
