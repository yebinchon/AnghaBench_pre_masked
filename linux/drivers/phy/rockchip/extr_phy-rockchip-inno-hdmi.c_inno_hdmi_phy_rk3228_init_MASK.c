
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inno_hdmi_phy {int chip_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inno_hdmi_phy*,int,int ,int ) ;
 int FUNC_1 (struct inno_hdmi_phy*,int,int) ;

__attribute__((used)) static int FUNC_2(struct inno_hdmi_phy *VAR_5)
{




 FUNC_1(VAR_5, 0x01, VAR_3 |
     VAR_2 |
     VAR_1);
 FUNC_0(VAR_5, 0x02, VAR_0,
    VAR_0);


 FUNC_0(VAR_5, 0xaa, VAR_4,
    VAR_4);

 VAR_5->chip_version = 1;

 return 0;
}
