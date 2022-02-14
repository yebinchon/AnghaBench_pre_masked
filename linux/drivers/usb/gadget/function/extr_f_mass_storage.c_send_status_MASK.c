
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct fsg_lun {scalar_t__ sense_data; scalar_t__ sense_data_info; } ;
struct fsg_common {struct fsg_buffhd* next_buffhd_to_fill; int residue; int tag; scalar_t__ phase_error; scalar_t__ bad_lun_okay; struct fsg_lun* curlun; } ;
struct fsg_buffhd {struct fsg_buffhd* next; TYPE_1__* inreq; scalar_t__ buf; } ;
struct bulk_cs_wrap {int Status; void* Residue; int Tag; void* Signature; } ;
struct TYPE_2__ {scalar_t__ zero; int length; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fsg_common*,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct fsg_common*,char*,int ,int ,int ,scalar_t__) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct fsg_common*,int,struct fsg_buffhd*) ;
 int FUNC_7 (struct fsg_common*,struct fsg_buffhd*) ;

__attribute__((used)) static void FUNC_8(struct fsg_common *VAR_8)
{
 struct fsg_lun *VAR_9 = VAR_8->curlun;
 struct fsg_buffhd *VAR_10;
 struct bulk_cs_wrap *VAR_11;
 int VAR_12;
 u8 VAR_13 = VAR_6;
 u32 VAR_14, VAR_15 = 0;


 VAR_10 = VAR_8->next_buffhd_to_fill;
 VAR_12 = FUNC_6(VAR_8, 0, VAR_10);
 if (VAR_12)
  return;

 if (VAR_9) {
  VAR_14 = VAR_9->sense_data;
  VAR_15 = VAR_9->sense_data_info;
 } else if (VAR_8->bad_lun_okay)
  VAR_14 = VAR_2;
 else
  VAR_14 = VAR_1;

 if (VAR_8->phase_error) {
  FUNC_2(VAR_8, "sending phase-error status\n");
  VAR_13 = VAR_7;
  VAR_14 = VAR_0;
 } else if (VAR_14 != VAR_2) {
  FUNC_2(VAR_8, "sending command-failure status\n");
  VAR_13 = VAR_5;
  FUNC_4(VAR_8, "  sense data: SK x%02x, ASC x%02x, ASCQ x%02x;"
    "  info x%x\n",
    FUNC_3(VAR_14), FUNC_0(VAR_14), FUNC_1(VAR_14), VAR_15);
 }


 VAR_11 = (void *)VAR_10->buf;

 VAR_11->Signature = FUNC_5(VAR_3);
 VAR_11->Tag = VAR_8->tag;
 VAR_11->Residue = FUNC_5(VAR_8->residue);
 VAR_11->Status = VAR_13;

 VAR_10->inreq->length = VAR_4;
 VAR_10->inreq->zero = 0;
 if (!FUNC_7(VAR_8, VAR_10))

  return;

 VAR_8->next_buffhd_to_fill = VAR_10->next;
 return;
}
