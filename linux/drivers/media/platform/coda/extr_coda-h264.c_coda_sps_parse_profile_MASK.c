
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vb2_buffer {int dummy; } ;
struct TYPE_2__ {int h264_level_idc; int h264_profile_idc; } ;
struct coda_ctx {TYPE_1__ params; } ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int const*) ;
 int FUNC_1 (struct vb2_buffer*,int ) ;
 int * FUNC_2 (struct vb2_buffer*,int ) ;

int FUNC_3(struct coda_ctx *VAR_1, struct vb2_buffer *VAR_2)
{
 const u8 *VAR_3 = FUNC_2(VAR_2, 0);
 const u8 *VAR_4 = VAR_3 + FUNC_1(VAR_2, 0);


 do {
  VAR_3 = FUNC_0(VAR_3, VAR_4);
  if (!VAR_3)
   return -VAR_0;
 } while ((*VAR_3++ & 0x1f) != 0x7);

 VAR_1->params.h264_profile_idc = VAR_3[0];
 VAR_1->params.h264_level_idc = VAR_3[2];

 return 0;
}
