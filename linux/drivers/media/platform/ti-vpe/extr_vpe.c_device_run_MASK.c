
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct vpe_q_data {int flags; scalar_t__ colorspace; TYPE_1__* fmt; } ;
struct TYPE_15__ {scalar_t__ dma_addr; } ;
struct TYPE_14__ {TYPE_5__ buf; } ;
struct TYPE_12__ {int m2m_ctx; } ;
struct vpe_ctx {int sequence; int load_mmrs; TYPE_4__ desc_list; TYPE_3__* dev; scalar_t__ deinterlacing; TYPE_5__ sc_coeff_v; TYPE_5__ sc_coeff_h; TYPE_5__ mmr_adb; int ** src_vbs; int * dst_vb; TYPE_2__ fh; struct vpe_q_data* q_data; } ;
struct sc_data {scalar_t__ loaded_coeff_h; int load_coeff_h; scalar_t__ loaded_coeff_v; int load_coeff_v; } ;
struct TYPE_13__ {scalar_t__ loaded_mmrs; int vpdma; struct sc_data* sc; } ;
struct TYPE_11__ {scalar_t__ coplanar; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vpe_ctx*,int ) ;
 int FUNC_2 (struct vpe_ctx*,int ) ;
 int FUNC_3 (struct vpe_ctx*,int) ;
 int FUNC_4 (struct vpe_ctx*) ;
 int FUNC_5 (struct vpe_ctx*) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*,int ,TYPE_5__*) ;
 int FUNC_10 (TYPE_4__*,int ,TYPE_5__*,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (int ,TYPE_5__*) ;
 int FUNC_13 (int ,TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_14(void *VAR_29)
{
 struct vpe_ctx *VAR_30 = VAR_29;
 struct sc_data *VAR_31 = VAR_30->dev->sc;
 struct vpe_q_data *VAR_32 = &VAR_30->q_data[VAR_2];
 struct vpe_q_data *VAR_33 = &VAR_30->q_data[VAR_4];

 if (VAR_30->deinterlacing && VAR_33->flags & VAR_3 &&
  VAR_30->sequence % 2 == 0) {





  VAR_30->src_vbs[0] = FUNC_7(VAR_30->fh.m2m_ctx);
  FUNC_0(VAR_30->src_vbs[0] == ((void*)0));
 } else {
  VAR_30->src_vbs[0] = FUNC_8(VAR_30->fh.m2m_ctx);
  FUNC_0(VAR_30->src_vbs[0] == ((void*)0));
 }

 VAR_30->dst_vb = FUNC_6(VAR_30->fh.m2m_ctx);
 FUNC_0(VAR_30->dst_vb == ((void*)0));

 if (VAR_30->deinterlacing) {

  if (VAR_30->src_vbs[2] == ((void*)0)) {
   VAR_30->src_vbs[2] = VAR_30->src_vbs[0];
   FUNC_0(VAR_30->src_vbs[2] == ((void*)0));
   VAR_30->src_vbs[1] = VAR_30->src_vbs[0];
   FUNC_0(VAR_30->src_vbs[1] == ((void*)0));
  }





  if (VAR_30->sequence == 2)
   FUNC_3(VAR_30, 0x3);
 }


 if (VAR_30->dev->loaded_mmrs != VAR_30->mmr_adb.dma_addr || VAR_30->load_mmrs) {
  FUNC_12(VAR_30->dev->vpdma, &VAR_30->mmr_adb);
  FUNC_9(&VAR_30->desc_list, VAR_0, &VAR_30->mmr_adb);

  FUNC_5(VAR_30);

  VAR_30->dev->loaded_mmrs = VAR_30->mmr_adb.dma_addr;
  VAR_30->load_mmrs = 0;
 }

 if (VAR_31->loaded_coeff_h != VAR_30->sc_coeff_h.dma_addr ||
   VAR_31->load_coeff_h) {
  FUNC_12(VAR_30->dev->vpdma, &VAR_30->sc_coeff_h);
  FUNC_10(&VAR_30->desc_list, VAR_1,
   &VAR_30->sc_coeff_h, 0);

  VAR_31->loaded_coeff_h = VAR_30->sc_coeff_h.dma_addr;
  VAR_31->load_coeff_h = 0;
 }

 if (VAR_31->loaded_coeff_v != VAR_30->sc_coeff_v.dma_addr ||
   VAR_31->load_coeff_v) {
  FUNC_12(VAR_30->dev->vpdma, &VAR_30->sc_coeff_v);
  FUNC_10(&VAR_30->desc_list, VAR_1,
   &VAR_30->sc_coeff_v, VAR_5 >> 4);

  VAR_31->loaded_coeff_v = VAR_30->sc_coeff_v.dma_addr;
  VAR_31->load_coeff_v = 0;
 }


 if (VAR_30->deinterlacing)
  FUNC_2(VAR_30, VAR_27);

 if (VAR_32->colorspace == VAR_6) {
  FUNC_2(VAR_30, VAR_28);
 } else {
  FUNC_2(VAR_30, VAR_25);
  if (VAR_32->fmt->coplanar)
   FUNC_2(VAR_30, VAR_21);
 }


 if (VAR_30->deinterlacing) {
  FUNC_1(VAR_30, VAR_24);
  FUNC_1(VAR_30, VAR_20);

  FUNC_1(VAR_30, VAR_23);
  FUNC_1(VAR_30, VAR_19);
 }

 FUNC_1(VAR_30, VAR_22);
 FUNC_1(VAR_30, VAR_18);

 if (VAR_30->deinterlacing)
  FUNC_1(VAR_30, VAR_26);


 FUNC_11(&VAR_30->desc_list, VAR_11);
 FUNC_11(&VAR_30->desc_list, VAR_7);

 if (VAR_30->deinterlacing) {
  FUNC_11(&VAR_30->desc_list,
   VAR_12);
  FUNC_11(&VAR_30->desc_list,
   VAR_8);

  FUNC_11(&VAR_30->desc_list,
   VAR_13);
  FUNC_11(&VAR_30->desc_list,
   VAR_9);

  FUNC_11(&VAR_30->desc_list, VAR_15);
 }


 if (VAR_32->colorspace == VAR_6) {
  FUNC_11(&VAR_30->desc_list,
   VAR_17);
 } else {
  FUNC_11(&VAR_30->desc_list,
   VAR_14);
  if (VAR_32->fmt->coplanar)
   FUNC_11(&VAR_30->desc_list,
    VAR_10);
 }

 if (VAR_30->deinterlacing)
  FUNC_11(&VAR_30->desc_list, VAR_16);

 FUNC_4(VAR_30);

 FUNC_12(VAR_30->dev->vpdma, &VAR_30->desc_list.buf);
 FUNC_13(VAR_30->dev->vpdma, &VAR_30->desc_list, 0);
}
