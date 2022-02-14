
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int) ;

int FUNC_1(struct cphy *VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12 = 0;

 if (VAR_11 & VAR_1)
  VAR_12 |= VAR_5;
 if (VAR_11 & VAR_0)
  VAR_12 |= VAR_4;
 if (VAR_11 & VAR_3)
  VAR_12 |= VAR_6;
 if (VAR_11 & VAR_2)
  VAR_12 |= VAR_7;
 return FUNC_0(VAR_10, VAR_8, VAR_9, VAR_12);
}
