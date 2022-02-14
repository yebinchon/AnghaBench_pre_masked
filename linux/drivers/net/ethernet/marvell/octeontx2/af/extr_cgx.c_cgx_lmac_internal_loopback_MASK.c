
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct cgx {int lmac_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct cgx*,int) ;
 int FUNC_1 (struct cgx*,int,int ) ;
 int FUNC_2 (struct cgx*,int,int ,int ) ;

int FUNC_3(void *VAR_7, int VAR_8, bool VAR_9)
{
 struct cgx *VAR_10 = VAR_7;
 u8 VAR_11;
 u64 VAR_12;

 if (!VAR_10 || VAR_8 >= VAR_10->lmac_count)
  return -VAR_4;

 VAR_11 = FUNC_0(VAR_10, VAR_8);
 if (VAR_11 == VAR_6 || VAR_11 == VAR_5) {
  VAR_12 = FUNC_1(VAR_10, VAR_8, VAR_0);
  if (VAR_9)
   VAR_12 |= VAR_1;
  else
   VAR_12 &= ~VAR_1;
  FUNC_2(VAR_10, VAR_8, VAR_0, VAR_12);
 } else {
  VAR_12 = FUNC_1(VAR_10, VAR_8, VAR_2);
  if (VAR_9)
   VAR_12 |= VAR_3;
  else
   VAR_12 &= ~VAR_3;
  FUNC_2(VAR_10, VAR_8, VAR_2, VAR_12);
 }
 return 0;
}
