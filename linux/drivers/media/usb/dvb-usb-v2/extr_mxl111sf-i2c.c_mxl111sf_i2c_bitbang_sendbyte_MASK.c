
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl111sf_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mxl111sf_state*,int ,int*) ;
 int FUNC_1 (struct mxl111sf_state*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct mxl111sf_state *VAR_7,
      u8 VAR_8)
{
 int VAR_9, VAR_10;
 u8 VAR_11 = 0;

 FUNC_3("(0x%02x)", VAR_8);

 VAR_10 = FUNC_0(VAR_7, VAR_2, &VAR_11);
 if (FUNC_2(VAR_10))
  goto fail;

 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {

  VAR_11 = (VAR_8 & (0x80 >> VAR_9)) ? VAR_6 : 0;

  VAR_10 = FUNC_1(VAR_7, VAR_1,
      0x10 | VAR_3 | VAR_11);
  if (FUNC_2(VAR_10))
   goto fail;

  VAR_10 = FUNC_1(VAR_7, VAR_1,
      0x10 | VAR_3 | VAR_11 | VAR_4);
  if (FUNC_2(VAR_10))
   goto fail;

  VAR_10 = FUNC_1(VAR_7, VAR_1,
      0x10 | VAR_3 | VAR_11);
  if (FUNC_2(VAR_10))
   goto fail;
 }


 if (!(VAR_8 & 1)) {
  VAR_10 = FUNC_1(VAR_7, VAR_1,
      0x10 | VAR_3 | VAR_6);
  if (FUNC_2(VAR_10))
   goto fail;
 }


 VAR_10 = FUNC_1(VAR_7, VAR_1,
     0x10 | VAR_3 | VAR_4 | VAR_6);
 if (FUNC_2(VAR_10))
  goto fail;

 VAR_10 = FUNC_0(VAR_7, VAR_2, &VAR_11);
 if (FUNC_2(VAR_10))
  goto fail;


 VAR_10 = FUNC_1(VAR_7, VAR_1,
     0x10 | VAR_3 | VAR_6);
 if (FUNC_2(VAR_10))
  goto fail;

 if (VAR_11 & VAR_5)
  VAR_10 = -VAR_0;
fail:
 return VAR_10;
}
