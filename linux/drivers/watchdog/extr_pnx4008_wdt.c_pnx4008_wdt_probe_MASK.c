
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int timeout; int status; struct device* parent; int bootstatus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*,int ,int ) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (TYPE_1__*,int ,struct device*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 int VAR_12 = 0;

 FUNC_12(&VAR_7, VAR_4, VAR_11);

 VAR_8 = FUNC_8(VAR_10, 0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_7(VAR_11, ((void*)0));
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_6(VAR_11, VAR_6,
           VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_7.bootstatus = (FUNC_10(FUNC_3(VAR_8)) & VAR_3) ?
   VAR_1 : 0;
 VAR_7.parent = VAR_11;
 FUNC_13(&VAR_7, VAR_5);
 FUNC_14(&VAR_7, 128);

 if (FUNC_10(FUNC_2(VAR_8)) & VAR_0)
  FUNC_11(VAR_2, &VAR_7.status);

 VAR_12 = FUNC_9(VAR_11, &VAR_7);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_5(VAR_11, "heartbeat %d sec\n", VAR_7.timeout);

 return 0;
}
