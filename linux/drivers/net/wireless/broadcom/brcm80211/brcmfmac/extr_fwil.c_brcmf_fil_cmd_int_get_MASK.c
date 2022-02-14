
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_if {int ifidx; TYPE_1__* drvr; } ;
typedef int s32 ;
typedef int data_le ;
typedef int __le32 ;
struct TYPE_2__ {int proto_block; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct brcmf_if*,int ,int *,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

s32
FUNC_6(struct brcmf_if *VAR_1, u32 VAR_2, u32 *VAR_3)
{
 s32 VAR_4;
 __le32 VAR_5 = FUNC_2(*VAR_3);

 FUNC_4(&VAR_1->drvr->proto_block);
 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_5, sizeof(VAR_5), 0);
 FUNC_5(&VAR_1->drvr->proto_block);
 *VAR_3 = FUNC_3(VAR_5);
 FUNC_0(VAR_0, "ifidx=%d, cmd=%d, value=%d\n", VAR_1->ifidx, VAR_2, *VAR_3);

 return VAR_4;
}
