
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct ext_dentry_t {scalar_t__ unicode_11_12; scalar_t__ unicode_5_10; scalar_t__ unicode_0_4; scalar_t__ start_clu; void* checksum; scalar_t__ sysid; void* order; } ;
struct dentry_t {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_2 (struct dentry_t*,int ) ;

void FUNC_3(struct ext_dentry_t *VAR_1, s32 VAR_2, u8 VAR_3, u16 *VAR_4)
{
 int VAR_5;
 bool VAR_6 = 0;

 FUNC_2((struct dentry_t *)VAR_1, VAR_0);
 VAR_1->order = (u8)VAR_2;
 VAR_1->sysid = 0;
 VAR_1->checksum = VAR_3;
 FUNC_1(VAR_1->start_clu, 0);

 for (VAR_5 = 0; VAR_5 < 10; VAR_5 += 2) {
  if (!VAR_6) {
   FUNC_0(VAR_1->unicode_0_4 + VAR_5, *VAR_4);
   if (*VAR_4 == 0x0)
    VAR_6 = 1;
   else
    VAR_4++;
  } else {
   FUNC_0(VAR_1->unicode_0_4 + VAR_5, 0xFFFF);
  }
 }

 for (VAR_5 = 0; VAR_5 < 12; VAR_5 += 2) {
  if (!VAR_6) {
   FUNC_1(VAR_1->unicode_5_10 + VAR_5, *VAR_4);
   if (*VAR_4 == 0x0)
    VAR_6 = 1;
   else
    VAR_4++;
  } else {
   FUNC_1(VAR_1->unicode_5_10 + VAR_5, 0xFFFF);
  }
 }

 for (VAR_5 = 0; VAR_5 < 4; VAR_5 += 2) {
  if (!VAR_6) {
   FUNC_1(VAR_1->unicode_11_12 + VAR_5, *VAR_4);
   if (*VAR_4 == 0x0)
    VAR_6 = 1;
   else
    VAR_4++;
  } else {
   FUNC_1(VAR_1->unicode_11_12 + VAR_5, 0xFFFF);
  }
 }
}
