
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static inline int FUNC_1(u32 VAR_0, int VAR_1, u32 VAR_2)
{
 if (VAR_0 & (VAR_1 - 1)) {
  FUNC_0("mtk-jpeg: write reg %x without %d align\n", VAR_2, VAR_1);
  return -1;
 }

 return 0;
}
