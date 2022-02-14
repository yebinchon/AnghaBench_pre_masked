
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {struct firmware const* helper_fw; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (struct lbs_private*,int ,struct firmware const*,struct firmware const*) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (struct firmware const*) ;

__attribute__((used)) static void FUNC_3(const struct firmware *VAR_0, void *VAR_1)
{
 struct lbs_private *VAR_2 = VAR_1;

 if (!VAR_0) {

  FUNC_1(VAR_2);
  return;
 }


 FUNC_0(VAR_2, 0, VAR_2->helper_fw, VAR_0);
 if (VAR_2->helper_fw) {
  FUNC_2 (VAR_2->helper_fw);
  VAR_2->helper_fw = ((void*)0);
 }
 FUNC_2 (VAR_0);
}
