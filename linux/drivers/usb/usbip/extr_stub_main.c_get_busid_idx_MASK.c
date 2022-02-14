
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int busid_lock; scalar_t__* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3)
{
 int VAR_4;
 int VAR_5 = -1;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(&VAR_2[VAR_4].busid_lock);
  if (VAR_2[VAR_4].name[0])
   if (!FUNC_2(VAR_2[VAR_4].name, VAR_3, VAR_0)) {
    VAR_5 = VAR_4;
    FUNC_1(&VAR_2[VAR_4].busid_lock);
    break;
   }
  FUNC_1(&VAR_2[VAR_4].busid_lock);
 }
 return VAR_5;
}
