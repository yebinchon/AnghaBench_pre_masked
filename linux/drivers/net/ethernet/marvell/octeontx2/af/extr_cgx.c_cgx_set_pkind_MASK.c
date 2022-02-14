
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cgx {scalar_t__ lmac_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgx*,scalar_t__,int ,int) ;

int FUNC_1(void *VAR_2, u8 VAR_3, int VAR_4)
{
 struct cgx *VAR_5 = VAR_2;

 if (!VAR_5 || VAR_3 >= VAR_5->lmac_count)
  return -VAR_1;

 FUNC_0(VAR_5, VAR_3, VAR_0, (VAR_4 & 0x3F));
 return 0;
}
