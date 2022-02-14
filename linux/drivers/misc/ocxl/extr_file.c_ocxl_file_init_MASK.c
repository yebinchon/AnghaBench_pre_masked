
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int devnode; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,char*) ;
 TYPE_1__* FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(void)
{
 int VAR_7;

 FUNC_5(&VAR_3);
 FUNC_4(&VAR_2);

 VAR_7 = FUNC_2(&VAR_5, 0, VAR_0, "ocxl");
 if (VAR_7) {
  FUNC_6("Unable to allocate ocxl major number: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_4 = FUNC_3(VAR_1, "ocxl");
 if (FUNC_0(VAR_4)) {
  FUNC_6("Unable to create ocxl class\n");
  FUNC_7(VAR_5, VAR_0);
  return FUNC_1(VAR_4);
 }

 VAR_4->devnode = VAR_6;
 return 0;
}
