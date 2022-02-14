
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nxp_fspi {int c; scalar_t__ iobase; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nxp_fspi*,scalar_t__) ;
 int FUNC_2 (struct nxp_fspi*,int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct nxp_fspi *VAR_5 = VAR_4;
 u32 VAR_6;


 VAR_6 = FUNC_1(VAR_5, VAR_5->iobase + VAR_0);
 FUNC_2(VAR_5, VAR_1, VAR_5->iobase + VAR_0);

 if (VAR_6 & VAR_1)
  FUNC_0(&VAR_5->c);

 return VAR_2;
}
