
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_qspi {int mmap_enabled; int ctrl_reg; scalar_t__ ctrl_base; } ;
struct spi_device {int chip_select; int master; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;
 struct ti_qspi* FUNC_2 (int ) ;
 int FUNC_3 (struct ti_qspi*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_3)
{
 struct ti_qspi *VAR_4 = FUNC_2(VAR_3->master);

 FUNC_3(VAR_4, VAR_1, VAR_2);
 if (VAR_4->ctrl_base) {
  FUNC_1(VAR_4->ctrl_base, VAR_4->ctrl_reg,
       VAR_0,
       FUNC_0(VAR_3->chip_select));
 }
 VAR_4->mmap_enabled = 1;
}
