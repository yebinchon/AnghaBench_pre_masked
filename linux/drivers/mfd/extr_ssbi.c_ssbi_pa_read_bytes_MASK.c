
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssbi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssbi*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct ssbi *VAR_2, u16 VAR_3, u8 *VAR_4, int VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_1 | (VAR_3 & VAR_0) << 8;

 while (VAR_5) {
  VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_4);
  if (VAR_7)
   goto err;
  VAR_4++;
  VAR_5--;
 }

err:
 return VAR_7;
}
