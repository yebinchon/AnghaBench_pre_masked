
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5933_state {unsigned int* range_avail; unsigned int vref_mv; } ;



__attribute__((used)) static void FUNC_0(struct ad5933_state *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2[4] = {1980, 198, 383, 970};

 for (VAR_1 = 0; VAR_1 < 4; VAR_1++)
  VAR_0->range_avail[VAR_1] = VAR_2[VAR_1] * VAR_0->vref_mv / 3300;
}
