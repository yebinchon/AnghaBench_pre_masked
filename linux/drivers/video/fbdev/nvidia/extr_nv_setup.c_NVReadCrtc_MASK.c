
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvidia_par {scalar_t__ IOBase; int PCIO; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;

u8 FUNC_2(struct nvidia_par *VAR_0, u8 VAR_1)
{
 FUNC_1(VAR_0->PCIO, VAR_0->IOBase + 0x04, VAR_1);
 return (FUNC_0(VAR_0->PCIO, VAR_0->IOBase + 0x05));
}
