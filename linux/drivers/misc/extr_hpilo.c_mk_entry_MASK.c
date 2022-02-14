
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 & 7 ? (VAR_3 >> 3) + 1 : VAR_3 >> 3;
 return VAR_2 << VAR_0 | VAR_4 << VAR_1;
}
