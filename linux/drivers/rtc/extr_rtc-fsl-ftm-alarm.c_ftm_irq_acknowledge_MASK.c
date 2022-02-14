
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftm_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ftm_rtc*,int ) ;
 int FUNC_1 (struct ftm_rtc*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct ftm_rtc *VAR_2)
{
 unsigned int VAR_3 = 100;
 while ((VAR_1 & FUNC_0(VAR_2, VAR_0)) && VAR_3--)
  FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_2, VAR_0) & (~VAR_1));
}
