
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_qspi {scalar_t__ bspi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_qspi*) ;
 int FUNC_1 (struct bcm_qspi*,int ,int ) ;
 int FUNC_2 (struct bcm_qspi*,int ,int ,int) ;
 int FUNC_3 (struct bcm_qspi*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct bcm_qspi *VAR_2)
{
 if (!FUNC_3(VAR_2))
  return;

 VAR_2->bspi_enabled = 0;
 if ((FUNC_1(VAR_2, VAR_0, VAR_1) & 1))
  return;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_0, VAR_1, 1);
 FUNC_4(1);
}
