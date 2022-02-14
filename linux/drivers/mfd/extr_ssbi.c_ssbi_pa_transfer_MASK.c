
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ssbi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ssbi*,int ) ;
 int FUNC_1 (struct ssbi*,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(struct ssbi *VAR_7, u32 VAR_8, u8 *VAR_9)
{
 u32 VAR_10 = VAR_6;
 u32 VAR_11 = 0;

 FUNC_1(VAR_7, VAR_8, VAR_2);

 while (VAR_10--) {
  VAR_11 = FUNC_0(VAR_7, VAR_3);

  if (VAR_11 & VAR_4)
   return -VAR_0;

  if (VAR_11 & VAR_5) {
   if (VAR_9)
    *VAR_9 = VAR_11 & 0xff;
   return 0;
  }
  FUNC_2(1);
 }

 return -VAR_1;
}
