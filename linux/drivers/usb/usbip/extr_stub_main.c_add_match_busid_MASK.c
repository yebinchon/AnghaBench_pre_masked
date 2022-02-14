
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; int busid_lock; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_7)
{
 int VAR_8;
 int VAR_9 = -1;

 FUNC_1(&VAR_6);

 if (FUNC_0(VAR_7) >= 0) {
  VAR_9 = 0;
  goto out;
 }

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  FUNC_1(&VAR_5[VAR_8].busid_lock);
  if (!VAR_5[VAR_8].name[0]) {
   FUNC_3(VAR_5[VAR_8].name, VAR_7, VAR_0);
   if ((VAR_5[VAR_8].status != VAR_3) &&
       (VAR_5[VAR_8].status != VAR_4))
    VAR_5[VAR_8].status = VAR_2;
   VAR_9 = 0;
   FUNC_2(&VAR_5[VAR_8].busid_lock);
   break;
  }
  FUNC_2(&VAR_5[VAR_8].busid_lock);
 }

out:
 FUNC_2(&VAR_6);

 return VAR_9;
}
