
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct octeon_device {scalar_t__ num_oqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct octeon_device *VAR_6, u8 VAR_7)
{
 u32 VAR_8;

 if (VAR_7 & VAR_5) {
  for (VAR_8 = 0; VAR_8 < VAR_6->num_oqs; VAR_8++) {

   FUNC_4(
       VAR_6, FUNC_1(VAR_8),
       0x3fffffffffffff);
  }
 }
 if (VAR_7 & VAR_3) {
  for (VAR_8 = 0; VAR_8 < VAR_6->num_oqs; VAR_8++) {
   FUNC_4(
       VAR_6, FUNC_0(VAR_8),
       (FUNC_3(
     VAR_6, FUNC_0(VAR_8)) &
        ~(VAR_0 |
          VAR_2)));
  }
 }

 if (VAR_7 & VAR_4) {
  FUNC_4(
      VAR_6, FUNC_2(0),
      (FUNC_3(VAR_6, FUNC_2(0)) &
       ~VAR_1));
 }
}
