
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; int busid_lock; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(char *VAR_6)
{
 int VAR_7;
 int VAR_8 = -1;

 FUNC_2(&VAR_5);
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 < 0)
  goto out;


 VAR_8 = 0;

 FUNC_2(&VAR_4[VAR_7].busid_lock);

 if (VAR_4[VAR_7].status == VAR_2)
  FUNC_1(VAR_4[VAR_7].name, 0, VAR_0);

 if ((VAR_4[VAR_7].status != VAR_2) &&
     (VAR_4[VAR_7].status != VAR_1))
  VAR_4[VAR_7].status = VAR_3;

 FUNC_3(&VAR_4[VAR_7].busid_lock);
out:
 FUNC_3(&VAR_5);

 return VAR_8;
}
