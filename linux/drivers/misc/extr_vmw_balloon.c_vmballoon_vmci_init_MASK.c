
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resource; int context; } ;
struct vmballoon {int capabilities; TYPE_1__ vmci_doorbell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (struct vmballoon*,int ,int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_1 (struct vmballoon*) ;
 unsigned long FUNC_2 (TYPE_1__*,int ,int ,int ,struct vmballoon*) ;

__attribute__((used)) static int FUNC_3(struct vmballoon *VAR_8)
{
 unsigned long VAR_9;

 if ((VAR_8->capabilities & VAR_5) == 0)
  return 0;

 VAR_9 = FUNC_2(&VAR_8->vmci_doorbell, VAR_1,
         VAR_2,
         VAR_7, VAR_8);

 if (VAR_9 != VAR_3)
  goto fail;

 VAR_9 = FUNC_0(VAR_8, VAR_4,
    VAR_8->vmci_doorbell.context,
    VAR_8->vmci_doorbell.resource, ((void*)0));

 if (VAR_9 != VAR_6)
  goto fail;

 return 0;
fail:
 FUNC_1(VAR_8);
 return -VAR_0;
}
