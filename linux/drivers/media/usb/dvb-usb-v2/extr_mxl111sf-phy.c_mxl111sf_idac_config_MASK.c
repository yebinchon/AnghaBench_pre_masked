
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mxl111sf_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mxl111sf_state*,int ,scalar_t__) ;
 int FUNC_1 (int) ;

int FUNC_2(struct mxl111sf_state *VAR_6,
    u8 VAR_7, u8 VAR_8,
    u8 VAR_9, u8 VAR_10)
{
 int VAR_11;
 u8 VAR_12;

 VAR_12 = VAR_9;

 if (VAR_7 == VAR_2) {

  VAR_12 |= VAR_3;

  if (VAR_8 == VAR_1)

   VAR_12 |= VAR_0;
  else

   VAR_12 &= ~VAR_0;
 } else {

  VAR_12 &= ~VAR_3;


  VAR_11 = FUNC_0(VAR_6, VAR_4,
      (VAR_10 & 0x3F));
  FUNC_1(VAR_11);
 }

 VAR_11 = FUNC_0(VAR_6, VAR_5, VAR_12);
 FUNC_1(VAR_11);

 return VAR_11;
}
