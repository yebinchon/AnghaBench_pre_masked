
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cgx {int lmac_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cgx*,int,int ) ;
 int FUNC_1 (struct cgx*,int,int ,int) ;

int FUNC_2(void *VAR_5, int VAR_6, bool VAR_7)
{
 struct cgx *VAR_8 = VAR_5;
 u64 VAR_9;

 if (!VAR_8 || VAR_6 >= VAR_8->lmac_count)
  return -VAR_4;

 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_0);
 if (VAR_7)
  VAR_9 |= VAR_1 | VAR_2 | VAR_3;
 else
  VAR_9 &= ~(VAR_1 | VAR_2 | VAR_3);
 FUNC_1(VAR_8, VAR_6, VAR_0, VAR_9);
 return 0;
}
