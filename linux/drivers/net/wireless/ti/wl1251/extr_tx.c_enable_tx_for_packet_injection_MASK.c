
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int joined; int dtim_period; int beacon_int; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1251*,int ,int ,int ,int ) ;
 int FUNC_1 (struct wl1251*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct wl1251 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_2->channel,
         VAR_2->beacon_int, VAR_2->dtim_period);
 if (VAR_3 < 0) {
  FUNC_2("join failed");
  return;
 }

 VAR_3 = FUNC_1(VAR_2, VAR_1, 100);
 if (VAR_3 < 0) {
  FUNC_2("join timeout");
  return;
 }

 VAR_2->joined = 1;
}
