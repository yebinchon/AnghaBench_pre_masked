
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int unique; int used; } ;
struct bcm_sf2_priv {TYPE_1__ cfp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bcm_sf2_priv*,int) ;
 int FUNC_2 (struct bcm_sf2_priv*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct bcm_sf2_priv*,int ) ;
 int FUNC_5 (struct bcm_sf2_priv*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct bcm_sf2_priv *VAR_5, int VAR_6,
        u32 VAR_7, u32 *VAR_8)
{
 int VAR_9;
 u32 VAR_10;


 FUNC_2(VAR_5, VAR_7);

 VAR_9 = FUNC_1(VAR_5, VAR_1 | VAR_4);
 if (VAR_9)
  return VAR_9;





 VAR_10 = FUNC_4(VAR_5, FUNC_0(6));
 if (VAR_8)
  *VAR_8 = (VAR_10 >> 24) & VAR_0;


 VAR_10 = FUNC_4(VAR_5, FUNC_0(0));
 VAR_10 &= ~VAR_3;
 FUNC_5(VAR_5, VAR_10, FUNC_0(0));


 VAR_9 = FUNC_1(VAR_5, VAR_2 | VAR_4);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_7, VAR_5->cfp.used);
 FUNC_3(VAR_7, VAR_5->cfp.unique);

 return 0;
}
