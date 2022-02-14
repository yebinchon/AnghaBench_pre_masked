
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blogic_adapter {scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct blogic_adapter *VAR_1)
{
 return FUNC_0(VAR_1->io_addr + VAR_0);
}
