
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdomain {scalar_t__ chip; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static inline void FUNC_1(struct fdomain *VAR_8)
{
 FUNC_0(0, VAR_8->base + VAR_4);
 FUNC_0(0, VAR_8->base + VAR_5);
 if (VAR_8->chip == VAR_7 || VAR_8->chip == VAR_6)

  FUNC_0(VAR_1 | VAR_0 | VAR_2,
       VAR_8->base + VAR_3);
 else
  FUNC_0(VAR_1 | VAR_2, VAR_8->base + VAR_3);
}
