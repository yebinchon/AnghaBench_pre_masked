
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wl1251 {int dummy; } ;
struct acx_low_rssi {int type; void* depth; void* weight; int threshold; } ;
typedef int s8 ;
typedef enum wl1251_acx_low_rssi_type { ____Placeholder_wl1251_acx_low_rssi_type } wl1251_acx_low_rssi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_low_rssi*) ;
 struct acx_low_rssi* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_low_rssi*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, s8 VAR_5, u8 VAR_6,
   u8 VAR_7, enum wl1251_acx_low_rssi_type VAR_8)
{
 struct acx_low_rssi *VAR_9;
 int VAR_10;

 FUNC_3(VAR_1, "acx low rssi");

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->threshold = VAR_5;
 VAR_9->weight = VAR_6;
 VAR_9->depth = VAR_7;
 VAR_9->type = VAR_8;

 VAR_10 = FUNC_2(VAR_4, VAR_0, VAR_9, sizeof(*VAR_9));
 if (VAR_10 < 0)
  FUNC_4("failed to set low rssi threshold: %d", VAR_10);

 FUNC_0(VAR_9);
 return VAR_10;
}
