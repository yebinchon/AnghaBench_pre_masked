
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {TYPE_1__* fm; int fm_wl_pool; int fm_pool; } ;
struct TYPE_2__ {int used_blocks; struct TYPE_2__** e; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ubi_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct ubi_device *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0, &VAR_0->fm_pool);
 FUNC_1(VAR_0, &VAR_0->fm_wl_pool);

 if (VAR_0->fm) {
  for (VAR_1 = 0; VAR_1 < VAR_0->fm->used_blocks; VAR_1++)
   FUNC_0(VAR_0->fm->e[VAR_1]);
 }
 FUNC_0(VAR_0->fm);
}
