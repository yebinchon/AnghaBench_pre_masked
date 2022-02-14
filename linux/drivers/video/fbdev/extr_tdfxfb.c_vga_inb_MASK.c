
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tdfx_par {scalar_t__ iobase; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct tdfx_par *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->iobase + VAR_1 - 0x300);
}
