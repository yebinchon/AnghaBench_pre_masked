
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_mode; } ;
struct notifier_block {int dummy; } ;
struct keyboard_notifier_param {int value; int shift; int down; struct vc_data* vc; } ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;





 unsigned char FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vc_data*,unsigned char,int) ;
 int FUNC_3 (struct vc_data*,unsigned char,int) ;
 int FUNC_4 (struct vc_data*,unsigned char,int) ;
 int FUNC_5 (struct vc_data*,unsigned char,int) ;
 int VAR_3 ;
 int FUNC_6 (struct vc_data*,unsigned char,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct vc_data*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct notifier_block *VAR_4,
      unsigned long VAR_5, void *VAR_6)
{
 struct keyboard_notifier_param *VAR_7 = VAR_6;
 struct vc_data *VAR_8 = VAR_7->vc;
 int VAR_9 = !VAR_7->down;
 int VAR_10 = VAR_1;
 static int VAR_11;

 VAR_3 = 1;

 if (VAR_8->vc_mode == VAR_0)
  goto out;
 if (FUNC_7())
  goto out;

 switch (VAR_5) {
 case 137:

  VAR_11 = VAR_7->value;
  break;
 case 134:

  break;
 case 133:

  break;
 case 136:
  if (FUNC_8(VAR_8, VAR_7->shift, VAR_11, VAR_7->value, VAR_9))
   VAR_10 = VAR_2;
  else if (FUNC_0(VAR_7->value) == 132)
   VAR_10 = FUNC_6(VAR_8, FUNC_1(VAR_7->value), VAR_9);
  break;
 case 135:{
   unsigned char VAR_12 = FUNC_0(VAR_7->value) - 0xf0;
   unsigned char VAR_13 = FUNC_1(VAR_7->value);

   switch (VAR_12) {
   case 129:
    FUNC_4(VAR_8, VAR_13, VAR_9);
    break;
   case 131:
   case 130:
    FUNC_3(VAR_8, VAR_13, VAR_9);
    break;
   case 132:
    FUNC_2(VAR_8, VAR_13, VAR_9);
    break;
   case 128:
    FUNC_5(VAR_8, VAR_13, VAR_9);
    break;
   }
   break;
  }
 }
out:
 VAR_3 = 0;
 return VAR_10;
}
