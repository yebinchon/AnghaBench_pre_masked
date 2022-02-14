
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
 VAR_1 = ((VAR_1 << 4) + VAR_0) & 0x3ff;
 VAR_2 = ((VAR_2 << 4) + VAR_0 + 15) & 0x3ff;
 FUNC_0(0, VAR_1, 1280 + 63, VAR_2, VAR_3);
}
