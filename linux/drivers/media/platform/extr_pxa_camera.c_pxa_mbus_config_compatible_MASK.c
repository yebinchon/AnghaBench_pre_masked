
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_config {unsigned int flags; int type; } ;


 unsigned int VAR_0 ;

 unsigned long VAR_1 ;

 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;

 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct v4l2_mbus_config *VAR_14,
     unsigned int VAR_15)
{
 unsigned long VAR_16;
 bool VAR_17 = 1, VAR_18 = 1, VAR_19, VAR_20, VAR_21;
 bool VAR_22, VAR_23;

 VAR_16 = VAR_14->flags & VAR_15;

 switch (VAR_14->type) {
 case 128:
  VAR_17 = VAR_16 & (VAR_6 |
     VAR_7);
  VAR_18 = VAR_16 & (VAR_12 |
     VAR_13);

 case 130:
  VAR_19 = VAR_16 & (VAR_10 |
           VAR_9);
  VAR_20 = VAR_16 & (VAR_4 |
           VAR_5);
  VAR_21 = VAR_16 & (VAR_8 | VAR_11);
  return (!VAR_17 || !VAR_18 || !VAR_19 || !VAR_20 || !VAR_21) ?
   0 : VAR_16;
 case 129:
  VAR_22 = VAR_16 & VAR_2;
  VAR_23 = VAR_16 & (VAR_3 |
          VAR_1);
  return (!VAR_22 || !VAR_23) ? 0 : VAR_16;
 default:
  FUNC_0(1);
  return -VAR_0;
 }
 return 0;
}
