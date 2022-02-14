
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct brcms_c_info {TYPE_2__* hw; TYPE_1__* pub; } ;
struct TYPE_5__ {int d11core; } ;
struct TYPE_4__ {int unit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct brcms_c_info*) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct brcms_c_info *VAR_3)
{
 u32 VAR_4, VAR_5;
 bool VAR_6;
 bool VAR_7;

 VAR_6 = FUNC_4(VAR_3);

 FUNC_5(VAR_3->hw->d11core, "wl%d: hps %d\n", VAR_3->pub->unit,
      VAR_6);

 VAR_4 = FUNC_1(VAR_3->hw->d11core, FUNC_0(VAR_2));
 VAR_5 = VAR_1;
 if (VAR_6)
  VAR_5 |= VAR_0;

 FUNC_2(VAR_3->hw, VAR_1 | VAR_0, VAR_5);

 VAR_7 = ((VAR_4 & VAR_1) || ((VAR_4 & VAR_0) == 0));

 if (!VAR_7)
  FUNC_3(VAR_3->hw);
}
