
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9spi {int waitq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct txx9spi*,int ) ;
 int FUNC_1 (struct txx9spi*,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct txx9spi *VAR_5 = VAR_4;


 FUNC_1(VAR_5, FUNC_0(VAR_5, VAR_1) & ~VAR_2,
   VAR_1);
 FUNC_2(&VAR_5->waitq);
 return VAR_0;
}
