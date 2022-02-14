
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_init_invariants {int boardinfo; int sprom; } ;
struct ssb_bus {int dummy; } ;


 int FUNC_0 (struct ssb_bus*,int *) ;
 int FUNC_1 (struct ssb_bus*,int *) ;

int FUNC_2(struct ssb_bus *VAR_0,
      struct ssb_init_invariants *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->sprom);
 if (VAR_2)
  goto out;
 FUNC_0(VAR_0, &VAR_1->boardinfo);

out:
 return VAR_2;
}
