
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct mmc_card {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mmc_card*,struct sdio_func*,char*,int ,int ,unsigned char const,unsigned char const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_2, struct sdio_func *VAR_3,
   const unsigned char *VAR_4, unsigned VAR_5)
{
 if (VAR_5 < 1)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3, "CISTPL_FUNCE",
        VAR_1,
        FUNC_0(VAR_1),
        VAR_4[0], VAR_4, VAR_5);
}
