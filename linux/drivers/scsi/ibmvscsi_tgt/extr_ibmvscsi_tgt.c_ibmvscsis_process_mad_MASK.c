
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tag; } ;
struct viosrp_empty_iu {TYPE_2__ common; int buffer; } ;
struct scsi_info {int fast_fail; int dev; int state; void* empty_iu_tag; void* empty_iu_id; } ;
struct mad_common {void* status; int type; } ;
struct iu_entry {int dummy; } ;
struct TYPE_4__ {struct viosrp_empty_iu empty_iu; } ;
struct TYPE_6__ {TYPE_1__ mad; } ;


 long VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 long FUNC_4 (struct scsi_info*,struct iu_entry*) ;
 long FUNC_5 (struct scsi_info*,struct iu_entry*) ;
 TYPE_3__* FUNC_6 (struct iu_entry*) ;

__attribute__((used)) static long FUNC_7(struct scsi_info *VAR_5, struct iu_entry *VAR_6)
{
 struct mad_common *VAR_7 = (struct mad_common *)&FUNC_6(VAR_6)->mad;
 struct viosrp_empty_iu *VAR_8;
 long VAR_9 = VAR_0;

 switch (FUNC_0(VAR_7->type)) {
 case 129:
  VAR_8 = &FUNC_6(VAR_6)->mad.empty_iu;
  VAR_5->empty_iu_id = FUNC_1(VAR_8->buffer);
  VAR_5->empty_iu_tag = FUNC_1(VAR_8->common.tag);
  VAR_7->status = FUNC_2(VAR_4);
  break;
 case 131:
  VAR_9 = FUNC_4(VAR_5, VAR_6);
  break;
 case 130:
  VAR_9 = FUNC_5(VAR_5, VAR_6);
  break;
 case 128:
  if (VAR_5->state == VAR_1) {
   VAR_5->fast_fail = 1;
   VAR_7->status = FUNC_2(VAR_4);
  } else {
   FUNC_3(&VAR_5->dev, "fast fail mad sent after login\n");
   VAR_7->status = FUNC_2(VAR_2);
  }
  break;
 default:
  VAR_7->status = FUNC_2(VAR_3);
  break;
 }

 return VAR_9;
}
