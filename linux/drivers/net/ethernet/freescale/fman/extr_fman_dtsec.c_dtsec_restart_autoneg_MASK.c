
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fman_mac {int tbiphy; int dtsec_drv_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct fman_mac *VAR_7)
{
 u16 VAR_8;

 if (!FUNC_0(VAR_7->dtsec_drv_param))
  return -VAR_5;

 VAR_8 = FUNC_1(VAR_7->tbiphy, VAR_6);

 VAR_8 &= ~(VAR_3 | VAR_4);
 VAR_8 |= (VAR_0 | VAR_1 |
        VAR_2 | VAR_4);

 FUNC_2(VAR_7->tbiphy, VAR_6, VAR_8);

 return 0;
}
