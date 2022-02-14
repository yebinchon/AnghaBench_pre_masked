
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int (* multi_io_quirk ) (struct mmc_card*,unsigned int,int) ;} ;
struct mmc_card {int host; } ;


 struct tmio_mmc_host* FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_card*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_0,
          unsigned int VAR_1, int VAR_2)
{
 struct tmio_mmc_host *VAR_3 = FUNC_0(VAR_0->host);

 if (VAR_3->multi_io_quirk)
  return VAR_3->multi_io_quirk(VAR_0, VAR_1, VAR_2);

 return VAR_2;
}
