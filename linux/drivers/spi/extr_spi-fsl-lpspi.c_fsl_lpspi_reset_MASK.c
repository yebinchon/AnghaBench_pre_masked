
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_lpspi_data {scalar_t__ base; int usedma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fsl_lpspi_data*,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fsl_lpspi_data *VAR_4)
{
 u32 VAR_5;

 if (!VAR_4->usedma) {

  FUNC_0(VAR_4, 0);
 }


 VAR_5 = 0x3F << 8;
 FUNC_1(VAR_5, VAR_4->base + VAR_3);


 VAR_5 = VAR_0 | VAR_1;
 FUNC_1(VAR_5, VAR_4->base + VAR_2);

 return 0;
}
