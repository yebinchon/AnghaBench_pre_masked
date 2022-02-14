
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_2)
{
 int VAR_3;

 FUNC_0("Uncommon unload Flow\n");


 if (FUNC_4(VAR_2))
  return FUNC_5(VAR_2);

 FUNC_0("Path is unmarked\n");


 if (FUNC_3(VAR_2))
  goto out;





 VAR_3 = FUNC_1(VAR_2, VAR_1, 0);

 if (!VAR_3) {

  FUNC_0("FW version matches our own. Attempting FLR\n");
  VAR_3 = FUNC_2(VAR_2);
 }

 if (!VAR_3) {

  FUNC_0("FLR successful\n");
  return 0;
 }

 FUNC_0("Could not FLR\n");

out:

 VAR_3 = FUNC_5(VAR_2);
 if (!VAR_3)
  VAR_3 = VAR_0;

 return VAR_3;
}
