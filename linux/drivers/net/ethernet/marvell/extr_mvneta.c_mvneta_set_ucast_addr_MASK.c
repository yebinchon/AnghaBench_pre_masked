
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mvneta_port {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct mvneta_port*,scalar_t__) ;
 int FUNC_1 (struct mvneta_port*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct mvneta_port *VAR_1, u8 VAR_2,
      int VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;


 VAR_2 = (0xf & VAR_2);


 VAR_5 = (VAR_2 / 4) * 4;


 VAR_6 = VAR_2 % 4;

 VAR_4 = FUNC_0(VAR_1, (VAR_0 + VAR_5));

 if (VAR_3 == -1) {

  VAR_4 &= ~(0xff << (8 * VAR_6));
 } else {
  VAR_4 &= ~(0xff << (8 * VAR_6));
  VAR_4 |= ((0x01 | (VAR_3 << 1)) << (8 * VAR_6));
 }

 FUNC_1(VAR_1, (VAR_0 + VAR_5), VAR_4);
}
