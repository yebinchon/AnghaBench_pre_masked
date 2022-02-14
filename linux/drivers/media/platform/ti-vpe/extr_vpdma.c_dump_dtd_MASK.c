
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpdma_dtd {int * client_attr1; int * client_attr0; int start_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vpdma_dtd*) ;
 int FUNC_1 (struct vpdma_dtd*) ;
 int FUNC_2 (struct vpdma_dtd*) ;
 int FUNC_3 (struct vpdma_dtd*) ;
 int FUNC_4 (struct vpdma_dtd*) ;
 int FUNC_5 (struct vpdma_dtd*) ;
 int FUNC_6 (struct vpdma_dtd*) ;
 int FUNC_7 (struct vpdma_dtd*) ;
 int FUNC_8 (struct vpdma_dtd*) ;
 int FUNC_9 (struct vpdma_dtd*) ;
 int FUNC_10 (struct vpdma_dtd*) ;
 int FUNC_11 (struct vpdma_dtd*) ;
 int FUNC_12 (struct vpdma_dtd*) ;
 int FUNC_13 (struct vpdma_dtd*) ;
 int FUNC_14 (struct vpdma_dtd*) ;
 int FUNC_15 (struct vpdma_dtd*) ;
 int FUNC_16 (struct vpdma_dtd*) ;
 int FUNC_17 (struct vpdma_dtd*) ;
 int FUNC_18 (struct vpdma_dtd*) ;
 int FUNC_19 (struct vpdma_dtd*) ;
 int FUNC_20 (struct vpdma_dtd*) ;
 int FUNC_21 (struct vpdma_dtd*) ;
 int FUNC_22 (struct vpdma_dtd*) ;
 int FUNC_23 (struct vpdma_dtd*) ;
 int FUNC_24 (struct vpdma_dtd*) ;
 int FUNC_25 (char*,char*,...) ;

__attribute__((used)) static void FUNC_26(struct vpdma_dtd *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 VAR_4 = FUNC_1(VAR_2);

 FUNC_25("%s data transfer descriptor for channel %d\n",
  VAR_3 == VAR_1 ? "outbound" : "inbound", VAR_4);

 FUNC_25("word0: data_type = %d, notify = %d, field = %d, 1D = %d, even_ln_skp = %d, odd_ln_skp = %d, line_stride = %d\n",
  FUNC_2(VAR_2), FUNC_17(VAR_2), FUNC_7(VAR_2),
  FUNC_0(VAR_2), FUNC_6(VAR_2),
  FUNC_18(VAR_2), FUNC_12(VAR_2));

 if (VAR_3 == VAR_0)
  FUNC_25("word1: line_length = %d, xfer_height = %d\n",
   FUNC_11(VAR_2), FUNC_24(VAR_2));

 FUNC_25("word2: start_addr = %pad\n", &VAR_2->start_addr);

 FUNC_25("word3: pkt_type = %d, mode = %d, dir = %d, chan = %d, pri = %d, next_chan = %d\n",
   FUNC_19(VAR_2),
   FUNC_15(VAR_2), VAR_3, VAR_4, FUNC_20(VAR_2),
   FUNC_16(VAR_2));

 if (VAR_3 == VAR_0)
  FUNC_25("word4: frame_width = %d, frame_height = %d\n",
   FUNC_9(VAR_2), FUNC_8(VAR_2));
 else
  FUNC_25("word4: desc_write_addr = 0x%08x, write_desc = %d, drp_data = %d, use_desc_reg = %d\n",
   FUNC_3(VAR_2), FUNC_23(VAR_2),
   FUNC_5(VAR_2), FUNC_21(VAR_2));

 if (VAR_3 == VAR_0)
  FUNC_25("word5: hor_start = %d, ver_start = %d\n",
   FUNC_10(VAR_2), FUNC_22(VAR_2));
 else
  FUNC_25("word5: max_width %d, max_height %d\n",
   FUNC_14(VAR_2), FUNC_13(VAR_2));

 FUNC_25("word6: client specific attr0 = 0x%08x\n", VAR_2->client_attr0);
 FUNC_25("word7: client specific attr1 = 0x%08x\n", VAR_2->client_attr1);
}
