
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct apds990x_chip {scalar_t__ prox_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct apds990x_chip*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct apds990x_chip *VAR_7)
{

 u8 VAR_8 = VAR_2 | VAR_5 | VAR_1 |
  VAR_6;

 if (VAR_7->prox_en)
  VAR_8 |= VAR_4 | VAR_3;

 return FUNC_0(VAR_7, VAR_0, VAR_8);
}
