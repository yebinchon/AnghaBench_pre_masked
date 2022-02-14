
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int FUNC_0 (struct mxl111sf_state*,int,int*) ;
 int FUNC_1 (struct mxl111sf_state*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,int) ;

int FUNC_4(struct mxl111sf_state *VAR_0,
       u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;

 if (VAR_2 != 0xff) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);


  if (FUNC_2(VAR_4))
   FUNC_3("error writing addr: 0x%02x, mask: 0x%02x, data: 0x%02x, retrying...",
          VAR_1, VAR_2, VAR_3);

  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_5);

  if (FUNC_2(VAR_4))
   goto fail;
 }
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_5);
 FUNC_2(VAR_4);
fail:
 return VAR_4;
}
