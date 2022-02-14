
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {unsigned int nr_events; unsigned int completed_events; } ;


 int FUNC_0 (struct kioctx*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct kioctx *VAR_0, unsigned VAR_1,
                                  unsigned VAR_2)
{
 unsigned VAR_3, VAR_4;


 VAR_1 %= VAR_0->nr_events;
 if (VAR_1 <= VAR_2)
  VAR_3 = VAR_2 - VAR_1;
 else
  VAR_3 = VAR_0->nr_events - (VAR_1 - VAR_2);

 VAR_4 = VAR_0->completed_events;
 if (VAR_3 < VAR_4)
  VAR_4 -= VAR_3;
 else
  VAR_4 = 0;

 if (!VAR_4)
  return;

 VAR_0->completed_events -= VAR_4;
 FUNC_0(VAR_0, VAR_4);
}
