
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_ocotp {int clk; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mxs_ocotp*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, unsigned int VAR_6,
     void *VAR_7, size_t VAR_8)
{
 struct mxs_ocotp *VAR_9 = VAR_5;
 u32 *VAR_10 = VAR_7;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_9->clk);
 if (VAR_11)
  return VAR_11;

 FUNC_5(VAR_0, VAR_9->base + VAR_3);

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11)
  goto disable_clk;


 FUNC_5(VAR_1, VAR_9->base + VAR_4);


 FUNC_4(1);

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11)
  goto close_banks;

 while (VAR_8) {
  if ((VAR_6 < VAR_2) || (VAR_6 % 16)) {

   *VAR_10++ = 0;
  } else {
   *VAR_10++ = FUNC_3(VAR_9->base + VAR_6);
  }

  VAR_8 -= 4;
  VAR_6 += 4;
 }

close_banks:

 FUNC_5(VAR_1, VAR_9->base + VAR_3);

disable_clk:
 FUNC_0(VAR_9->clk);

 return VAR_11;
}
