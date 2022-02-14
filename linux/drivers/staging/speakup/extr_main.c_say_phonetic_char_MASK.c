
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u16 ;
struct vc_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct vc_data*,int *,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_6)
{
 u16 VAR_7;

 VAR_4 = VAR_3;
 VAR_7 = FUNC_1(VAR_6, (u_short *)VAR_5, &VAR_3);
 if (VAR_7 <= 0x7f && FUNC_2(VAR_7)) {
  VAR_7 &= 0x1f;
  FUNC_5("%s\n", VAR_2[--VAR_7]);
 } else {
  if (VAR_7 < 0x100 && FUNC_0(VAR_7, VAR_0))
   FUNC_5("%s ", FUNC_4(VAR_1));
  FUNC_3(VAR_7);
 }
}
