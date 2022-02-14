
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int len; int data_len; int end; int tail; scalar_t__ cb; scalar_t__ data; } ;
struct brcmf_sdio_dev {TYPE_1__* func2; } ;
struct brcmf_sdio {unsigned int sgentry_align; scalar_t__ head_align; struct brcmf_sdio_dev* sdiodev; } ;
struct TYPE_2__ {unsigned int cur_blksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*,struct sk_buff*) ;
 int FUNC_3 (struct brcmf_sdio*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct brcmf_sdio *VAR_3,
        struct sk_buff_head *VAR_4,
        struct sk_buff *VAR_5, u16 VAR_6)
{
 struct brcmf_sdio_dev *VAR_7;
 struct sk_buff *VAR_8;
 u16 VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12;
 bool VAR_13;
 int VAR_14, VAR_15;

 VAR_7 = VAR_3->sdiodev;
 VAR_12 = VAR_7->func2->cur_blksize;

 FUNC_0(VAR_12 % VAR_3->sgentry_align);


 VAR_13 = FUNC_10(VAR_4, VAR_5);
 VAR_9 = 0;
 VAR_10 = VAR_5->len % VAR_3->sgentry_align;
 if (VAR_10)
  VAR_9 = VAR_3->sgentry_align - VAR_10;
 VAR_11 = (VAR_6 + VAR_9) % VAR_12;
 if (VAR_13 && VAR_11)
  VAR_9 += VAR_12 - VAR_11;
 if (FUNC_11(VAR_5) < VAR_9 && VAR_5->len > VAR_12) {
  VAR_8 = FUNC_4(VAR_9 + VAR_10 +
      VAR_3->head_align);
  if (VAR_8 == ((void*)0))
   return -VAR_1;
  VAR_15 = FUNC_3(VAR_3, VAR_8);
  if (FUNC_13(VAR_15 < 0)) {
   FUNC_5(VAR_8);
   return VAR_15;
  }
  FUNC_6(VAR_8->data,
         VAR_5->data + VAR_5->len - VAR_10,
         VAR_10);
  *(u16 *)(VAR_8->cb) = VAR_0 + VAR_10;
  FUNC_12(VAR_5, VAR_5->len - VAR_10);
  FUNC_12(VAR_8, VAR_9 + VAR_10);
  FUNC_2(VAR_4, VAR_5, VAR_8);
 } else {
  VAR_14 = VAR_5->data_len + VAR_9 -
   (VAR_5->end - VAR_5->tail);
  if (FUNC_8(VAR_5) || VAR_14 > 0)
   if (FUNC_7(VAR_5, 0, VAR_14, VAR_2))
    return -VAR_1;
  if (FUNC_9(VAR_5))
   return -VAR_1;
  FUNC_1(VAR_5, VAR_9);
 }

 return VAR_9;
}
