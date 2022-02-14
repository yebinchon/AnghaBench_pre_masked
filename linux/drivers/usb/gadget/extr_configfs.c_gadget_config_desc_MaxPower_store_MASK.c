
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int MaxPower; } ;
struct TYPE_4__ {TYPE_1__ c; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ,int *) ;
 TYPE_2__* FUNC_2 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 u16 VAR_4;
 int VAR_5;
 VAR_5 = FUNC_1(VAR_2, 0, &VAR_4);
 if (VAR_5)
  return VAR_5;
 if (FUNC_0(VAR_4, 8) > 0xff)
  return -VAR_0;
 FUNC_2(VAR_1)->c.MaxPower = VAR_4;
 return VAR_3;
}
