
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct ocotp_priv {int clk; scalar_t__ base; int dev; TYPE_1__* params; } ;
struct TYPE_2__ {unsigned int nregs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(void *VAR_4, unsigned int VAR_5,
     void *VAR_6, size_t VAR_7)
{
 struct ocotp_priv *VAR_8 = VAR_4;
 unsigned int VAR_9;
 u32 *VAR_10 = VAR_6;
 int VAR_11, VAR_12;
 u32 VAR_13;

 VAR_13 = VAR_5 >> 2;
 VAR_9 = VAR_7 >> 2;

 if (VAR_9 > (VAR_8->params->nregs - VAR_13))
  VAR_9 = VAR_8->params->nregs - VAR_13;

 FUNC_5(&VAR_3);

 VAR_12 = FUNC_1(VAR_8->clk);
 if (VAR_12 < 0) {
  FUNC_6(&VAR_3);
  FUNC_2(VAR_8->dev, "failed to prepare/enable ocotp clk\n");
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_8->base, 0);
 if (VAR_12 < 0) {
  FUNC_2(VAR_8->dev, "timeout during read setup\n");
  goto read_end;
 }

 for (VAR_11 = VAR_13; VAR_11 < (VAR_13 + VAR_9); VAR_11++) {
  *VAR_10++ = FUNC_7(VAR_8->base + VAR_0 +
          VAR_11 * VAR_1);







  if (*(VAR_10 - 1) == VAR_2)
   FUNC_3(VAR_8->base);
 }
 VAR_12 = 0;

read_end:
 FUNC_0(VAR_8->clk);
 FUNC_6(&VAR_3);
 return VAR_12;
}
