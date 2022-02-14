
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct w1_slave {TYPE_2__* family; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_7__ {int (* eeprom ) (struct device*) ;int (* precision ) (struct device*,int) ;TYPE_1__* f; } ;
struct TYPE_6__ {scalar_t__ fid; } ;
struct TYPE_5__ {scalar_t__ fid; } ;


 int FUNC_0 (TYPE_3__*) ;
 struct w1_slave* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2, const char *VAR_3,
         size_t VAR_4)
{
 int VAR_5, VAR_6;
 struct w1_slave *VAR_7 = FUNC_1(VAR_1);
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); ++VAR_8) {
  if (VAR_0[VAR_8].f->fid == VAR_7->family->fid) {

   if (VAR_5 == 0)
    VAR_6 = VAR_0[VAR_8].eeprom(VAR_1);
   else
    VAR_6 = VAR_0[VAR_8].precision(VAR_1, VAR_5);
   break;
  }
 }
 return VAR_6 ? : VAR_4;
}
