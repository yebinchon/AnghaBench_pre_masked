
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcmf_sdio_hdrinfo {int len; int lastfrm; int seq_num; int channel; int dat_offset; scalar_t__ tail_pad; } ;
struct brcmf_sdio {scalar_t__ txglom; } ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int*) ;

__attribute__((used)) static void FUNC_3(struct brcmf_sdio *VAR_7, u8 *VAR_8,
         struct brcmf_sdio_hdrinfo *VAR_9)
{
 u32 VAR_10;
 u8 VAR_11;

 FUNC_0(VAR_8, VAR_9->len);
 VAR_11 = VAR_5;

 if (VAR_7->txglom) {
  VAR_10 = (VAR_9->len - VAR_11) | (VAR_9->lastfrm << 24);
  *((__le32 *)(VAR_8 + VAR_11)) = FUNC_1(VAR_10);
  VAR_10 = (u16)VAR_9->tail_pad << 16;
  *(((__le32 *)(VAR_8 + VAR_11)) + 1) = FUNC_1(VAR_10);
  VAR_11 += VAR_4;
 }

 VAR_10 = VAR_9->seq_num;
 VAR_10 |= (VAR_9->channel << VAR_1) &
    VAR_0;
 VAR_10 |= (VAR_9->dat_offset << VAR_3) &
    VAR_2;
 *((__le32 *)(VAR_8 + VAR_11)) = FUNC_1(VAR_10);
 *(((__le32 *)(VAR_8 + VAR_11)) + 1) = 0;
 FUNC_2(VAR_6 + !!(VAR_7->txglom), VAR_8);
}
