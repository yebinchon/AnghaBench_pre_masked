
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u16 ;
struct au0828_rc {int dummy; } ;


 int FUNC_0 (struct au0828_rc*,int ,int,char*,int) ;
 int FUNC_1 (struct au0828_rc*,int ,char) ;

__attribute__((used)) static int FUNC_2(struct au0828_rc *VAR_0, u16 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 char VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_0, VAR_1, -1, &VAR_5, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 = VAR_5;
 VAR_5 = (VAR_5 & ~VAR_2) | (VAR_3 & VAR_2);


 if (VAR_5 == VAR_6)
  return 0;

 return FUNC_1(VAR_0, VAR_1, VAR_5);
}
