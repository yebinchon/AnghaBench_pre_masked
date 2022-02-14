
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_qspi {int bspi_maj_rev; int bspi_min_rev; int bspi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bcm_qspi*) ;
 int FUNC_1 (struct bcm_qspi*) ;
 int FUNC_2 (struct bcm_qspi*,int ,int ) ;
 int FUNC_3 (struct bcm_qspi*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct bcm_qspi *VAR_6)
{
 u32 VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_6, VAR_0, VAR_5);
 VAR_6->bspi_maj_rev = (VAR_7 >> 8) & 0xff;
 VAR_6->bspi_min_rev = VAR_7 & 0xff;
 if (!(FUNC_0(VAR_6))) {

  FUNC_3(VAR_6, VAR_0, VAR_4, 0);
  FUNC_3(VAR_6, VAR_0, VAR_3, 1);
 }
 VAR_6->bspi_enabled = 1;
 FUNC_1(VAR_6);
 FUNC_3(VAR_6, VAR_0, VAR_1, 0);
 FUNC_3(VAR_6, VAR_0, VAR_2, 0);
}
