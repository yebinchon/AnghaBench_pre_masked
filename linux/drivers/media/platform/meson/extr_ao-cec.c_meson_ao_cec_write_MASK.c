
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u32 ;
struct meson_ao_cec_device {int cec_reg_lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct meson_ao_cec_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct meson_ao_cec_device *VAR_4,
          unsigned long VAR_5, u8 VAR_6,
          int *VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9 = FUNC_0(VAR_0, VAR_5) |
    FUNC_0(VAR_3, VAR_6) |
    VAR_2;
 int VAR_10 = 0;

 if (VAR_7 && *VAR_7)
  return;

 FUNC_2(&VAR_4->cec_reg_lock, VAR_8);

 VAR_10 = FUNC_1(VAR_4);
 if (VAR_10)
  goto write_out;

 FUNC_4(VAR_9, VAR_4->base + VAR_1);

write_out:
 FUNC_3(&VAR_4->cec_reg_lock, VAR_8);

 if (VAR_7)
  *VAR_7 = VAR_10;
}
