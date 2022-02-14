
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct rio_mport *VAR_4, u16 VAR_5, u8 VAR_6,
         u16 VAR_7)
{
 u32 VAR_8;

 if (VAR_7 == VAR_1) {
  for (VAR_8 = 0x80000000; VAR_8 <= 0x800000ff;) {
   FUNC_0(VAR_4, VAR_5, VAR_6,
    VAR_2, VAR_8);
   FUNC_0(VAR_4, VAR_5, VAR_6,
    VAR_3,
    (VAR_0 << 24) |
    (VAR_0 << 16) |
    (VAR_0 << 8) | VAR_0);
   VAR_8 += 4;
  }
 }

 return 0;
}
