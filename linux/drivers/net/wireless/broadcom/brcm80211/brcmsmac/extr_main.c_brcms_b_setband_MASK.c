
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct brcms_hardware {int d11core; int up; struct brcms_c_info* wlc; } ;
struct brcms_c_info {int wl; scalar_t__ macintstatus; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct brcms_c_info*,int ) ;
 int FUNC_6 (struct brcms_hardware*,int ) ;
 int FUNC_7 (struct brcms_hardware*) ;
 int FUNC_8 (struct brcms_c_info*,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(struct brcms_hardware *VAR_4, uint VAR_5,
       u16 VAR_6) {
 struct brcms_c_info *VAR_7 = VAR_4->wlc;
 u32 VAR_8;


 if (!FUNC_3(VAR_4->d11core)) {
  FUNC_2(VAR_4->d11core, 0);
  FUNC_7(VAR_4);
 }

 VAR_8 = FUNC_8(VAR_7, VAR_5);

 if (!VAR_4->up)
  return;

 FUNC_6(VAR_4, VAR_2);


 FUNC_5(VAR_7, VAR_6);






 if (VAR_7->macintstatus)
  VAR_7->macintstatus = VAR_1;


 FUNC_9(VAR_7->wl, VAR_8);


 FUNC_1((FUNC_4(VAR_4->d11core, FUNC_0(VAR_3)) &
   VAR_0) != 0);
}
