
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int lookuptbl; int scrub; int free; int erroneous; int used; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ubi_device*) ;
 int FUNC_3 (struct ubi_device*) ;
 int FUNC_4 (struct ubi_device*,int *) ;
 int FUNC_5 (struct ubi_device*) ;

void FUNC_6(struct ubi_device *VAR_0)
{
 FUNC_0("close the WL sub-system");
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0, &VAR_0->used);
 FUNC_4(VAR_0, &VAR_0->erroneous);
 FUNC_4(VAR_0, &VAR_0->free);
 FUNC_4(VAR_0, &VAR_0->scrub);
 FUNC_1(VAR_0->lookuptbl);
}
