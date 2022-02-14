
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct rio_mport *VAR_6, u16 VAR_7, u8 VAR_8,
         u16 VAR_9)
{
 u32 VAR_10;




 if (VAR_9 == VAR_2)
  VAR_9 = 0;
 else
  VAR_9++;

 FUNC_0(VAR_6, VAR_7, VAR_8,
      VAR_1, VAR_9);

 for (VAR_10 = VAR_4;
      VAR_10 <= (VAR_4 | 0xff);) {
  FUNC_0(VAR_6, VAR_7, VAR_8,
   VAR_3, VAR_10);
  FUNC_0(VAR_6, VAR_7, VAR_8,
   VAR_5,
   (VAR_0 << 24) | (VAR_0 << 16) |
   (VAR_0 << 8) | VAR_0);
  VAR_10 += 4;
 }

 return 0;
}
