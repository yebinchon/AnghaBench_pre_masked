
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int bcdDevice; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;
struct TYPE_6__ {TYPE_2__ cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ,int *) ;
 TYPE_3__* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_0,
  const char *VAR_1, size_t VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, 0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_0)->cdev.desc.bcdDevice = FUNC_0(VAR_3);
 return VAR_2;
}
