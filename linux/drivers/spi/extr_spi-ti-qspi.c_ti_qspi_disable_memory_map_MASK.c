
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_qspi {int mmap_enabled; int ctrl_reg; scalar_t__ ctrl_base; } ;
struct spi_device {int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 struct ti_qspi* FUNC_1 (int ) ;
 int FUNC_2 (struct ti_qspi*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_2)
{
 struct ti_qspi *VAR_3 = FUNC_1(VAR_2->master);

 FUNC_2(VAR_3, 0, VAR_1);
 if (VAR_3->ctrl_base)
  FUNC_0(VAR_3->ctrl_base, VAR_3->ctrl_reg,
       VAR_0, 0);
 VAR_3->mmap_enabled = 0;
}
