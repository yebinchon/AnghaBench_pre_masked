
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct octeon_device {scalar_t__ num_oqs; scalar_t__ chip; } ;
struct octeon_cn23xx_vf {int conf; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct octeon_device*,scalar_t__) ;
 int FUNC_6 (struct octeon_device*,int ) ;
 int FUNC_7 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct octeon_device *VAR_6, u8 VAR_7)
{
 struct octeon_cn23xx_vf *VAR_8 = (struct octeon_cn23xx_vf *)VAR_6->chip;
 u32 VAR_9, VAR_10;

 if (VAR_7 & VAR_5) {
  for (VAR_9 = 0; VAR_9 < VAR_6->num_oqs; VAR_9++) {



   VAR_10 = FUNC_5(
    VAR_6, (u32)FUNC_1(VAR_8->conf));

   FUNC_7(
       VAR_6, FUNC_3(VAR_9),
       (FUNC_0(VAR_8->conf) |
        ((u64)VAR_10 << 32)));
  }
 }

 if (VAR_7 & VAR_3) {
  for (VAR_9 = 0; VAR_9 < VAR_6->num_oqs; VAR_9++) {

   FUNC_7(
       VAR_6, FUNC_2(VAR_9),
       ((FUNC_6(
      VAR_6, FUNC_2(VAR_9)) &
         ~VAR_2) |
        VAR_0));
  }
 }


 if (VAR_7 & VAR_4) {
  FUNC_7(
      VAR_6, FUNC_4(0),
      (FUNC_6(VAR_6, FUNC_4(0)) |
       VAR_1));
 }
}
