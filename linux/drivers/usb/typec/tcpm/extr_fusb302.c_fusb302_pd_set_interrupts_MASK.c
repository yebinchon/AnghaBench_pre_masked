
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fusb302_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fusb302_chip*,int ,int) ;
 int FUNC_1 (struct fusb302_chip*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fusb302_chip *VAR_9, bool VAR_10)
{
 int VAR_11 = 0;
 u8 VAR_12 = VAR_8;
 u8 VAR_13 = VAR_4 |
         VAR_3 |
         VAR_5 |
         VAR_2;
 u8 VAR_14 = VAR_7;

 VAR_11 = VAR_10 ?
  FUNC_0(VAR_9, VAR_0, VAR_12) :
  FUNC_1(VAR_9, VAR_0, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = VAR_10 ?
  FUNC_0(VAR_9, VAR_1, VAR_13) :
  FUNC_1(VAR_9, VAR_1, VAR_13);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = VAR_10 ?
  FUNC_0(VAR_9, VAR_6, VAR_14) :
  FUNC_1(VAR_9, VAR_6, VAR_14);
 return VAR_11;
}
