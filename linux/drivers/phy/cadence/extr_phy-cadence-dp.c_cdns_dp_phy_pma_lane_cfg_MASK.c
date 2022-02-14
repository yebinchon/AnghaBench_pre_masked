
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_dp_phy {scalar_t__ sd_base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct cdns_dp_phy *VAR_9,
         unsigned int VAR_10)
{
 unsigned int VAR_11 = (VAR_10 & VAR_0) << 11;


 FUNC_0(0x00FB, VAR_9->sd_base + (VAR_4 | VAR_11));
 FUNC_0(0x04AA, VAR_9->sd_base + (VAR_5 | VAR_11));
 FUNC_0(0x04AA, VAR_9->sd_base + (VAR_6 | VAR_11));
 FUNC_0(0x0000, VAR_9->sd_base + (VAR_1 | VAR_11));
 FUNC_0(0x0000, VAR_9->sd_base + (VAR_2 | VAR_11));
 FUNC_0(0x0000, VAR_9->sd_base + (VAR_3 | VAR_11));

 FUNC_0(0x0001, VAR_9->sd_base + (VAR_8 | VAR_11));
 FUNC_0(0x0000, VAR_9->sd_base + (VAR_7 | VAR_11));
}
