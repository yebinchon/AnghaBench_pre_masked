
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251 {int dummy; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (struct wl1251*,scalar_t__,int *) ;
 int FUNC_1 (struct wl1251*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct wl1251 *VAR_1, off_t VAR_2,
         u8 *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 FUNC_1(VAR_1, VAR_0, 0);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_0(VAR_1, VAR_2 + VAR_5, &VAR_3[VAR_5]);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
