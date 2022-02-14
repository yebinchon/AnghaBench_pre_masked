
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int max_timeout; int timeout; int * ops; int * info; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*) ;
 struct watchdog_device* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct device*,struct watchdog_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_6 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_11, unsigned int VAR_12)
{
 struct watchdog_device *VAR_13;

 if (!FUNC_3(VAR_11, VAR_1, VAR_0, FUNC_1(VAR_11))) {
  FUNC_0(VAR_11, "Unable to lock port addresses (0x%X-0x%X)\n",
   VAR_1, VAR_1 + VAR_0);
  return -VAR_2;
 }

 VAR_13 = FUNC_2(VAR_11, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->info = &VAR_7;
 VAR_13->ops = &VAR_8;
 VAR_13->timeout = VAR_6;
 VAR_13->min_timeout = 1;
 VAR_13->max_timeout = VAR_5;

 FUNC_6(VAR_13, VAR_9);
 FUNC_5(VAR_13, VAR_10, VAR_11);

 return FUNC_4(VAR_11, VAR_13);
}
