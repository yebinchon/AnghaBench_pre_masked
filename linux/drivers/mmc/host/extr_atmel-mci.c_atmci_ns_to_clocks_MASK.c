
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_mci {unsigned int bus_hz; } ;


 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct atmel_mci *VAR_0,
     unsigned int VAR_1)
{




 unsigned int VAR_2 = FUNC_0(VAR_1, 1000);


 return VAR_2 * (FUNC_0(VAR_0->bus_hz, 2000000));
}
