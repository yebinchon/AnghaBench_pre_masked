
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (struct sdio_func*) ;
 int FUNC_1 (struct sdio_func*,int,void*,size_t) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (char*,int) ;
 struct sdio_func* FUNC_4 (struct wl1251*) ;

__attribute__((used)) static void FUNC_5(struct wl1251 *VAR_0, int VAR_1,
         void *VAR_2, size_t VAR_3)
{
 int VAR_4;
 struct sdio_func *VAR_5 = FUNC_4(VAR_0);

 FUNC_0(VAR_5);
 VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  FUNC_3("sdio write failed (%d)", VAR_4);
 FUNC_2(VAR_5);
}
