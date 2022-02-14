
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct kernel_lb_addr {int partitionReferenceNum; int logicalBlockNum; } ;
struct TYPE_5__ {int tagSerialNum; } ;
struct TYPE_4__ {int extLocation; } ;
struct fileSetDesc {TYPE_2__ descTag; TYPE_1__ rootDirectoryICB; int domainIdent; } ;
struct TYPE_6__ {int s_serial_number; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 struct kernel_lb_addr FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct super_block*,int *,char*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0, struct fileSetDesc *VAR_1,
       struct kernel_lb_addr *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0, &VAR_1->domainIdent, "file set");
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = FUNC_2(VAR_1->rootDirectoryICB.extLocation);
 FUNC_0(VAR_0)->s_serial_number = FUNC_1(VAR_1->descTag.tagSerialNum);

 FUNC_3("Rootdir at block=%u, partition=%u\n",
    VAR_2->logicalBlockNum, VAR_2->partitionReferenceNum);
 return 0;
}
