
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int if_mode; int signals; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct slgt_info*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_15)
{
 unsigned char VAR_16 = 0;
 switch(VAR_15->if_mode & VAR_9)
 {
 case 130:
  VAR_16 |= VAR_5;
  break;
 case 128:
  VAR_16 |= VAR_7 + VAR_6 + VAR_5;
  break;
 case 129:
  VAR_16 |= VAR_6;
  break;
 }

 if (VAR_15->if_mode & VAR_10)
  VAR_16 |= VAR_4;
 if (VAR_15->signals & VAR_12)
  VAR_16 |= VAR_3;
 if (VAR_15->signals & VAR_13)
  VAR_16 |= VAR_2;
 if (VAR_15->if_mode & VAR_8)
  VAR_16 |= VAR_1;
 if (VAR_15->if_mode & VAR_11)
  VAR_16 |= VAR_0;
 FUNC_0(VAR_15, VAR_14, VAR_16);
}
