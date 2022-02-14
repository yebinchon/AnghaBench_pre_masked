
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm {scalar_t__ base; int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct stfsm *VAR_1, const uint32_t *VAR_2,
       uint32_t VAR_3)
{
 uint32_t VAR_4 = VAR_3 >> 2;

 FUNC_1(VAR_1->dev, "writing %d bytes to FIFO\n", VAR_3);

 FUNC_0((((uintptr_t)VAR_2) & 0x3) || (VAR_3 & 0x3));

 FUNC_2(VAR_1->base + VAR_0, VAR_2, VAR_4);

 return VAR_3;
}
