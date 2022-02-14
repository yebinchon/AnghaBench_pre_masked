
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int u_char ;
struct xfer_info_t {int state; scalar_t__ Offset; int EraseCount; } ;
typedef int ssize_t ;
struct TYPE_5__ {int mtd; } ;
struct TYPE_7__ {int BAMOffset; void* EraseCount; int LogicalEUN; } ;
struct TYPE_6__ {int BlocksPerUnit; TYPE_1__ mbd; TYPE_3__ header; struct xfer_info_t* XferInfo; } ;
typedef TYPE_2__ partition_t ;
typedef scalar_t__ loff_t ;
typedef int header ;
typedef TYPE_3__ erase_unit_header_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int,int *,int *) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(partition_t *VAR_4, int VAR_5)
{
    erase_unit_header_t VAR_6;
    struct xfer_info_t *VAR_7;
    int VAR_8, VAR_9;
    uint32_t VAR_10;
    ssize_t VAR_11;
    loff_t VAR_12;

    VAR_7 = &VAR_4->XferInfo[VAR_5];
    VAR_7->state = VAR_2;

    FUNC_5("ftl_cs: preparing xfer unit at 0x%x\n", VAR_7->Offset);


    VAR_6 = VAR_4->header;
    VAR_6.LogicalEUN = FUNC_1(0xffff);
    VAR_6.EraseCount = FUNC_2(VAR_7->EraseCount);

    VAR_9 = FUNC_4(VAR_4->mbd.mtd, VAR_7->Offset, sizeof(VAR_6), &VAR_11,
                    (u_char *)&VAR_6);

    if (VAR_9) {
 return VAR_9;
    }


    VAR_8 = FUNC_0(VAR_4->BlocksPerUnit * sizeof(uint32_t) +
   FUNC_3(VAR_4->header.BAMOffset), VAR_1);

    VAR_12 = VAR_7->Offset + FUNC_3(VAR_4->header.BAMOffset);
    VAR_10 = FUNC_2(VAR_0);

    for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++, VAR_12 += sizeof(uint32_t)) {

 VAR_9 = FUNC_4(VAR_4->mbd.mtd, VAR_12, sizeof(uint32_t), &VAR_11,
                        (u_char *)&VAR_10);

 if (VAR_9)
     return VAR_9;
    }
    VAR_7->state = VAR_3;
    return 0;

}
