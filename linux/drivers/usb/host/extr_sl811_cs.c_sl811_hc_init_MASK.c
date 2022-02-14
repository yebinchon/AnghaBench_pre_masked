
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int resource_size_t ;
struct TYPE_8__ {struct device* parent; } ;
struct TYPE_11__ {int name; TYPE_2__ dev; } ;
struct TYPE_10__ {int start; int end; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_9__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_4, resource_size_t VAR_5,
    int VAR_6)
{
 if (VAR_1.dev.parent)
  return -VAR_0;
 VAR_1.dev.parent = VAR_4;


 VAR_2[0].start = VAR_6;

 VAR_2[1].start = VAR_5;
 VAR_2[1].end = VAR_5;

 VAR_2[2].start = VAR_5 + 1;
 VAR_2[2].end = VAR_5 + 1;





 VAR_1.name = VAR_3.driver.name;
 return FUNC_0(&VAR_1);
}
