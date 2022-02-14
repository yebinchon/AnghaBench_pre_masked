
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cqspi_st {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct cqspi_st *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2->iobase + VAR_0);

 return VAR_3 & (1 << VAR_1);
}
