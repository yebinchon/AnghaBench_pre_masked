
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int bmAttributes; } ;
struct TYPE_4__ {TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int ,int*) ;
 TYPE_2__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 u8 VAR_7;
 int VAR_8;
 VAR_8 = FUNC_0(VAR_5, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;
 if (!(VAR_7 & VAR_1))
  return -VAR_0;
 if (VAR_7 & ~(VAR_1 | VAR_2 |
    VAR_3))
  return -VAR_0;
 FUNC_1(VAR_4)->c.bmAttributes = VAR_7;
 return VAR_6;
}
