
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc8xxx_spi {int (* get_tx ) (struct mpc8xxx_spi*) ;int done; scalar_t__ count; int (* get_rx ) (int,struct mpc8xxx_spi*) ;scalar_t__ rx; struct fsl_spi_reg* reg_base; } ;
struct fsl_spi_reg {int transmit; int event; int receive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,struct mpc8xxx_spi*) ;
 int FUNC_5 (struct mpc8xxx_spi*) ;

__attribute__((used)) static void FUNC_6(struct mpc8xxx_spi *VAR_2, u32 VAR_3)
{
 struct fsl_spi_reg *VAR_4 = VAR_2->reg_base;


 if (VAR_3 & VAR_0) {
  u32 VAR_5 = FUNC_2(&VAR_4->receive);

  if (VAR_2->rx)
   VAR_2->get_rx(VAR_5, VAR_2);
 }

 if ((VAR_3 & VAR_1) == 0)

  while (((VAR_3 =
   FUNC_2(&VAR_4->event)) &
      VAR_1) == 0)
   FUNC_1();


 FUNC_3(&VAR_4->event, VAR_3);

 VAR_2->count -= 1;
 if (VAR_2->count) {
  u32 VAR_6 = VAR_2->get_tx(VAR_2);

  FUNC_3(&VAR_4->transmit, VAR_6);
 } else {
  FUNC_0(&VAR_2->done);
 }
}
