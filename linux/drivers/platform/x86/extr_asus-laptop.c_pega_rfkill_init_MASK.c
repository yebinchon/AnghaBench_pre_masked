
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int wwan; int bluetooth; int wlan; int is_pega_lucid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct asus_laptop*) ;
 int FUNC_1 (struct asus_laptop*,int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct asus_laptop *VAR_7)
{
 int VAR_8 = 0;

 if(!VAR_7->is_pega_lucid)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, &VAR_7->wlan, "pega-wlan",
    VAR_2, VAR_5);
 if(VAR_8)
  goto exit;

 VAR_8 = FUNC_1(VAR_7, &VAR_7->bluetooth, "pega-bt",
    VAR_1, VAR_4);
 if(VAR_8)
  goto exit;

 VAR_8 = FUNC_1(VAR_7, &VAR_7->wwan, "pega-wwan",
    VAR_3, VAR_6);

exit:
 if (VAR_8)
  FUNC_0(VAR_7);

 return VAR_8;
}
