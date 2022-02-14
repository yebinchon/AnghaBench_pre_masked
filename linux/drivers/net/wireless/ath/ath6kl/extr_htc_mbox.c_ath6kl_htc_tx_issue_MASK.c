
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct htc_target {TYPE_4__* dev; } ;
struct TYPE_7__ {int seqno; } ;
struct TYPE_8__ {TYPE_1__ tx; } ;
struct htc_packet {int status; int buf; int endpoint; TYPE_2__ info; scalar_t__ act_len; int completion; } ;
struct TYPE_9__ {int htc_addr; } ;
struct TYPE_11__ {TYPE_3__ mbox_info; } ;
struct TYPE_10__ {TYPE_5__* ar; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct htc_target*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__,int ,scalar_t__,int ,char*) ;
 int FUNC_2 (TYPE_5__*,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ,scalar_t__,int ,struct htc_packet*) ;
 int FUNC_4 (int,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct htc_target *VAR_4,
          struct htc_packet *VAR_5)
{
 int VAR_6;
 bool VAR_7 = 0;
 u32 VAR_8, VAR_9;

 if (!VAR_5->completion)
  VAR_7 = 1;

 VAR_9 = VAR_5->act_len + VAR_3;

 VAR_8 = FUNC_0(VAR_4, VAR_9);

 FUNC_1(VAR_0,
     "htc tx issue len %d seqno %d padded_len %d mbox 0x%X %s\n",
     VAR_9, VAR_5->info.tx.seqno, VAR_8,
     VAR_4->dev->ar->mbox_info.htc_addr,
     VAR_7 ? "sync" : "async");

 if (VAR_7) {
  VAR_6 = FUNC_2(VAR_4->dev->ar,
    VAR_4->dev->ar->mbox_info.htc_addr,
     VAR_5->buf, VAR_8,
     VAR_2);

  VAR_5->status = VAR_6;
  VAR_5->buf += VAR_3;
 } else
  VAR_6 = FUNC_3(VAR_4->dev->ar,
    VAR_4->dev->ar->mbox_info.htc_addr,
    VAR_5->buf, VAR_8,
    VAR_1, VAR_5);

 FUNC_4(VAR_6, VAR_5->endpoint, VAR_5->buf, VAR_9);

 return VAR_6;
}
