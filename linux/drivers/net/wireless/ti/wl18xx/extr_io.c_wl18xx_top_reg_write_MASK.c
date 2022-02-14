
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*,int,int*) ;
 int FUNC_2 (struct wl1271*,int,int) ;

int FUNC_3(struct wl1271 *VAR_1, int VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_2 % 2))
  return -VAR_0;

 if ((VAR_2 % 4) == 0) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);
  if (VAR_5 < 0)
   goto out;

  VAR_4 = (VAR_4 & 0xffff0000) | VAR_3;
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
 } else {
  VAR_5 = FUNC_1(VAR_1, VAR_2 - 2, &VAR_4);
  if (VAR_5 < 0)
   goto out;

  VAR_4 = (VAR_4 & 0xffff) | (VAR_3 << 16);
  VAR_5 = FUNC_2(VAR_1, VAR_2 - 2, VAR_4);
 }

out:
 return VAR_5;
}
