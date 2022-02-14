
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mxl111sf_state*,int ,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_5(struct mxl111sf_state *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 u8 VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_1, &VAR_3, 1, VAR_5, 2);
 if (FUNC_2(VAR_6)) {
  FUNC_1("error reading reg: 0x%02x", VAR_3);
  goto fail;
 }

 if (VAR_5[0] == VAR_3)
  *VAR_4 = VAR_5[1];
 else {
  FUNC_4("invalid response reading reg: 0x%02x != 0x%02x, 0x%02x",
      VAR_3, VAR_5[0], VAR_5[1]);
  VAR_6 = -VAR_0;
 }

 FUNC_3("R: (0x%02x, 0x%02x)\n", VAR_3, VAR_5[1]);
fail:
 return VAR_6;
}
