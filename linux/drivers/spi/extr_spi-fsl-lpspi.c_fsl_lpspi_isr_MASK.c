
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_lpspi_data {int xfer_done; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fsl_lpspi_data*,int) ;
 int FUNC_2 (struct fsl_lpspi_data*) ;
 int FUNC_3 (struct fsl_lpspi_data*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_11, void *VAR_12)
{
 u32 VAR_13, VAR_14;
 struct fsl_lpspi_data *VAR_15 = VAR_12;

 VAR_14 = FUNC_4(VAR_15->base + VAR_4);
 FUNC_1(VAR_15, 0);
 VAR_13 = FUNC_4(VAR_15->base + VAR_5);

 FUNC_2(VAR_15);

 if ((VAR_13 & VAR_10) && (VAR_14 & VAR_2)) {
  FUNC_3(VAR_15);
  return VAR_6;
 }

 if (VAR_13 & VAR_9 ||
     FUNC_4(VAR_15->base + VAR_3) & VAR_0) {
  FUNC_5(VAR_8, VAR_15->base + VAR_5);
  FUNC_1(VAR_15, VAR_1);
  return VAR_6;
 }

 if (VAR_13 & VAR_8 && (VAR_14 & VAR_1)) {
  FUNC_5(VAR_8, VAR_15->base + VAR_5);
   FUNC_0(&VAR_15->xfer_done);
  return VAR_6;
 }

 return VAR_7;
}
