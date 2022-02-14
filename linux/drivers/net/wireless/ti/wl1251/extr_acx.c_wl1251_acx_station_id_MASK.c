
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int * mac_addr; } ;
struct acx_dot11_station_id {int * mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx_dot11_station_id*) ;
 struct acx_dot11_station_id* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_dot11_station_id*,int) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct wl1251 *VAR_5)
{
 struct acx_dot11_station_id *VAR_6;
 int VAR_7, VAR_8;

 FUNC_3(VAR_0, "acx dot11_station_id");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return -VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_6->mac[VAR_8] = VAR_5->mac_addr[VAR_3 - 1 - VAR_8];

 VAR_7 = FUNC_2(VAR_5, VAR_1, VAR_6, sizeof(*VAR_6));

 FUNC_0(VAR_6);
 return VAR_7;
}
