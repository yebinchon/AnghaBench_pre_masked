
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int dummy; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl111sf_state*) ;
 int FUNC_1 (struct mxl111sf_state*,int*) ;
 int FUNC_2 (struct mxl111sf_state*,int) ;
 int FUNC_3 (struct mxl111sf_state*) ;
 int FUNC_4 (struct mxl111sf_state*) ;
 int FUNC_5 (struct mxl111sf_state*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct mxl111sf_state *VAR_1,
        struct i2c_msg *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_7("()");

 if (VAR_2->flags & VAR_0) {

  VAR_4 = FUNC_4(VAR_1);
  if (FUNC_6(VAR_4))
   goto fail;

  VAR_4 = FUNC_2(VAR_1,
          (VAR_2->addr << 1) | 0x01);
  if (FUNC_6(VAR_4)) {
   FUNC_5(VAR_1);
   goto fail;
  }

  for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
   VAR_4 = FUNC_1(VAR_1,
           &VAR_2->buf[VAR_3]);
   if (FUNC_6(VAR_4)) {
    FUNC_5(VAR_1);
    goto fail;
   }

   if (VAR_3 < VAR_2->len - 1)
    FUNC_0(VAR_1);
  }

  FUNC_3(VAR_1);

  VAR_4 = FUNC_5(VAR_1);
  if (FUNC_6(VAR_4))
   goto fail;

 } else {

  VAR_4 = FUNC_4(VAR_1);
  if (FUNC_6(VAR_4))
   goto fail;

  VAR_4 = FUNC_2(VAR_1,
          (VAR_2->addr << 1) & 0xfe);
  if (FUNC_6(VAR_4)) {
   FUNC_5(VAR_1);
   goto fail;
  }

  for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
   VAR_4 = FUNC_2(VAR_1,
           VAR_2->buf[VAR_3]);
   if (FUNC_6(VAR_4)) {
    FUNC_5(VAR_1);
    goto fail;
   }
  }


  FUNC_5(VAR_1);
 }
fail:
 return VAR_4;
}
