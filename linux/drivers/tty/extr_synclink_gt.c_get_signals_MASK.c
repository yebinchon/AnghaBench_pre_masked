
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int signals; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short FUNC_0 (struct slgt_info*,int ) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_11)
{
 unsigned short VAR_12 = FUNC_0(VAR_11, VAR_4);


 VAR_11->signals &= VAR_10 | VAR_8;

 if (VAR_12 & VAR_3)
  VAR_11->signals |= VAR_7;
 if (VAR_12 & VAR_2)
  VAR_11->signals |= VAR_5;
 if (VAR_12 & VAR_1)
  VAR_11->signals |= VAR_6;
 if (VAR_12 & VAR_0)
  VAR_11->signals |= VAR_9;
}
