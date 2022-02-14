
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251 {int mac_addr; int * nvs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct wl1251*) ;

__attribute__((used)) static int FUNC_3(struct wl1251 *VAR_3)
{
 u8 VAR_4[VAR_1];
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6)
  return VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4[VAR_5] = VAR_3->nvs[VAR_2 + VAR_1 - VAR_5 - 1];


 if (FUNC_0(VAR_4, "\x00\x00\x20\x07\x03\x09"))
  return -VAR_0;

 FUNC_1(VAR_3->mac_addr, VAR_4, VAR_1);
 return 0;
}
