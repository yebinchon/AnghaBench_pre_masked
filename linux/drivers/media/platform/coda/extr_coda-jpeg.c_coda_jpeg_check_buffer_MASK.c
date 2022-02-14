
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vb2_buffer {int dummy; } ;
struct coda_ctx {int dummy; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct vb2_buffer*,int ) ;
 void* FUNC_2 (struct vb2_buffer*,int ) ;
 int FUNC_3 (struct vb2_buffer*,int ,int) ;

bool FUNC_4(struct coda_ctx *VAR_2, struct vb2_buffer *VAR_3)
{
 void *VAR_4 = FUNC_2(VAR_3, 0);
 u16 VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_0((__be16 *)VAR_4);
 if (VAR_5 != VAR_1)
  return 0;

 VAR_7 = FUNC_1(VAR_3, 0);
 VAR_4 += VAR_7 - 2;
 for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
  VAR_6 = FUNC_0((__be16 *)(VAR_4 - VAR_8));
  if (VAR_6 == VAR_0) {
   if (VAR_8 > 0)
    FUNC_3(VAR_3, 0, VAR_7 - VAR_8);
   return 1;
  }
 }

 return 0;
}
