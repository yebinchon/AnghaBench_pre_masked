
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_state*,int,int*) ;
 int FUNC_1 (struct mxl111sf_state*,int,int) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mxl111sf_state *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 FUNC_2("(%d, %d)", VAR_2, VAR_3);

 if ((VAR_2 > 0) && (VAR_2 < 8)) {
  VAR_4 = FUNC_0(VAR_1, 0x19, &VAR_5);
  if (FUNC_3(VAR_4))
   goto fail;
  VAR_5 &= ~(1 << (VAR_2 - 1));
  VAR_5 |= (VAR_3 << (VAR_2 - 1));
  VAR_4 = FUNC_1(VAR_1, 0x19, VAR_5);
  if (FUNC_3(VAR_4))
   goto fail;
 } else if (VAR_2 <= 10) {
  if (VAR_2 == 0)
   VAR_2 += 7;
  VAR_4 = FUNC_0(VAR_1, 0x30, &VAR_5);
  if (FUNC_3(VAR_4))
   goto fail;
  VAR_5 &= ~(1 << (VAR_2 - 3));
  VAR_5 |= (VAR_3 << (VAR_2 - 3));
  VAR_4 = FUNC_1(VAR_1, 0x30, VAR_5);
  if (FUNC_3(VAR_4))
   goto fail;
 } else
  VAR_4 = -VAR_0;
fail:
 return VAR_4;
}
