
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef enum cros_ec_lpc_mec_io_type { ____Placeholder_cros_ec_lpc_mec_io_type } cros_ec_lpc_mec_io_type ;
typedef enum cros_ec_lpc_mec_emi_access_mode { ____Placeholder_cros_ec_lpc_mec_emi_access_mode } cros_ec_lpc_mec_emi_access_mode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int ) ;

u8 FUNC_8(enum cros_ec_lpc_mec_io_type VAR_7,
       unsigned int VAR_8, unsigned int VAR_9,
       u8 *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12;
 u8 VAR_13 = 0;
 enum cros_ec_lpc_mec_emi_access_mode VAR_14, VAR_15;


 FUNC_2(VAR_5 == 0 || VAR_6 == 0);
 if (VAR_5 == 0 || VAR_6 == 0)
  return 0;





 if (VAR_8 & 0x3 || VAR_9 < 4)
  VAR_14 = VAR_0;
 else
  VAR_14 = VAR_1;

 FUNC_5(&VAR_4);


 FUNC_3(VAR_8, VAR_14);


 VAR_12 = FUNC_0(VAR_5) + (VAR_8 & 0x3);
 while (VAR_11 < VAR_9) {
  while (VAR_12 <= FUNC_1(VAR_5)) {
   if (VAR_7 == VAR_2)
    VAR_10[VAR_11] = FUNC_4(VAR_12++);
   else
    FUNC_7(VAR_10[VAR_11], VAR_12++);

   VAR_13 += VAR_10[VAR_11++];
   VAR_8++;


   if (VAR_11 == VAR_9)
    goto done;
  }





  if (VAR_9 - VAR_11 < 4 && VAR_7 == VAR_3)
   VAR_15 = VAR_0;
  else
   VAR_15 = VAR_1;

  if (VAR_15 != VAR_14 ||
      VAR_14 != VAR_1) {
   VAR_14 = VAR_15;
   FUNC_3(VAR_8, VAR_14);
  }


  VAR_12 = FUNC_0(VAR_5);
 }

done:
 FUNC_6(&VAR_4);

 return VAR_13;
}
