
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dcon_priv {scalar_t__ bl_val; int disp_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dcon_priv*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct dcon_priv *VAR_3, u8 VAR_4)
{
 VAR_3->bl_val = VAR_4;
 FUNC_0(VAR_3, VAR_0, VAR_3->bl_val);


 if (VAR_3->bl_val == 0) {
  VAR_3->disp_mode &= ~VAR_2;
  FUNC_0(VAR_3, VAR_1, VAR_3->disp_mode);
 } else if (!(VAR_3->disp_mode & VAR_2)) {
  VAR_3->disp_mode |= VAR_2;
  FUNC_0(VAR_3, VAR_1, VAR_3->disp_mode);
 }
}
