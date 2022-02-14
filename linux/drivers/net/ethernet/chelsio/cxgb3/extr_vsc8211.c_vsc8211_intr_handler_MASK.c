
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_8, VAR_2, VAR_3, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9 &= VAR_1;
 if (VAR_9 & VAR_0)
  VAR_11 |= VAR_7;
 if (VAR_9 & (VAR_4 | VAR_5))
  VAR_11 |= VAR_6;
 return VAR_11;
}
