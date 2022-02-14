
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sp5100_tco {int tco_reg_layout; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;


 int VAR_13 ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct sp5100_tco *VAR_14)
{
 u32 VAR_15;

 switch (VAR_14->tco_reg_layout) {
 case 129:


  FUNC_2(VAR_4,
       0xff, VAR_7);


  FUNC_2(VAR_5,
       ~VAR_6,
       VAR_3);
  break;
 case 128:


  FUNC_0(VAR_13,
          VAR_9,
          &VAR_15);

  VAR_15 |= VAR_8;

  FUNC_1(VAR_13,
           VAR_9,
           VAR_15);


  FUNC_2(VAR_10,
       ~VAR_11,
       VAR_12);
  break;
 case 130:

  FUNC_2(VAR_0,
       ~VAR_2,
       VAR_1);
  break;
 }
}
