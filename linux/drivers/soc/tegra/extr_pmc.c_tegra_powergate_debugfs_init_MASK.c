
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int *,int *,int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(void)
{
 VAR_2->debugfs = FUNC_0("powergate", VAR_1, ((void*)0), ((void*)0),
        &VAR_3);
 if (!VAR_2->debugfs)
  return -VAR_0;

 return 0;
}
