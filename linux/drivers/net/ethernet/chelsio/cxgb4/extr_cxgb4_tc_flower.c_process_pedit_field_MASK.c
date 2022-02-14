
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ch_filter_specification {int newdmac; int newsmac; void* nat_mode; } ;


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
 int VAR_13 ;
 void* VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ch_filter_specification*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ch_filter_specification *VAR_21, u32 VAR_22,
    u32 VAR_23, u32 VAR_24, u8 VAR_25)
{
 switch (VAR_25) {
 case 147:
  switch (VAR_24) {
  case 142:
   VAR_21->newdmac = 1;
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_0);
   break;
  case 141:
   if (~VAR_23 & VAR_15)
    FUNC_1(VAR_21, VAR_22, VAR_23, VAR_1);
   else
    FUNC_1(VAR_21, VAR_22 >> 16, VAR_23 >> 16,
           VAR_2);
   break;
  case 140:
   VAR_21->newsmac = 1;
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_3);
  }
  break;
 case 146:
  switch (VAR_24) {
  case 138:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_5);
   break;
  case 139:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_4);
  }
  VAR_21->nat_mode = VAR_14;
  break;
 case 145:
  switch (VAR_24) {
  case 132:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_11);
   break;
  case 131:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_12);
   break;
  case 130:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_13);
   break;
  case 133:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_10);
   break;
  case 136:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_7);
   break;
  case 135:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_8);
   break;
  case 134:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_9);
   break;
  case 137:
   FUNC_1(VAR_21, VAR_22, VAR_23, VAR_6);
  }
  VAR_21->nat_mode = VAR_14;
  break;
 case 144:
  switch (VAR_24) {
  case 129:
   if (~VAR_23 & VAR_16)
    FUNC_1(VAR_21, FUNC_0(VAR_22) >> 16,
           FUNC_0(VAR_23) >> 16,
           VAR_18);
   else
    FUNC_1(VAR_21, FUNC_0(VAR_22),
           FUNC_0(VAR_23), VAR_17);
  }
  VAR_21->nat_mode = VAR_14;
  break;
 case 143:
  switch (VAR_24) {
  case 128:
   if (~VAR_23 & VAR_16)
    FUNC_1(VAR_21, FUNC_0(VAR_22) >> 16,
           FUNC_0(VAR_23) >> 16,
           VAR_20);
   else
    FUNC_1(VAR_21, FUNC_0(VAR_22),
           FUNC_0(VAR_23), VAR_19);
  }
  VAR_21->nat_mode = VAR_14;
 }
}
