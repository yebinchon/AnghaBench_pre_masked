
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mode; } ;
struct fsl_lpspi_data {scalar_t__ base; scalar_t__ usedma; TYPE_1__ config; int is_slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct fsl_lpspi_data*) ;
 int FUNC_1 (struct fsl_lpspi_data*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fsl_lpspi_data *VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 if (!VAR_12->is_slave) {
  VAR_14 = FUNC_0(VAR_12);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_1(VAR_12);

 if (!VAR_12->is_slave)
  VAR_13 = VAR_0;
 else
  VAR_13 = VAR_2;
 if (VAR_12->config.mode & VAR_11)
  VAR_13 |= VAR_1;
 FUNC_3(VAR_13, VAR_12->base + VAR_8);

 VAR_13 = FUNC_2(VAR_12->base + VAR_9);
 VAR_13 |= VAR_4 | VAR_5 | VAR_3;
 FUNC_3(VAR_13, VAR_12->base + VAR_9);

 VAR_13 = 0;
 if (VAR_12->usedma)
  VAR_13 = VAR_7 | VAR_6;
 FUNC_3(VAR_13, VAR_12->base + VAR_10);

 return 0;
}
