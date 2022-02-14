
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int nvs_len; int* nvs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_0(struct wl1251 *VAR_5)
{
 if (VAR_5->nvs_len < 0x24)
  return -VAR_1;


 if (VAR_5->nvs[VAR_4] != 2 ||
     VAR_5->nvs[VAR_3] != 0x6d ||
     VAR_5->nvs[VAR_2] != 0x54)
  return -VAR_0;

 return 0;
}
