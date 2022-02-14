
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethoc {scalar_t__ iobase; scalar_t__ big_endian; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct ethoc *VAR_0, loff_t VAR_1)
{
 if (VAR_0->big_endian)
  return FUNC_1(VAR_0->iobase + VAR_1);
 else
  return FUNC_0(VAR_0->iobase + VAR_1);
}
