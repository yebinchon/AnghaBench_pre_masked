
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7164_histogram {TYPE_1__* counter1; int name; } ;
struct TYPE_2__ {int val; } ;


 int FUNC_0 (struct saa7164_histogram*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct saa7164_histogram *VAR_0, char *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, 0, sizeof(struct saa7164_histogram));
 FUNC_1(VAR_0->name, VAR_1, sizeof(VAR_0->name));


 for (VAR_2 = 0; VAR_2 < 30; VAR_2++)
  VAR_0->counter1[0 + VAR_2].val = VAR_2;


 for (VAR_2 = 0; VAR_2 < 18; VAR_2++)
  VAR_0->counter1[30 + VAR_2].val = 30 + (VAR_2 * 10);


 for (VAR_2 = 0; VAR_2 < 15; VAR_2++)
  VAR_0->counter1[48 + VAR_2].val = 200 + (VAR_2 * 200);


 VAR_0->counter1[55].val = 2000;


 VAR_0->counter1[56].val = 4000;


 VAR_0->counter1[57].val = 8000;


 VAR_0->counter1[58].val = 15000;


 VAR_0->counter1[59].val = 30000;


 VAR_0->counter1[60].val = 60000;


 VAR_0->counter1[61].val = 300000;


 VAR_0->counter1[62].val = 900000;


 VAR_0->counter1[63].val = 3600000;
}
