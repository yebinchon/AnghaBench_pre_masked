
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_2(u8 VAR_2, u8 VAR_3)
{
 if (VAR_1)
  VAR_2 &= ~0x20;
 else
  VAR_2 |= 0x20;

 FUNC_0(((void*)0), VAR_0);
 FUNC_1(((void*)0), VAR_2, VAR_3);
}
