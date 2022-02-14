
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mib_sem; int ** mib; } ;
typedef TYPE_1__ islpci_private ;
struct TYPE_6__ {int flags; int size; int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_4__* VAR_4 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(islpci_private *VAR_5)
{
 int VAR_6;

 VAR_5->mib = FUNC_1(VAR_3, sizeof (void *), VAR_1);
 if (!VAR_5->mib)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_4[VAR_6].flags & VAR_2) {
   VAR_5->mib[VAR_6] = FUNC_1(VAR_4[VAR_6].size,
            (VAR_4[VAR_6].range + 1),
            VAR_1);
   if (!VAR_5->mib[VAR_6])
    return -VAR_0;
  } else
   VAR_5->mib[VAR_6] = ((void*)0);
 }

 FUNC_0(&VAR_5->mib_sem);
 FUNC_2(VAR_5);

 return 0;
}
