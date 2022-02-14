
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nents; int sgl; } ;
struct scsi_data_buffer {int length; TYPE_1__ table; } ;
struct request {int q; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct request*,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static blk_status_t FUNC_6(struct request *VAR_3,
  struct scsi_data_buffer *VAR_4)
{
 int VAR_5;




 if (FUNC_5(FUNC_4(&VAR_4->table,
   FUNC_2(VAR_3), VAR_4->table.sgl,
   VAR_2)))
  return VAR_1;





 VAR_5 = FUNC_1(VAR_3->q, VAR_3, VAR_4->table.sgl);
 FUNC_0(VAR_5 > VAR_4->table.nents);
 VAR_4->table.nents = VAR_5;
 VAR_4->length = FUNC_3(VAR_3);
 return VAR_0;
}
