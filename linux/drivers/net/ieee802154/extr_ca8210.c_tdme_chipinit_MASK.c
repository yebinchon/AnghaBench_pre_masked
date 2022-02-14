
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct spi_device {int dev; } ;
struct preamble_cfg_sfr {int timeout_symbols; int acquisition_symbols; int search_symbols; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int,scalar_t__,scalar_t__,void*) ;

__attribute__((used)) static u8 FUNC_2(void *VAR_22)
{
 u8 VAR_23 = VAR_19;
 u8 VAR_24;
 struct spi_device *VAR_25 = VAR_22;
 struct preamble_cfg_sfr VAR_26 = {
  .timeout_symbols = 3,
  .acquisition_symbols = 3,
  .search_symbols = 1,
 };

 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_0),
  VAR_11, VAR_22);
 if (VAR_23)
  goto finish;
 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_1),
  VAR_12, VAR_22);
 if (VAR_23)
  goto finish;
 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_2),
  VAR_13, VAR_22);
 if (VAR_23)
  goto finish;
 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_3),
  VAR_14, VAR_22);
 if (VAR_23)
  goto finish;
 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_4),
  VAR_15, VAR_22);
 if (VAR_23)
  goto finish;
 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_5),
  VAR_16, VAR_22);
 if (VAR_23)
  goto finish;
 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_6),
  VAR_17, VAR_22);
 if (VAR_23)
  goto finish;
 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_7),
  VAR_18, VAR_22);
 if (VAR_23)
  goto finish;

 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_9),
  *((u8 *)&VAR_26), VAR_22);
 if (VAR_23)
  goto finish;

 VAR_23 = FUNC_1(
  1, (VAR_24 = VAR_10),
  VAR_21, VAR_22);
 if (VAR_23)
  goto finish;

 VAR_23 = FUNC_1(
  0, (VAR_24 = VAR_8),
  VAR_20, VAR_22);
 if (VAR_23)
  goto finish;

finish:
 if (VAR_23 != VAR_19) {
  FUNC_0(
   &VAR_25->dev,
   "failed to set sfr at %#03x, status = %#03x\n",
   VAR_24,
   VAR_23
  );
 }
 return VAR_23;
}
