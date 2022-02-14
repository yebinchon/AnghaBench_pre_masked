
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {TYPE_1__* fw_iter; struct firmware const* helper_fw; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {scalar_t__ fwname; } ;


 int FUNC_0 (struct lbs_private*,scalar_t__,int ) ;
 int FUNC_1 (struct lbs_private*,int ,struct firmware const*,int *) ;
 int FUNC_2 (struct lbs_private*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(const struct firmware *VAR_1, void *VAR_2)
{
 struct lbs_private *VAR_3 = VAR_2;

 if (!VAR_1) {

  FUNC_2(VAR_3);
  return;
 }


 if (VAR_3->fw_iter->fwname) {
  VAR_3->helper_fw = VAR_1;
  FUNC_0(VAR_3, VAR_3->fw_iter->fwname, VAR_0);
 } else {

  FUNC_1(VAR_3, 0, VAR_1, ((void*)0));
 }
}
