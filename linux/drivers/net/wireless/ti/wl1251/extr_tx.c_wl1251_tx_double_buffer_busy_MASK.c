
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {int data_in_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct wl1251 *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_2->data_in_count;

 if (VAR_5 < VAR_3)

  VAR_5 += VAR_1 + 1;

 VAR_4 = VAR_5 - VAR_3;

 FUNC_0(VAR_4 < 0);
 FUNC_0(VAR_4 > VAR_0);

 if (VAR_4 >= VAR_0)
  return 1;
 else
  return 0;
}
