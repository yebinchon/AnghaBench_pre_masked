
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1, unsigned long const VAR_2[],
   int VAR_3)
{
 int VAR_4;
 int VAR_5 = -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3 / 2; VAR_4++)
  if (VAR_2[(VAR_4 * 2) + 1] >= VAR_1) {
   VAR_5 = VAR_2[VAR_4 * 2];
   break;
  }

 return VAR_5;
}
