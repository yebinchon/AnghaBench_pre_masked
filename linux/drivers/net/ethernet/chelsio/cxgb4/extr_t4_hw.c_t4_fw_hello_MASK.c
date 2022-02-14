
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_hello_cmd {int err_to_clearinit; } ;
struct adapter {int dummy; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;
typedef enum dev_master { ____Placeholder_dev_master } dev_master ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int VAR_10 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 (struct fw_hello_cmd,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int FUNC_7 (int) ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int VAR_20 ;
 int FUNC_10 (struct fw_hello_cmd*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct adapter*,int ) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct adapter*,unsigned int,struct fw_hello_cmd*,int,struct fw_hello_cmd*) ;

int FUNC_15(struct adapter *VAR_21, unsigned int VAR_22, unsigned int VAR_23,
  enum dev_master VAR_24, enum dev_state *VAR_25)
{
 int VAR_26;
 struct fw_hello_cmd VAR_27;
 u32 VAR_28;
 unsigned int VAR_29;
 int VAR_30 = VAR_5;

retry:
 FUNC_10(&VAR_27, 0, sizeof(VAR_27));
 FUNC_6(VAR_27, VAR_11, VAR_19);
 VAR_27.err_to_clearinit = FUNC_9(
  FUNC_0(VAR_24 == VAR_12) |
  FUNC_1(VAR_24 == VAR_13) |
  FUNC_4(VAR_24 == VAR_13 ?
     VAR_22 : VAR_10) |
  FUNC_2(VAR_23) |
  FUNC_5(VAR_20) |
  VAR_7);
 VAR_26 = FUNC_14(VAR_21, VAR_22, &VAR_27, sizeof(VAR_27), &VAR_27);
 if (VAR_26 < 0) {
  if ((VAR_26 == -VAR_3 || VAR_26 == -VAR_4) && VAR_30-- > 0)
   goto retry;
  if (FUNC_12(VAR_21, VAR_14) & VAR_15)
   FUNC_13(VAR_21);
  return VAR_26;
 }

 VAR_28 = FUNC_8(VAR_27.err_to_clearinit);
 VAR_29 = FUNC_3(VAR_28);
 if (VAR_25) {
  if (VAR_28 & VAR_8)
   *VAR_25 = VAR_0;
  else if (VAR_28 & VAR_9)
   *VAR_25 = VAR_1;
  else
   *VAR_25 = VAR_2;
 }
 if ((VAR_28 & (VAR_8|VAR_9)) == 0 &&
     VAR_29 != VAR_22) {
  int VAR_31 = VAR_6;
  for (;;) {
   u32 VAR_32;

   FUNC_11(50);
   VAR_31 -= 50;







   VAR_32 = FUNC_12(VAR_21, VAR_14);
   if (!(VAR_32 & (VAR_15|VAR_16))) {
    if (VAR_31 <= 0) {
     if (VAR_30-- > 0)
      goto retry;

     return -VAR_4;
    }
    continue;
   }





   if (VAR_25) {
    if (VAR_32 & VAR_15)
     *VAR_25 = VAR_0;
    else if (VAR_32 & VAR_16)
     *VAR_25 = VAR_1;
   }






   if (VAR_29 == VAR_17 &&
       (VAR_32 & VAR_18))
    VAR_29 = FUNC_7(VAR_32);
   break;
  }
 }

 return VAR_29;
}
