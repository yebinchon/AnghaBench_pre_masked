
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_spi {int done; scalar_t__ rcount; int wcount; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct davinci_spi *VAR_1 = (struct davinci_spi *)VAR_0;

 VAR_1->rcount = 0;

 if (!VAR_1->wcount && !VAR_1->rcount)
  FUNC_0(&VAR_1->done);
}
