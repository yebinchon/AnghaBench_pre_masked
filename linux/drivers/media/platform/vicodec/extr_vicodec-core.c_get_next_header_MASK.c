
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int header; } ;
struct vicodec_ctx {int header_size; size_t comp_magic_cnt; TYPE_1__ state; } ;
struct fwht_cframe_hdr {int dummy; } ;
typedef int magic ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int*,int const,int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static enum vb2_buffer_state FUNC_3(struct vicodec_ctx *VAR_2,
          u8 **VAR_3, u32 VAR_4)
{
 static const u8 VAR_5[] = {
  0x4f, 0x4f, 0x4f, 0x4f, 0xff, 0xff, 0xff, 0xff
 };
 u8 *VAR_6 = *VAR_3;
 u32 VAR_7;
 u8 *VAR_8 = (u8 *)&VAR_2->state.header;

 VAR_7 = VAR_0;

 if (!VAR_2->header_size) {
  VAR_7 = VAR_1;
  for (; VAR_6 < *VAR_3 + VAR_4; VAR_6++) {
   u32 VAR_9;

   VAR_6 = FUNC_0(VAR_6, VAR_5[VAR_2->comp_magic_cnt],
       *VAR_3 + VAR_4 - VAR_6);
   if (!VAR_6) {
    VAR_2->comp_magic_cnt = 0;
    VAR_6 = *VAR_3 + VAR_4;
    break;
   }
   VAR_9 = sizeof(VAR_5) - VAR_2->comp_magic_cnt;
   if (*VAR_3 + VAR_4 - VAR_6 < VAR_9)
    VAR_9 = *VAR_3 + VAR_4 - VAR_6;

   FUNC_2(VAR_8 + VAR_2->comp_magic_cnt, VAR_6, VAR_9);
   VAR_2->comp_magic_cnt += VAR_9;
   if (!FUNC_1(VAR_8, VAR_5, VAR_2->comp_magic_cnt)) {
    VAR_6 += VAR_9;
    VAR_7 = VAR_0;
    break;
   }
   VAR_2->comp_magic_cnt = 0;
  }
  if (VAR_2->comp_magic_cnt < sizeof(VAR_5)) {
   *VAR_3 = VAR_6;
   return VAR_7;
  }
  VAR_2->header_size = sizeof(VAR_5);
 }

 if (VAR_2->header_size < sizeof(struct fwht_cframe_hdr)) {
  u32 VAR_10 = sizeof(struct fwht_cframe_hdr) - VAR_2->header_size;

  if (*VAR_3 + VAR_4 - VAR_6 < VAR_10)
   VAR_10 = *VAR_3 + VAR_4 - VAR_6;

  FUNC_2(VAR_8 + VAR_2->header_size, VAR_6, VAR_10);
  VAR_6 += VAR_10;
  VAR_2->header_size += VAR_10;
 }
 *VAR_3 = VAR_6;
 return VAR_7;
}
