
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {int chip_id; int * fw; TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* reset ) (struct wl1251*) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wl1251*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct wl1251*) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (struct wl1251*) ;
 int FUNC_7 (struct wl1251*,int ) ;
 int FUNC_8 (struct wl1251*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct wl1251 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_5);
 VAR_6->if_ops->reset(VAR_6);



 FUNC_8(VAR_6,
        0x00000000,
        0x00000000,
        VAR_3,
        VAR_4);


 FUNC_5(VAR_6);




 VAR_6->chip_id = FUNC_7(VAR_6, VAR_0);



 switch (VAR_6->chip_id) {
 case 128:
  FUNC_2(VAR_1, "chip id 0x%x (1251 PG12)",
        VAR_6->chip_id);
  break;
 case 129:
  FUNC_2(VAR_1, "chip id 0x%x (1251 PG11)",
        VAR_6->chip_id);
  break;
 case 130:
 default:
  FUNC_3("unsupported chip id: 0x%x", VAR_6->chip_id);
  VAR_7 = -VAR_2;
  goto out;
 }

 if (VAR_6->fw == ((void*)0)) {
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 < 0)
   goto out;
 }

out:
 return VAR_7;
}
