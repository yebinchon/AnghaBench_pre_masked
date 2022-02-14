
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xmit_priv {int frag_len; } ;
struct pkt_attrib {int ether_type; int dhcp_pkt; int nr_frags; int icv_len; int last_txcmdsz; } ;
struct xmit_frame {scalar_t__ frame_tag; int * buf_addr; struct pkt_attrib attrib; struct xmit_buf* pxmitbuf; } ;
struct xmit_buf {int sctx; } ;
struct adapter {struct xmit_priv xmitpriv; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int FUNC_2 (struct adapter*,struct xmit_frame*,int) ;
 int FUNC_3 (struct xmit_priv*,struct xmit_frame*) ;
 int FUNC_4 (struct xmit_frame*) ;
 int FUNC_5 (struct adapter*,struct xmit_frame*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct xmit_frame*,int *,int,int) ;
 scalar_t__ FUNC_8 (struct adapter*,int ,int,struct xmit_buf*) ;

__attribute__((used)) static s32 FUNC_9(struct adapter *VAR_9, struct xmit_frame *VAR_10)
{
 s32 VAR_11 = VAR_5;
 s32 VAR_12 = VAR_5;
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 u8 *VAR_17;
 u32 VAR_18;
 struct xmit_buf *VAR_19 = VAR_10->pxmitbuf;
 struct pkt_attrib *VAR_20 = &VAR_10->attrib;
 struct xmit_priv *VAR_21 = &VAR_9->xmitpriv;

 if ((VAR_10->frame_tag == VAR_0) &&
     (VAR_10->attrib.ether_type != 0x0806) &&
     (VAR_10->attrib.ether_type != 0x888e) &&
     (VAR_10->attrib.ether_type != 0x88b4) &&
     (VAR_10->attrib.dhcp_pkt != 1))
  FUNC_5(VAR_9, VAR_10);
 VAR_17 = VAR_10->buf_addr;

 FUNC_0(VAR_8, VAR_7, ("rtw_dump_xframe()\n"));

 for (VAR_13 = 0; VAR_13 < VAR_20->nr_frags; VAR_13++) {
  if (VAR_12 != VAR_5 && VAR_11 == VAR_5)
   VAR_11 = VAR_4;

  if (VAR_13 != (VAR_20->nr_frags - 1)) {
   FUNC_0(VAR_8, VAR_6, ("pattrib->nr_frags=%d\n", VAR_20->nr_frags));

   VAR_14 = VAR_21->frag_len;
   VAR_14 = VAR_14 - 4 - VAR_20->icv_len;
  } else {

   VAR_14 = VAR_20->last_txcmdsz;
  }

  VAR_16 = FUNC_7(VAR_10, VAR_17, VAR_14, 0);

  if (VAR_16) {
   VAR_17 += VAR_1;
   VAR_10->buf_addr = VAR_17;
   VAR_15 = VAR_14 + VAR_3;
  } else {
   VAR_15 = VAR_14 + VAR_3 + VAR_1;
  }
  VAR_18 = FUNC_4(VAR_10);

  VAR_12 = FUNC_8(VAR_9, VAR_18, VAR_15, VAR_19);

  FUNC_2(VAR_9, VAR_10, VAR_14);

  FUNC_0(VAR_8, VAR_7, ("rtw_write_port, w_sz=%d\n", VAR_15));

  VAR_17 += VAR_15;

  VAR_17 = (u8 *)FUNC_1((size_t)VAR_17, 4);
 }

 FUNC_3(VAR_21, VAR_10);

 if (VAR_11 != VAR_5)
  FUNC_6(&VAR_19->sctx, VAR_2);

 return VAR_11;
}
