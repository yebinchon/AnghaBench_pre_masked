
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct whc {int dummy; } ;
struct uwb_mas_bm {int dummy; } ;
typedef scalar_t__ s8 ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct whc*,int ,int ,void*,int) ;
 int FUNC_2 (struct whc*,int ,int ) ;
 struct whc* FUNC_3 (struct wusbhc*) ;

int FUNC_4(struct wusbhc *VAR_2, s8 VAR_3, const struct uwb_mas_bm *VAR_4)
{
 struct whc *VAR_5 = FUNC_3(VAR_2);

 if (VAR_3 >= 0)
  FUNC_2(VAR_5, VAR_0, FUNC_0(VAR_3));

 return FUNC_1(VAR_5, VAR_1, 0, (void *)VAR_4, sizeof(*VAR_4));
}
