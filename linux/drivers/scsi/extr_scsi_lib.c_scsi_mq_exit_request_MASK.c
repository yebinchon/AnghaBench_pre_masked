
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int flags; int sense_buffer; } ;
struct request {int dummy; } ;
struct blk_mq_tag_set {int dummy; } ;


 int VAR_0 ;
 struct scsi_cmnd* FUNC_0 (struct request*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_tag_set *VAR_1, struct request *VAR_2,
     unsigned int VAR_3)
{
 struct scsi_cmnd *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4->flags & VAR_0,
          VAR_4->sense_buffer);
}
