
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdio_func {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,char*,int,char*,int *,int) ;
 int FUNC_1 (int ,int *,char*,int *,int) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*,int *,int,int) ;
 int FUNC_4 (struct sdio_func*,int,int *,int) ;
 int FUNC_5 (struct sdio_func*,int *,int,int) ;
 int FUNC_6 (struct sdio_func*) ;
 int FUNC_7 (struct sdio_func*,int,int *,int) ;
 int FUNC_8 (int,int,int *,int) ;

__attribute__((used)) static int FUNC_9(struct sdio_func *VAR_9, u32 VAR_10, u32 VAR_11,
     u8 *VAR_12, u32 VAR_13)
{
 int VAR_14 = 0;

 FUNC_2(VAR_9);

 if (VAR_10 & VAR_8) {

  if (VAR_11 >= VAR_5 &&
      VAR_11 <= VAR_6)
   VAR_11 += (VAR_7 - VAR_13);


  if (VAR_11 == VAR_3)
   VAR_11 += VAR_4 - VAR_13;

  if (VAR_10 & VAR_2)
   VAR_14 = FUNC_7(VAR_9, VAR_11, VAR_12, VAR_13);
  else
   VAR_14 = FUNC_4(VAR_9, VAR_11, VAR_12, VAR_13);
 } else {
  if (VAR_10 & VAR_2)
   VAR_14 = FUNC_5(VAR_9, VAR_12, VAR_11, VAR_13);
  else
   VAR_14 = FUNC_3(VAR_9, VAR_12, VAR_11, VAR_13);
 }

 FUNC_6(VAR_9);

 FUNC_0(VAR_0, "%s addr 0x%x%s buf 0x%p len %d\n",
     VAR_10 & VAR_8 ? "wr" : "rd", VAR_11,
     VAR_10 & VAR_2 ? " (fixed)" : "", VAR_12, VAR_13);
 FUNC_1(VAR_1, ((void*)0), "sdio ", VAR_12, VAR_13);

 FUNC_8(VAR_11, VAR_10, VAR_12, VAR_13);

 return VAR_14;
}
