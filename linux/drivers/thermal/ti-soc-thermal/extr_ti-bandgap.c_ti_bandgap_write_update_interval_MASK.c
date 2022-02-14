
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_bandgap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ti_bandgap*,int ) ;
 int FUNC_1 (struct ti_bandgap*,int) ;
 int FUNC_2 (struct ti_bandgap*,int,int ) ;
 int FUNC_3 (struct ti_bandgap*,int,int ) ;

int FUNC_4(struct ti_bandgap *VAR_3,
         int VAR_4, u32 VAR_5)
{
 int VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6)
  goto exit;

 if (!FUNC_0(VAR_3, VAR_0) &&
     !FUNC_0(VAR_3, VAR_1)) {
  VAR_6 = -VAR_2;
  goto exit;
 }

 if (FUNC_0(VAR_3, VAR_0)) {
  FUNC_2(VAR_3, VAR_4, VAR_5);
  goto exit;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
exit:
 return VAR_6;
}
