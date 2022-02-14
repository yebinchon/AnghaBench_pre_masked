
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251 {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct wl1251*,int ) ;
 int FUNC_4 (struct wl1251*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct wl1251 *VAR_6, off_t VAR_7, u8 *VAR_8)
{
 unsigned long VAR_9;

 FUNC_4(VAR_6, VAR_0, VAR_7);
 FUNC_4(VAR_6, VAR_1, VAR_2);


 VAR_9 = VAR_5 + FUNC_0(100);
 while (1) {
  if (!(FUNC_3(VAR_6, VAR_1) & VAR_2))
   break;

  if (FUNC_2(VAR_5, VAR_9))
   return -VAR_4;

  FUNC_1(1);
 }

 *VAR_8 = FUNC_3(VAR_6, VAR_3);
 return 0;
}
