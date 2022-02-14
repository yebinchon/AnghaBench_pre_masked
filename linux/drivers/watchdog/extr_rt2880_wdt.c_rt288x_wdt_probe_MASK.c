
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int max_timeout; struct device* parent; int bootstatus; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 () ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_1__*,int,struct device*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 int VAR_9;

 VAR_2 = FUNC_5(VAR_7, 0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_8, ((void*)0));
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_6 = FUNC_6(VAR_8, ((void*)0));
 if (!FUNC_0(VAR_6))
  FUNC_8(VAR_6);

 VAR_5 = FUNC_2(VAR_3) / VAR_0;

 VAR_4.bootstatus = FUNC_9();
 VAR_4.max_timeout = (0xfffful / VAR_5);
 VAR_4.parent = VAR_8;

 FUNC_10(&VAR_4, VAR_4.max_timeout,
         VAR_8);
 FUNC_11(&VAR_4, VAR_1);

 FUNC_12(&VAR_4);
 VAR_9 = FUNC_7(VAR_8, &VAR_4);
 if (!VAR_9)
  FUNC_3(VAR_8, "Initialized\n");

 return 0;
}
