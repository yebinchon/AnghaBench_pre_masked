
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev_root; } ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(void) {
 int VAR_2, VAR_3;

 VAR_2 = FUNC_1(&VAR_1, ((void*)0));
 if (!VAR_2) {
  for (VAR_3 = 0; VAR_0[VAR_3]; VAR_3 ++)
   FUNC_0(VAR_1.dev_root, VAR_0[VAR_3]);
 }
 return VAR_2;
}
