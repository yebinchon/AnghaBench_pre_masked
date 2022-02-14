
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmstb_waketmr {unsigned int rate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct brcmstb_waketmr*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct brcmstb_waketmr *VAR_2,
          unsigned int VAR_3)
{
 FUNC_0(VAR_2);


 FUNC_1(VAR_2->rate, VAR_2->base + VAR_1);

 FUNC_1(VAR_3 + 1, VAR_2->base + VAR_0);
}
