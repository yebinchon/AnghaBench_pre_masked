
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wil_rx_status_compressed {int d1; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static inline u8 FUNC_1(void *VAR_0)
{
 u8 VAR_1 = FUNC_0(((struct wil_rx_status_compressed *)VAR_0)->d1,
         24, 27);

 switch (VAR_1) {
 case 0: return 0;
 case 3: return 2;
 default: return 0xFF;
 }
}
