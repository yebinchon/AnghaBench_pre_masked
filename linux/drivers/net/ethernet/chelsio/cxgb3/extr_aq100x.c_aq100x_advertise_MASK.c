
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
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct cphy*,int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_18, unsigned int VAR_19)
{
 unsigned int VAR_20;
 int VAR_21;


 VAR_20 = 0;
 if (VAR_19 & VAR_0)
  VAR_20 |= VAR_11;
 VAR_21 = FUNC_0(VAR_18, VAR_17, VAR_15,
      VAR_11, VAR_20);
 if (VAR_21)
  return VAR_21;


 VAR_20 = 0;
 if (VAR_19 & VAR_1)
  VAR_20 |= VAR_12;
 if (VAR_19 & VAR_2)
  VAR_20 |= VAR_13;
 VAR_21 = FUNC_0(VAR_18, VAR_17, VAR_14,
      VAR_12 | VAR_13, VAR_20);
 if (VAR_21)
  return VAR_21;


 VAR_20 = 0;
 if (VAR_19 & VAR_4)
  VAR_20 |= VAR_8;
 if (VAR_19 & VAR_3)
  VAR_20 |= VAR_7;
 if (VAR_19 & VAR_6)
  VAR_20 |= VAR_10;
 if (VAR_19 & VAR_5)
  VAR_20 |= VAR_9;
 VAR_21 = FUNC_0(VAR_18, VAR_17, VAR_16,
      0xfe0, VAR_20);

 return VAR_21;
}
