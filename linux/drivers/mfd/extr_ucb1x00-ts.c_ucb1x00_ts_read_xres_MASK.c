
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00_ts {int adcsync; int ucb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ucb1x00_ts *VAR_5)
{
 FUNC_1(VAR_5->ucb, VAR_0,
   VAR_3 | VAR_4 |
   VAR_2 | VAR_1);
 return FUNC_0(VAR_5->ucb, 0, VAR_5->adcsync);
}
