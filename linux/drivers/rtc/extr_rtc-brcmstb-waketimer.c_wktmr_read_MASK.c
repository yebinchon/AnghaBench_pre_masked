
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wktmr_time {scalar_t__ pre; scalar_t__ sec; } ;
struct brcmstb_waketmr {scalar_t__ rate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct brcmstb_waketmr *VAR_2,
         struct wktmr_time *VAR_3)
{
 u32 VAR_4;

 do {
  VAR_3->sec = FUNC_0(VAR_2->base + VAR_0);
  VAR_4 = FUNC_0(VAR_2->base + VAR_1);
 } while (VAR_4 >= VAR_2->rate);

 VAR_3->pre = VAR_2->rate - VAR_4;
}
