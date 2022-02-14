
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifx_spi_device {int flags; int io_work_tasklet; int spi_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ifx_spi_device*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ifx_spi_device *VAR_4)
{
 if (FUNC_5(VAR_3, &VAR_4->flags)) {
  FUNC_1(&VAR_4->spi_timer);
  FUNC_0(VAR_3, &VAR_4->flags);
 }

 FUNC_2(VAR_4, VAR_0);

 if (!FUNC_5(VAR_1, &VAR_4->flags))
  FUNC_4(&VAR_4->io_work_tasklet);
 else
  FUNC_3(VAR_2, &VAR_4->flags);
}
