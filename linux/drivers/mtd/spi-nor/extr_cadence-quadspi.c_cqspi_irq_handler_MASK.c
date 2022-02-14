
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cqspi_st {int transfer_complete; scalar_t__ iobase; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct cqspi_st *VAR_6 = VAR_5;
 unsigned int VAR_7;


 VAR_7 = FUNC_1(VAR_6->iobase + VAR_2);


 FUNC_2(VAR_7, VAR_6->iobase + VAR_2);

 VAR_7 &= VAR_0 | VAR_1;

 if (VAR_7)
  FUNC_0(&VAR_6->transfer_complete);

 return VAR_3;
}
