
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(enum omap_plane VAR_2,
  u32 *VAR_3, u32 *VAR_4, bool VAR_5,
  bool VAR_6)
{





 unsigned VAR_7 = FUNC_2();
 unsigned VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_2);
 VAR_8 = FUNC_1(VAR_2);

 if (VAR_5) {
  VAR_9 = 0;
  for (VAR_11 = 0; VAR_11 < FUNC_3(); ++VAR_11)
   VAR_9 += FUNC_1(VAR_11);
 } else {
  VAR_9 = VAR_8;
 }







 if (VAR_6 && FUNC_4(VAR_0)) {
  *VAR_3 = VAR_8 - VAR_10 * 2;
  *VAR_4 = VAR_9 - VAR_10;
 } else if (VAR_2 == VAR_1) {





  *VAR_3 = 0;
  *VAR_4 = VAR_10;
 } else {
  *VAR_3 = VAR_8 - VAR_10;
  *VAR_4 = VAR_9 - VAR_7;
 }
}
