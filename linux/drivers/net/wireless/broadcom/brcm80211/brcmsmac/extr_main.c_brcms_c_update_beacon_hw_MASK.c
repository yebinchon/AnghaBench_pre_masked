
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct brcms_hardware {struct bcma_device* d11core; } ;
struct brcms_c_info {int beacon_template_virgin; int defmacintmask; struct brcms_hardware* hw; } ;
struct bcma_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bcma_device*,int ) ;
 int FUNC_2 (struct bcma_device*,int ,int) ;
 int FUNC_3 (struct bcma_device*,int ,int ) ;
 int FUNC_4 (struct brcms_c_info*,struct sk_buff*,int ,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct brcms_c_info *VAR_5,
         struct sk_buff *VAR_6, u16 VAR_7,
         u16 VAR_8)
{
 struct brcms_hardware *VAR_9 = VAR_5->hw;
 struct bcma_device *VAR_10 = VAR_9->d11core;


 u32 VAR_11 = VAR_0 | VAR_1;




 if ((FUNC_1(VAR_10, FUNC_0(VAR_3)) & VAR_11) == VAR_11)

  FUNC_3(VAR_10, FUNC_0(VAR_4), VAR_2);

 if (VAR_5->beacon_template_virgin) {
  VAR_5->beacon_template_virgin = 0;
  FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, 1,
         1);

  FUNC_2(VAR_10, FUNC_0(VAR_3), VAR_0);
  return;
 }




 if ((FUNC_1(VAR_10, FUNC_0(VAR_3)) & VAR_11) == VAR_11) {
  VAR_5->defmacintmask |= VAR_2;
  return;
 }

 if (!(FUNC_1(VAR_10, FUNC_0(VAR_3)) & VAR_0)) {
  FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, 1,
         0);

  FUNC_2(VAR_10, FUNC_0(VAR_3), VAR_0);
  return;
 }
 if (!(FUNC_1(VAR_10, FUNC_0(VAR_3)) & VAR_1)) {
  FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
         0, 1);

  FUNC_2(VAR_10, FUNC_0(VAR_3), VAR_1);
  return;
 }
 return;
}
