
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_ao_cec_device {scalar_t__ base; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_4(struct meson_ao_cec_device *VAR_3)
{
 ktime_t VAR_4 = FUNC_0(FUNC_2(), 5000);

 while (FUNC_3(VAR_3->base + VAR_1) & VAR_0) {
  if (FUNC_1(FUNC_2(), VAR_4) > 0)
   return -VAR_2;
 }

 return 0;
}
