
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dev_t ;
struct TYPE_6__ {int owner; } ;
struct TYPE_5__ {int dev; TYPE_2__ cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,int *,int ,int *,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,char*,int ,int ,int ) ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static int FUNC_10(dev_t VAR_6)
{
 int VAR_7;

 FUNC_6(&VAR_4.cdev, &VAR_5);
 VAR_4.cdev.owner = VAR_2;
 VAR_7 = FUNC_4(&VAR_4.cdev, VAR_6, 1);
 if (VAR_7 < 0) {
  FUNC_9("Cannot register a device with error %d", VAR_7);
  return VAR_7;
 }

 VAR_4.dev = FUNC_7(VAR_3, ((void*)0), VAR_6, ((void*)0), VAR_0);
 if (FUNC_0(VAR_4.dev)) {
  FUNC_5(&VAR_4.cdev);
  return FUNC_3(VAR_4.dev);
 }

 FUNC_8(VAR_1, "Added %s cdev(%d:%d)",
      VAR_0, FUNC_1(VAR_6), FUNC_2(VAR_6));

 return 0;
}
