
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct htc_target {struct ath6kl_device* dev; } ;
struct TYPE_5__ {int exp_hdr; } ;
struct TYPE_6__ {TYPE_1__ rx; } ;
struct htc_packet {int status; int buf; TYPE_2__ info; int buf_len; } ;
struct ath6kl_device {TYPE_4__* ar; } ;
struct TYPE_7__ {int htc_addr; } ;
struct TYPE_8__ {TYPE_3__ mbox_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct htc_target*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,struct htc_packet*,int ,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct htc_target *VAR_3,
    struct htc_packet *VAR_4,
    u32 VAR_5)
{
 struct ath6kl_device *VAR_6 = VAR_3->dev;
 u32 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_3, VAR_5);

 if (VAR_7 > VAR_4->buf_len) {
  FUNC_2("not enough receive space for packet - padlen %d recvlen %d bufferlen %d\n",
      VAR_7, VAR_5, VAR_4->buf_len);
  return -VAR_1;
 }

 FUNC_1(VAR_0,
     "htc rx 0x%p hdr 0x%x len %d mbox 0x%x\n",
     VAR_4, VAR_4->info.rx.exp_hdr,
     VAR_7, VAR_6->ar->mbox_info.htc_addr);

 VAR_8 = FUNC_3(VAR_6->ar,
         VAR_6->ar->mbox_info.htc_addr,
         VAR_4->buf, VAR_7,
         VAR_2);

 VAR_4->status = VAR_8;

 return VAR_8;
}
