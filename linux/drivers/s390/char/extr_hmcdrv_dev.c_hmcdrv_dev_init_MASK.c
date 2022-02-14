
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int devnode; } ;
struct TYPE_6__ {scalar_t__ mode; int * fops; int name; int minor; int owner; } ;
struct TYPE_7__ {TYPE_1__ dev; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 struct device* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct device*) ;
 struct device* FUNC_8 (struct device*,int *,int ,int *,char*,int ) ;
 TYPE_2__ VAR_4 ;
 struct device* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(void)
{
 int VAR_9;
 VAR_4.dev.minor = VAR_2;
 VAR_4.dev.name = VAR_1;
 VAR_4.dev.fops = &VAR_6;
 VAR_4.dev.mode = 0;
 VAR_9 = FUNC_9(&VAR_4.dev);


 return VAR_9;
}
