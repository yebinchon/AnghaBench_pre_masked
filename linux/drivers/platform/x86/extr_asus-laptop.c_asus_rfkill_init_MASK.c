
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {scalar_t__ wled_type; scalar_t__ bled_type; int wimax; int handle; int wwan; int bluetooth; int wlan; int gps; scalar_t__ is_pega_lucid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_18 ;
 int FUNC_1 (struct asus_laptop*) ;
 int VAR_19 ;
 int FUNC_2 (struct asus_laptop*,int *,char*,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct asus_laptop *VAR_20)
{
 int VAR_21 = 0;

 if (VAR_20->is_pega_lucid)
  return -VAR_1;

 if (!FUNC_0(VAR_20->handle, VAR_4, ((void*)0)) &&
     !FUNC_0(VAR_20->handle, VAR_3, ((void*)0)) &&
     !FUNC_0(VAR_20->handle, VAR_5, ((void*)0)))
  VAR_21 = FUNC_2(VAR_20, &VAR_20->gps, "asus-gps",
        -1, VAR_10,
        &VAR_18);
 if (VAR_21)
  goto exit;


 if (!FUNC_0(VAR_20->handle, VAR_7, ((void*)0)) &&
     VAR_20->wled_type == VAR_14)
  VAR_21 = FUNC_2(VAR_20, &VAR_20->wlan, "asus-wlan",
        VAR_15, VAR_12,
        &VAR_19);
 if (VAR_21)
  goto exit;

 if (!FUNC_0(VAR_20->handle, VAR_2, ((void*)0)) &&
     VAR_20->bled_type == VAR_14)
  VAR_21 = FUNC_2(VAR_20, &VAR_20->bluetooth,
        "asus-bluetooth", VAR_0,
        VAR_9,
        &VAR_19);
 if (VAR_21)
  goto exit;

 if (!FUNC_0(VAR_20->handle, VAR_8, ((void*)0)))
  VAR_21 = FUNC_2(VAR_20, &VAR_20->wwan, "asus-wwan",
        VAR_17, VAR_13,
        &VAR_19);
 if (VAR_21)
  goto exit;

 if (!FUNC_0(VAR_20->handle, VAR_6, ((void*)0)))
  VAR_21 = FUNC_2(VAR_20, &VAR_20->wimax, "asus-wimax",
        VAR_16, VAR_11,
        &VAR_19);
 if (VAR_21)
  goto exit;

exit:
 if (VAR_21)
  FUNC_1(VAR_20);

 return VAR_21;
}
