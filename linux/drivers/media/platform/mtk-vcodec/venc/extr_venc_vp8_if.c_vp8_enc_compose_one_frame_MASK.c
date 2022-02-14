
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int is_key_frm; } ;
struct venc_vp8_inst {TYPE_4__* work_bufs; TYPE_3__* vsi; TYPE_1__ vpu_inst; } ;
struct mtk_vcodec_mem {int size; int va; } ;
struct TYPE_8__ {int* va; } ;
struct TYPE_6__ {int pic_w; int pic_h; } ;
struct TYPE_7__ {TYPE_2__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int*,unsigned int) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct venc_vp8_inst*,char*,int) ;
 int FUNC_3 (struct venc_vp8_inst*,int ) ;

__attribute__((used)) static int FUNC_4(struct venc_vp8_inst *VAR_5,
         struct mtk_vcodec_mem *VAR_6,
         unsigned int *VAR_7)
{
 unsigned int VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 unsigned int VAR_11;
 u8 VAR_12[VAR_1];
 u32 VAR_13;

 VAR_9 = FUNC_3(VAR_5, VAR_2);
 VAR_10 = FUNC_3(VAR_5, VAR_3);


 VAR_8 = !VAR_5->vpu_inst.is_key_frm;
 VAR_13 = (VAR_10 << 5) | 0x10 | VAR_8;
 VAR_12[0] = VAR_13 & 0xff;
 VAR_12[1] = (VAR_13 >> 8) & 0xff;
 VAR_12[2] = (VAR_13 >> 16) & 0xff;


 if (VAR_8 == 0) {
  VAR_11 = VAR_1;
  VAR_12[3] = 0x9d;
  VAR_12[4] = 0x01;
  VAR_12[5] = 0x2a;
  VAR_12[6] = VAR_5->vsi->config.pic_w;
  VAR_12[7] = VAR_5->vsi->config.pic_w >> 8;
  VAR_12[8] = VAR_5->vsi->config.pic_h;
  VAR_12[9] = VAR_5->vsi->config.pic_h >> 8;
 } else {
  VAR_11 = 3;
 }

 if (VAR_6->size < VAR_10 + VAR_9 + VAR_11) {
  FUNC_2(VAR_5, "bitstream buf size is too small(%zu)",
          VAR_6->size);
  return -VAR_0;
 }
 FUNC_1(VAR_6->va + VAR_10 + VAR_11,
  VAR_6->va, VAR_9);
 FUNC_0(VAR_6->va + VAR_11,
        VAR_5->work_bufs[VAR_4].va,
        VAR_10);
 FUNC_0(VAR_6->va, VAR_12, VAR_11);
 *VAR_7 = VAR_9 + VAR_10 + VAR_11;

 return 0;
}
