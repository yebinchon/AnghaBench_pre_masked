
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_if {TYPE_1__* drvr; int ifidx; } ;
typedef int s32 ;
struct TYPE_2__ {int proto_block; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ,void*,int ,char*) ;
 int FUNC_3 (struct brcmf_if*,int ,void*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

s32
FUNC_7(struct brcmf_if *VAR_3, u32 VAR_4, void *VAR_5, u32 VAR_6)
{
 s32 VAR_7;

 FUNC_5(&VAR_3->drvr->proto_block);
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, 0);

 FUNC_1(VAR_0, "ifidx=%d, cmd=%d, len=%d\n", VAR_3->ifidx, VAR_4, VAR_6);
 FUNC_2(FUNC_0(), VAR_5,
      FUNC_4(VAR_2, VAR_6, VAR_1), "data\n");

 FUNC_6(&VAR_3->drvr->proto_block);

 return VAR_7;
}
