
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {int dummy; } ;
struct img_ir_priv_raw {int last_status; struct rc_dev* rdev; } ;
struct img_ir_priv {struct img_ir_priv_raw raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct img_ir_priv*,int ) ;
 int FUNC_1 (struct rc_dev*) ;
 int FUNC_2 (struct rc_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct img_ir_priv *VAR_3, u32 VAR_4)
{
 struct img_ir_priv_raw *VAR_5 = &VAR_3->raw;
 struct rc_dev *VAR_6 = VAR_3->raw.rdev;
 int VAR_7;
 u32 VAR_8;


 VAR_7 = ((VAR_4 & VAR_0) == VAR_0);





 VAR_8 = FUNC_0(VAR_3, VAR_2) & VAR_1;
 if (VAR_7 && VAR_8 == VAR_5->last_status)
  return;
 VAR_5->last_status = VAR_8;


 if (VAR_8)
  FUNC_2(VAR_6, 0);
 else
  FUNC_2(VAR_6, 1);
 FUNC_1(VAR_6);
}
