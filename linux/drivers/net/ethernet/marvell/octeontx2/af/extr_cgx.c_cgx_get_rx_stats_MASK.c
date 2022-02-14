
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cgx {int lmac_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgx*,int,scalar_t__) ;

int FUNC_1(void *VAR_2, int VAR_3, int VAR_4, u64 *VAR_5)
{
 struct cgx *VAR_6 = VAR_2;

 if (!VAR_6 || VAR_3 >= VAR_6->lmac_count)
  return -VAR_1;
 *VAR_5 = FUNC_0(VAR_6, VAR_3, VAR_0 + (VAR_4 * 8));
 return 0;
}
