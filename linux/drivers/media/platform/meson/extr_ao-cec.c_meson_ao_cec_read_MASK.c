
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct meson_ao_cec_device {int cec_reg_lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct meson_ao_cec_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct meson_ao_cec_device *VAR_3,
        unsigned long VAR_4, u8 *VAR_5,
        int *VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8 = FUNC_1(VAR_0, VAR_4);
 int VAR_9 = 0;

 if (VAR_6 && *VAR_6)
  return;

 FUNC_4(&VAR_3->cec_reg_lock, VAR_7);

 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9)
  goto read_out;

 FUNC_6(VAR_8, VAR_3->base + VAR_2);

 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9)
  goto read_out;

 *VAR_5 = FUNC_0(VAR_1,
     FUNC_3(VAR_3->base + VAR_2));

read_out:
 FUNC_5(&VAR_3->cec_reg_lock, VAR_7);

 if (VAR_6)
  *VAR_6 = VAR_9;
}
