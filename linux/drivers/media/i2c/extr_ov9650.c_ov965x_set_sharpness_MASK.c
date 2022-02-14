
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov965x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ov965x*,int ,int*) ;
 int FUNC_1 (struct ov965x*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ov965x *VAR_5, unsigned int VAR_6)
{
 u8 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_3, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_0(VAR_5, VAR_4, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_7 = VAR_6 ? VAR_7 | VAR_0 : VAR_7 & ~VAR_0;
 VAR_6--;
 if (VAR_6 > 0x0f) {
  VAR_7 |= VAR_1;
  VAR_6 >>= 1;
 } else {
  VAR_7 &= ~VAR_1;
 }
 VAR_9 = FUNC_1(VAR_5, VAR_3, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 &= ~VAR_2;
 VAR_8 |= ((u8)VAR_6 & 0x0f);

 return FUNC_1(VAR_5, VAR_4, VAR_8);
}
