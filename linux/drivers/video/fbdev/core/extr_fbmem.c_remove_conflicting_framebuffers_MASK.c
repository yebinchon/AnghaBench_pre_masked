
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct apertures_struct {TYPE_1__* ranges; } ;
struct TYPE_2__ {int size; scalar_t__ base; } ;


 int VAR_0 ;
 struct apertures_struct* FUNC_0 (int) ;
 int FUNC_1 (struct apertures_struct*,char const*,int) ;
 int FUNC_2 (struct apertures_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

int FUNC_5(struct apertures_struct *VAR_2,
        const char *VAR_3, bool VAR_4)
{
 bool VAR_5 = 0;

 if (!VAR_2) {
  VAR_2 = FUNC_0(1);
  if (!VAR_2)
   return -VAR_0;

  VAR_2->ranges[0].base = 0;
  VAR_2->ranges[0].size = ~0;
  VAR_5 = 1;
 }

 FUNC_3(&VAR_1);
 FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_4(&VAR_1);

 if (VAR_5)
  FUNC_2(VAR_2);

 return 0;
}
