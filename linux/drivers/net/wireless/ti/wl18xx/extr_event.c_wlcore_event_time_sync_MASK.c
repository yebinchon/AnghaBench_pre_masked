
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wl1271 {int dummy; } ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct wl1271 *VAR_0,
       u16 VAR_1, u16 VAR_2,
       u16 VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_6 = (VAR_1 << 16) | VAR_2;
 VAR_5 = (VAR_3 << 16) | VAR_4;

 FUNC_0("TIME_SYNC_EVENT_ID: clock_high %u, clock low %u",
      VAR_6, VAR_5);
}
