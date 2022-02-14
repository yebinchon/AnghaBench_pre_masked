
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_charger {int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct lp8788_charger *VAR_4)
{
 u8 VAR_5;

 FUNC_0(VAR_4->lp, VAR_1, &VAR_5);
 VAR_5 &= VAR_0;

 return VAR_5 == VAR_3 || VAR_5 == VAR_2;
}
