
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wsm_buf*) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (struct cw1200_common*,int) ;
 int FUNC_4 (struct cw1200_common*,int) ;
 int FUNC_5 (struct cw1200_common*,struct wsm_buf*,int) ;

__attribute__((used)) static int FUNC_6(struct cw1200_common *VAR_1,
    struct wsm_buf *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_5 <= 0))
  return -VAR_0;

 if (VAR_5 > 1) {

  VAR_4 = FUNC_4(VAR_1, VAR_5 - 1);
  if (VAR_4 < 0)
   return VAR_4;
  else if (VAR_4 > 0)
   FUNC_2(VAR_1);
 }

 FUNC_3(VAR_1, VAR_5);
 do {
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3);
 } while (!VAR_4 && --VAR_5);

 return VAR_4;

underflow:
 FUNC_0(1);
 return -VAR_0;
}
