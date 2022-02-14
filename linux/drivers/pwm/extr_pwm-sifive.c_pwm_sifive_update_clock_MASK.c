
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct pwm_sifive_ddata {unsigned long long approx_period; void* real_period; TYPE_1__ chip; scalar_t__ regs; } ;


 int FUNC_0 (int ,int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int ,char*,void*) ;
 void* FUNC_3 (unsigned long long,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pwm_sifive_ddata *VAR_5,
        unsigned long VAR_6)
{
 unsigned long long VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 u32 VAR_10;







 VAR_8 = FUNC_3(VAR_5->approx_period * (u64)VAR_6, VAR_0);
 VAR_9 = FUNC_1(FUNC_4(VAR_8) - VAR_1, 0, 0xf);

 VAR_10 = VAR_3 |
       FUNC_0(VAR_4, VAR_9);
 FUNC_5(VAR_10, VAR_5->regs + VAR_2);


 VAR_7 = (unsigned long long)VAR_0 << (VAR_1 + VAR_9);
 VAR_5->real_period = FUNC_3(VAR_7, VAR_6);
 FUNC_2(VAR_5->chip.dev,
  "New real_period = %u ns\n", VAR_5->real_period);
}
