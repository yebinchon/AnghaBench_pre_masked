
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nxp_fspi {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nxp_fspi*,scalar_t__) ;
 int FUNC_2 (struct nxp_fspi*,scalar_t__,int,int ,int ,int) ;
 int FUNC_3 (struct nxp_fspi*,int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct nxp_fspi *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_3->iobase + VAR_0);
 FUNC_3(VAR_3, VAR_4 | VAR_1, VAR_3->iobase + VAR_0);


 VAR_5 = FUNC_2(VAR_3, VAR_3->iobase + VAR_0,
       VAR_1, 0, VAR_2, 0);
 FUNC_0(VAR_5);
}
