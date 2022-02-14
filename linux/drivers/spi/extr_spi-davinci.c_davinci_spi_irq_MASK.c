
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_spi {int done; int wcount; int rcount; scalar_t__ base; } ;
typedef int s32 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct davinci_spi*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(s32 VAR_3, void *VAR_4)
{
 struct davinci_spi *VAR_5 = VAR_4;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (FUNC_3(VAR_6 != 0))
  FUNC_0(VAR_5->base + VAR_1, VAR_2);

 if ((!VAR_5->rcount && !VAR_5->wcount) || VAR_6)
  FUNC_1(&VAR_5->done);

 return VAR_0;
}
