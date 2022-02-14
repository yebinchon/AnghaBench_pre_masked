
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
struct brcms_c_rateset {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct brcms_c_rateset*,struct brcms_c_rateset const*,int,scalar_t__) ;
 int FUNC_2 (struct brcms_c_rateset const*,struct brcms_c_rateset*) ;
 int FUNC_3 (struct brcms_c_rateset*,struct brcms_c_rateset*,int,int ,int ,int) ;
 int FUNC_4 (struct brcms_c_rateset*,scalar_t__) ;
 struct brcms_c_rateset VAR_11 ;
 struct brcms_c_rateset VAR_12 ;
 struct brcms_c_rateset VAR_13 ;
 struct brcms_c_rateset VAR_14 ;
 struct brcms_c_rateset VAR_15 ;
 struct brcms_c_rateset VAR_16 ;
 struct brcms_c_rateset VAR_17 ;

void
FUNC_5(struct brcms_c_rateset *VAR_18,
   const struct brcms_c_rateset *VAR_19,
   uint VAR_20, int VAR_21, bool VAR_22,
   uint VAR_23, bool VAR_24, u8 VAR_25, u8 VAR_26)
{
 const struct brcms_c_rateset *VAR_27;
 struct brcms_c_rateset VAR_28;
 if ((FUNC_0(VAR_20, VAR_6)) ||
     (FUNC_0(VAR_20, VAR_9)) ||
     (FUNC_0(VAR_20, VAR_7)) ||
     (FUNC_0(VAR_20, VAR_10))) {
  if (VAR_21 == VAR_3)
   VAR_27 = (VAR_25 == VAR_0 ?
       &VAR_16 : &VAR_15);
  else
   VAR_27 = (VAR_25 == VAR_0 ?
       &VAR_12 :
       &VAR_11);
 } else if (FUNC_0(VAR_20, VAR_8)) {
  VAR_27 = (VAR_21 == VAR_3) ?
     &VAR_17 : &VAR_13;
 } else if (FUNC_0(VAR_20, VAR_4)) {
  VAR_27 = &VAR_17;
 } else if (FUNC_0(VAR_20, VAR_5)) {
  VAR_27 = &VAR_13;
 } else {

  VAR_27 = &VAR_14;
 }


 if (!VAR_19)
  VAR_19 = VAR_27;

 FUNC_2(VAR_27, &VAR_28);
 FUNC_4(&VAR_28, VAR_26);
 FUNC_3(&VAR_28, VAR_18, 0,
      VAR_22 ? VAR_1 : VAR_2,
      VAR_23, VAR_24);
 FUNC_1(VAR_18, VAR_19, 0,
        VAR_24 ? VAR_26 : 1);
}
