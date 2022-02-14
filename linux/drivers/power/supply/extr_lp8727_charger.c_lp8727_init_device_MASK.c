
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8727_chg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lp8727_chg*,int ,int*,int) ;
 int FUNC_1 (struct lp8727_chg*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lp8727_chg *VAR_9)
{
 u8 VAR_10;
 int VAR_11;
 u8 VAR_12[VAR_8];


 VAR_11 = FUNC_0(VAR_9, VAR_6, VAR_12, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_5 | VAR_0 | VAR_2;
 VAR_11 = FUNC_1(VAR_9, VAR_3, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_7 | VAR_1;
 return FUNC_1(VAR_9, VAR_4, VAR_10);
}
