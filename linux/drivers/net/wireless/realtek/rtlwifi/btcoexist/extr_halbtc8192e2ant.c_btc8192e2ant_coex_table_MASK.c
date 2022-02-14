
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {char* cur_val0x6c0; void* cur_val0x6c4; char* cur_val0x6c8; void* cur_val0x6cc; char* pre_val0x6c0; void* pre_val0x6c4; char* pre_val0x6c8; void* pre_val0x6cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*,void*,...) ;
 int FUNC_1 (struct btc_coexist*,void*,void*,void*,void*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
        bool VAR_4, u32 VAR_5, u32 VAR_6,
        u32 VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = VAR_3->adapter;

 FUNC_0(VAR_9, VAR_0, VAR_1,
   "[BTCoex], %s write Coex Table 0x6c0 = 0x%x, ",
   (VAR_4 ? "force to" : ""), VAR_5);
 FUNC_0(VAR_9, VAR_0, VAR_1,
   "0x6c4 = 0x%x, 0x6c8 = 0x%x, 0x6cc = 0x%x\n",
   VAR_6, VAR_7, VAR_8);
 VAR_2->cur_val0x6c0 = VAR_5;
 VAR_2->cur_val0x6c4 = VAR_6;
 VAR_2->cur_val0x6c8 = VAR_7;
 VAR_2->cur_val0x6cc = VAR_8;

 if (!VAR_4) {
  FUNC_0(VAR_9, VAR_0, VAR_1,
    "[BTCoex], preVal0x6c0 = 0x%x, preVal0x6c4 = 0x%x, ",
    VAR_2->pre_val0x6c0, VAR_2->pre_val0x6c4);
  FUNC_0(VAR_9, VAR_0, VAR_1,
    "preVal0x6c8 = 0x%x, preVal0x6cc = 0x%x !!\n",
    VAR_2->pre_val0x6c8, VAR_2->pre_val0x6cc);
  FUNC_0(VAR_9, VAR_0, VAR_1,
    "[BTCoex], curVal0x6c0 = 0x%x, curVal0x6c4 = 0x%x\n",
    VAR_2->cur_val0x6c0, VAR_2->cur_val0x6c4);
  FUNC_0(VAR_9, VAR_0, VAR_1,
    "curVal0x6c8 = 0x%x, curVal0x6cc = 0x%x !!\n",
    VAR_2->cur_val0x6c8, VAR_2->cur_val0x6cc);

  if ((VAR_2->pre_val0x6c0 == VAR_2->cur_val0x6c0) &&
      (VAR_2->pre_val0x6c4 == VAR_2->cur_val0x6c4) &&
      (VAR_2->pre_val0x6c8 == VAR_2->cur_val0x6c8) &&
      (VAR_2->pre_val0x6cc == VAR_2->cur_val0x6cc))
   return;
 }
 FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7,
        VAR_8);

 VAR_2->pre_val0x6c0 = VAR_2->cur_val0x6c0;
 VAR_2->pre_val0x6c4 = VAR_2->cur_val0x6c4;
 VAR_2->pre_val0x6c8 = VAR_2->cur_val0x6c8;
 VAR_2->pre_val0x6cc = VAR_2->cur_val0x6cc;
}
