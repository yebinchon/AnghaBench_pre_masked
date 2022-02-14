
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi {int traffic_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wmi*,int ,int ) ;

int FUNC_2(struct wmi *VAR_2, u8 VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, "wmi disconnect\n");

 VAR_2->traffic_class = 100;


 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);

 return VAR_4;
}
