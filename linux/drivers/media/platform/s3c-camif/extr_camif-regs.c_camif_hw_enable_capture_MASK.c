
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ enable; } ;
struct camif_vp {int offset; int id; TYPE_2__ scaler; struct camif_dev* camif; } ;
struct camif_dev {int stream_count; TYPE_1__* variant; } ;
struct TYPE_3__ {scalar_t__ ip_revision; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct camif_dev*,int ) ;
 int FUNC_4 (struct camif_dev*,int ,int ) ;
 int FUNC_5 (char*,int ,int) ;

void FUNC_6(struct camif_vp *VAR_2)
{
 struct camif_dev *VAR_3 = VAR_2->camif;
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_3, FUNC_2(VAR_2->offset));
 VAR_3->stream_count++;

 if (VAR_3->variant->ip_revision == VAR_1)
  VAR_4 |= FUNC_0(VAR_2->id);

 if (VAR_2->scaler.enable)
  VAR_4 |= FUNC_1(VAR_2->id);

 if (VAR_3->stream_count == 1)
  VAR_4 |= VAR_0;

 FUNC_4(VAR_3, FUNC_2(VAR_2->offset), VAR_4);

 FUNC_5("CIIMGCPT: %#x, camif->stream_count: %d\n",
   VAR_4, VAR_3->stream_count);
}
