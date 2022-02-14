
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int frame_len; int need_ack; struct vnt_private* priv; } ;
struct vnt_private {int sifs; int top_ofdm_basic_rate; int preamble_type; int top_cck_basic_rate; } ;
typedef int __le16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (struct vnt_private*,int,int,int ,int) ;

__attribute__((used)) static __le16 FUNC_3(struct vnt_usb_send_context *VAR_0,
      u8 VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct vnt_private *VAR_4 = VAR_0->priv;
 u32 VAR_5 = 0, VAR_6 = 0;
 u32 VAR_7 = VAR_0->frame_len;
 u8 VAR_8 = VAR_0->need_ack;

 switch (VAR_1) {
 case 128:
 case 131:
 case 130:
 case 129:
  VAR_5 = FUNC_1(VAR_4->preamble_type, VAR_2,
           14, VAR_4->top_cck_basic_rate);
  VAR_6 = VAR_5 + 2 * VAR_4->sifs +
   FUNC_2(VAR_4, VAR_2,
     VAR_7, VAR_3, VAR_8);
  break;

 case 134:
 case 133:
 case 132:
  VAR_5 = FUNC_1(VAR_4->preamble_type, VAR_2,
           14, VAR_4->top_ofdm_basic_rate);
  VAR_6 = VAR_5 + 2 * VAR_4->sifs +
   FUNC_2(VAR_4, VAR_2,
     VAR_7, VAR_3, VAR_8);
  break;

 case 137:
 case 136:
 case 135:
  VAR_6 = VAR_4->sifs + FUNC_2(VAR_4,
    VAR_2, VAR_7, VAR_3, VAR_8);
  break;

 default:
  break;
 }

 return FUNC_0((u16)VAR_6);
}
