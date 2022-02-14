
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int * mac_addr; int * nvs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1251*) ;

__attribute__((used)) static int FUNC_1(struct wl1251 *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->nvs[VAR_1 + VAR_3] = VAR_2->mac_addr[VAR_0 - VAR_3 - 1];

 return 0;
}
