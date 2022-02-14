
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssbi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssbi*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct ssbi *VAR_1, u16 VAR_2, const u8 *VAR_3, int VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 0;

 while (VAR_4) {
  VAR_5 = (VAR_2 & VAR_0) << 8 | *VAR_3;
  VAR_6 = FUNC_0(VAR_1, VAR_5, ((void*)0));
  if (VAR_6)
   goto err;
  VAR_3++;
  VAR_4--;
 }

err:
 return VAR_6;
}
