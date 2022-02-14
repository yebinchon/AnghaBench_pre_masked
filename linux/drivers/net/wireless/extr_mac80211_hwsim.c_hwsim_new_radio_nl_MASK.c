
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct hwsim_new_radio_params {int reg_strict; int p2p_device; int channels; int destroy_on_close; int no_vif; int use_chanctx; int iftypes; size_t n_ciphers; char const* hwname; void* ciphers; void* perm_addr; int regd; void* reg_alpha2; int member_0; } ;
struct genl_info {int* attrs; int extack; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct genl_info*,char*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,char*) ;
 size_t FUNC_5 (size_t,size_t) ;
 int VAR_18 ;
 int * VAR_19 ;
 int FUNC_6 (void*,size_t) ;
 int * VAR_20 ;
 int FUNC_7 (void*) ;
 char* FUNC_8 (int ,char*,size_t,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct genl_info*,struct hwsim_new_radio_params*) ;
 void* FUNC_11 (int) ;
 void* FUNC_12 (int) ;
 size_t FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_21, struct genl_info *VAR_22)
{
 struct hwsim_new_radio_params VAR_23 = { 0 };
 const char *VAR_24 = ((void*)0);
 int VAR_25;

 VAR_23.reg_strict = VAR_22->attrs[VAR_13];
 VAR_23.p2p_device = VAR_22->attrs[VAR_14];
 VAR_23.channels = VAR_18;
 VAR_23.destroy_on_close =
  VAR_22->attrs[VAR_6];

 if (VAR_22->attrs[VAR_4])
  VAR_23.channels = FUNC_12(VAR_22->attrs[VAR_4]);

 if (VAR_23.channels < 1) {
  FUNC_2(VAR_22, "must have at least one channel");
  return -VAR_1;
 }

 if (VAR_23.channels > VAR_0) {
  FUNC_2(VAR_22, "too many channels specified");
  return -VAR_1;
 }

 if (VAR_22->attrs[VAR_8])
  VAR_23.no_vif = 1;

 if (VAR_22->attrs[VAR_15])
  VAR_23.use_chanctx = 1;
 else
  VAR_23.use_chanctx = (VAR_23.channels > 1);

 if (VAR_22->attrs[VAR_12])
  VAR_23.reg_alpha2 =
   FUNC_11(VAR_22->attrs[VAR_12]);

 if (VAR_22->attrs[VAR_11]) {
  u32 VAR_26 = FUNC_12(VAR_22->attrs[VAR_11]);

  if (VAR_26 >= FUNC_0(VAR_20))
   return -VAR_1;

  VAR_26 = FUNC_5(VAR_26,
      FUNC_0(VAR_20));
  VAR_23.regd = VAR_20[VAR_26];
 }

 if (VAR_22->attrs[VAR_9]) {
  if (!FUNC_7(
    FUNC_11(VAR_22->attrs[VAR_9]))) {
   FUNC_2(VAR_22,"MAC is no valid source addr");
   FUNC_3(VAR_22->extack,
     VAR_22->attrs[VAR_9]);
   return -VAR_1;
  }

  VAR_23.perm_addr = FUNC_11(VAR_22->attrs[VAR_9]);
 }

 if (VAR_22->attrs[VAR_7]) {
  VAR_23.iftypes =
   FUNC_12(VAR_22->attrs[VAR_7]);

  if (VAR_23.iftypes & ~VAR_16) {
   FUNC_4(VAR_22->extack,
         VAR_22->attrs[VAR_7],
         "cannot support more iftypes than kernel");
   return -VAR_1;
  }
 } else {
  VAR_23.iftypes = VAR_16;
 }


 if (VAR_23.p2p_device ||
     VAR_23.iftypes & FUNC_1(VAR_17)) {
  VAR_23.iftypes |= FUNC_1(VAR_17);
  VAR_23.p2p_device = 1;
 }

 if (VAR_22->attrs[VAR_5]) {
  u32 VAR_27 = FUNC_13(VAR_22->attrs[VAR_5]);

  VAR_23.ciphers =
   FUNC_11(VAR_22->attrs[VAR_5]);

  if (VAR_27 % sizeof(u32)) {
   FUNC_4(VAR_22->extack,
         VAR_22->attrs[VAR_5],
         "bad cipher list length");
   return -VAR_1;
  }

  VAR_23.n_ciphers = VAR_27 / sizeof(u32);

  if (VAR_23.n_ciphers > FUNC_0(VAR_19)) {
   FUNC_4(VAR_22->extack,
         VAR_22->attrs[VAR_5],
         "too many ciphers specified");
   return -VAR_1;
  }

  if (!FUNC_6(VAR_23.ciphers, VAR_23.n_ciphers)) {
   FUNC_4(VAR_22->extack,
         VAR_22->attrs[VAR_5],
         "unsupported ciphers specified");
   return -VAR_1;
  }
 }

 if (VAR_22->attrs[VAR_10]) {
  VAR_24 = FUNC_8(VAR_3, "%.*s",
       FUNC_13(VAR_22->attrs[VAR_10]),
       (char *)FUNC_11(VAR_22->attrs[VAR_10]));
  if (!VAR_24)
   return -VAR_2;
  VAR_23.hwname = VAR_24;
 }

 VAR_25 = FUNC_10(VAR_22, &VAR_23);
 FUNC_9(VAR_24);
 return VAR_25;
}
