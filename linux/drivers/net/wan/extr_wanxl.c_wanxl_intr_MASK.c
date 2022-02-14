
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct card {int n_ports; int * ports; scalar_t__ plx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct card*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void* VAR_5)
{
 struct card *VAR_6 = VAR_5;
        int VAR_7;
        u32 VAR_8;
        int VAR_9 = 0;


        while((VAR_8 = FUNC_1(VAR_6->plx + VAR_3)) != 0) {
                VAR_9 = 1;
  FUNC_5(VAR_8, VAR_6->plx + VAR_3);

                for (VAR_7 = 0; VAR_7 < VAR_6->n_ports; VAR_7++) {
   if (VAR_8 & (1 << (VAR_2 + VAR_7)))
    FUNC_4(&VAR_6->ports[VAR_7]);
   if (VAR_8 & (1 << (VAR_0 + VAR_7)))
    FUNC_2(&VAR_6->ports[VAR_7]);
  }
  if (VAR_8 & (1 << VAR_1))
   FUNC_3(VAR_6);
        }

        return FUNC_0(VAR_9);
}
