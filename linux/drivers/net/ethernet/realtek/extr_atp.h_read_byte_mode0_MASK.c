
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline unsigned char FUNC_2(short VAR_4)
{
 unsigned char VAR_5;

 FUNC_1(VAR_1, VAR_4 + VAR_2);
 FUNC_0(VAR_4 + VAR_3);
 VAR_5 = (FUNC_0(VAR_4 + VAR_3) >> 3) & 0x0f;
 FUNC_1(VAR_0, VAR_4 + VAR_2);
 FUNC_0(VAR_4 + VAR_3);
 FUNC_0(VAR_4 + VAR_3);
 return VAR_5 | ((FUNC_0(VAR_4 + VAR_3) << 1) & 0xf0);
}
