
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct of_phandle_iterator {int cur_count; int cur; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct of_phandle_iterator *VAR_0,
        uint32_t *VAR_1,
        int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_0->cur_count;

 if (FUNC_0(VAR_2 < VAR_4))
  VAR_4 = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  VAR_1[VAR_3] = FUNC_1(VAR_0->cur++);

 return VAR_4;
}
