
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u16 ;
struct vt_notifier_param {char c; struct vc_data* vc; } ;
struct vc_data {int vc_mode; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct vc_data*,int ) ;
 int FUNC_1 (struct vc_data*) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (struct vc_data*,char*,int) ;
 int FUNC_4 (struct vc_data*) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 struct vt_notifier_param *VAR_6 = VAR_5;
 struct vc_data *VAR_7 = VAR_6->vc;

 switch (VAR_4) {
 case 131:
  if (VAR_7->vc_mode == VAR_1)
   FUNC_0(VAR_7, VAR_0);
  break;
 case 130:
  FUNC_4(VAR_7);
  break;
 case 128:
  if (VAR_6->c == '\b') {
   FUNC_1(VAR_7);
  } else {
   u16 VAR_8 = VAR_6->c;

   FUNC_3(VAR_7, &VAR_8, 1);
  }
  break;
 case 129:
  FUNC_2(VAR_7);
  break;
 }
 return VAR_2;
}
