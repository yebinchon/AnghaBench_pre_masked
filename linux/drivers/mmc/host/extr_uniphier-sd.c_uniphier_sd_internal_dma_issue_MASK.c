
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {scalar_t__ ctl; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct tmio_mmc_host*,int ) ;
 int FUNC_3 (struct tmio_mmc_host*,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_3)
{
 struct tmio_mmc_host *VAR_4 = (void *)VAR_3;
 unsigned long VAR_5;

 FUNC_0(&VAR_4->lock, VAR_5);
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(&VAR_4->lock, VAR_5);

 FUNC_3(VAR_4, 1);
 FUNC_4(VAR_2, VAR_4->ctl + VAR_1);
}
