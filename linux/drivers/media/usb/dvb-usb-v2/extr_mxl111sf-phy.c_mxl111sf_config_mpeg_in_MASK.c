
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int *) ;
 int FUNC_1 (struct mxl111sf_state*,int ,int ) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct mxl111sf_state *VAR_14,
       unsigned int VAR_15,
       unsigned int VAR_16,
       unsigned int VAR_17,
       unsigned int VAR_18,
       unsigned int VAR_19)
{
 int VAR_20;
 u8 VAR_21, VAR_22;

 FUNC_2("(%u,%u,%u,%u,%u)", VAR_15, VAR_16,
    VAR_17, VAR_18, VAR_19);


 VAR_20 = FUNC_1(VAR_14, VAR_13, VAR_3);
 FUNC_3(VAR_20);


 FUNC_0(VAR_14, VAR_8, &VAR_21);

 if (VAR_17 == VAR_2)
  VAR_21 &= ~VAR_4;
 else
  VAR_21 |= VAR_4;

 VAR_20 = FUNC_1(VAR_14, VAR_8, VAR_21);
 FUNC_3(VAR_20);



 VAR_20 = FUNC_0(VAR_14, VAR_9, &VAR_21);
 FUNC_3(VAR_20);


 if (VAR_15 == VAR_1) {

  VAR_21 &= ~VAR_11;


  VAR_21 |= VAR_10;
 } else {

  VAR_21 &= ~VAR_10;


  VAR_21 |= VAR_11;



  VAR_20 = FUNC_0(VAR_14,
     VAR_7,
     &VAR_22);
  FUNC_3(VAR_20);

  if (VAR_16 == VAR_0)
   VAR_22 |= VAR_12;
  else
   VAR_22 &= ~VAR_12;

  VAR_20 = FUNC_1(VAR_14,
      VAR_7,
      VAR_22);
  FUNC_3(VAR_20);
 }


 if (VAR_19 == VAR_2)
  VAR_21 &= ~VAR_5;
 else
  VAR_21 |= VAR_5;


 if (VAR_18 == 0)
  VAR_21 &= ~VAR_6;
 else
  VAR_21 |= VAR_6;

 VAR_20 = FUNC_1(VAR_14, VAR_9, VAR_21);
 FUNC_3(VAR_20);

 return VAR_20;
}
