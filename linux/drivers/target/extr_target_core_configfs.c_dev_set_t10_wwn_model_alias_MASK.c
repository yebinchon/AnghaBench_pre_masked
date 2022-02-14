
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int model; } ;
struct TYPE_3__ {int cg_item; } ;
struct se_device {TYPE_2__ t10_wwn; TYPE_1__ dev_group; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,struct se_device*,char const*) ;
 int FUNC_2 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(struct se_device *VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->dev_group.cg_item);
 if (FUNC_3(VAR_2) >= VAR_0) {
  FUNC_1("dev[%p]: Backstore name '%s' is too long for "
   "INQUIRY_MODEL, truncating to 15 characters\n", VAR_1,
   VAR_2);
 }





 FUNC_2(VAR_1->t10_wwn.model, VAR_2, VAR_0);
}
