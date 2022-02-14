
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ezusb_packet {int dummy; } ;



__attribute__((used)) static inline u16 FUNC_0(struct ezusb_packet *VAR_0)
{
 u16 VAR_1 = 0;
 u8 *VAR_2 = (u8 *)VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  VAR_1 = (VAR_1 << 1) + VAR_2[VAR_3];

 return VAR_1;
}
