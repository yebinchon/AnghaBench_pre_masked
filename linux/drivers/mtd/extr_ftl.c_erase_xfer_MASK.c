
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct xfer_info_t {int state; int EraseCount; int Offset; } ;
struct erase_info {int len; int addr; } ;
struct TYPE_6__ {int mtd; } ;
struct TYPE_5__ {int EraseUnitSize; } ;
struct TYPE_7__ {TYPE_2__ mbd; TYPE_1__ header; struct xfer_info_t* XferInfo; } ;
typedef TYPE_3__ partition_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct erase_info*) ;
 struct erase_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct erase_info*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(partition_t *VAR_5,
        uint16_t VAR_6)
{
    int VAR_7;
    struct xfer_info_t *VAR_8;
    struct erase_info *VAR_9;

    VAR_8 = &VAR_5->XferInfo[VAR_6];
    FUNC_3("ftl_cs: erasing xfer unit at 0x%x\n", VAR_8->Offset);
    VAR_8->state = VAR_3;




    VAR_9=FUNC_1(sizeof(struct erase_info), VAR_1);
    if (!VAR_9)
            return -VAR_0;

    VAR_9->addr = VAR_8->Offset;
    VAR_9->len = 1 << VAR_5->header.EraseUnitSize;

    VAR_7 = FUNC_2(VAR_5->mbd.mtd, VAR_9);
    if (!VAR_7) {
 VAR_8->state = VAR_2;
 VAR_8->EraseCount++;
    } else {
 VAR_8->state = VAR_4;
 FUNC_4("ftl_cs: erase failed: err = %d\n", VAR_7);
    }

    FUNC_0(VAR_9);

    return VAR_7;
}
