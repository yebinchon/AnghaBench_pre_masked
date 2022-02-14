
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcon_priv {int mono; int disp_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dcon_priv*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dcon_priv *VAR_4, bool VAR_5)
{
 if (VAR_4->mono == VAR_5)
  return 0;

 VAR_4->mono = VAR_5;

 if (VAR_5) {
  VAR_4->disp_mode &= ~(VAR_2 | VAR_1);
  VAR_4->disp_mode |= VAR_3;
 } else {
  VAR_4->disp_mode &= ~(VAR_3);
  VAR_4->disp_mode |= VAR_2 | VAR_1;
 }

 FUNC_0(VAR_4, VAR_0, VAR_4->disp_mode);
 return 0;
}
