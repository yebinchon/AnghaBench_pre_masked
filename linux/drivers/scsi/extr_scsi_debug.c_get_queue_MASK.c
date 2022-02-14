
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sdebug_queue {int dummy; } ;
struct scsi_cmnd {int request; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 struct sdebug_queue* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct sdebug_queue *FUNC_4(struct scsi_cmnd *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2->request);
 u16 VAR_4 = FUNC_2(VAR_3);

 FUNC_3("tag=%#x, hwq=%d\n", VAR_3, VAR_4);
 if (FUNC_0(VAR_4 >= VAR_1))
  VAR_4 = 0;
 return VAR_0 + VAR_4;
}
