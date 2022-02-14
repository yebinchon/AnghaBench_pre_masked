
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpgaimage {int fw_entry; } ;
struct TYPE_2__ {int dev; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct fpgaimage *VAR_1, char *VAR_2)
{
 int VAR_3;

 FUNC_1("load fpgaimage %s\n", VAR_2);

 VAR_3 = FUNC_2(&VAR_1->fw_entry, VAR_2, &VAR_0->dev);
 if (VAR_3 != 0) {
  FUNC_0("firmware %s is missing, cannot continue.\n", VAR_2);
  return VAR_3;
 }

 return 0;
}
