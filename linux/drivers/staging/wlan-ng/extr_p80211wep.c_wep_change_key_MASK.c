
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlandevice {int* wep_keylens; int * wep_keys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;

int FUNC_1(struct wlandevice *VAR_2, int VAR_3, u8 *VAR_4, int VAR_5)
{
 if (VAR_5 < 0)
  return -1;
 if (VAR_5 >= VAR_0)
  return -1;
 if (!VAR_4)
  return -1;
 if (VAR_3 < 0)
  return -1;
 if (VAR_3 >= VAR_1)
  return -1;

 VAR_2->wep_keylens[VAR_3] = VAR_5;
 FUNC_0(VAR_2->wep_keys[VAR_3], VAR_4, VAR_5);

 return 0;
}
