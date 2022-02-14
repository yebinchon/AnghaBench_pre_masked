
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_8__ {int status; int max_timeout; int bootstatus; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct platform_device*,int ) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (TYPE_1__*,int ,struct device*) ;
 int FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 VAR_1 = FUNC_2(VAR_5, 0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_3 = FUNC_3(VAR_6, ((void*)0));
 if (!FUNC_0(VAR_3))
  FUNC_9(VAR_3);

 VAR_2.bootstatus = FUNC_5();

 FUNC_11(&VAR_2, VAR_2.max_timeout,
         VAR_6);
 FUNC_12(&VAR_2, VAR_4);
 if (FUNC_6(&VAR_2)) {
  FUNC_8(&VAR_2);
  FUNC_7(&VAR_2);
  FUNC_10(VAR_0, &VAR_2.status);
 }

 return FUNC_4(VAR_6, &VAR_2);
}
