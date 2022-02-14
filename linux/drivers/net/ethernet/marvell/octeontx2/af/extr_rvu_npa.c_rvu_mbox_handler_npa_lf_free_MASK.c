
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_pfvf {int npalf; } ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {int dummy; } ;
struct rvu {int dev; struct rvu_hwinfo* hw; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct msg_req {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rvu*,struct rvu_pfvf*) ;
 int FUNC_2 (struct rvu*,int ,int ) ;
 int FUNC_3 (struct rvu*,struct rvu_block*,int ,int ) ;
 struct rvu_pfvf* FUNC_4 (struct rvu*,int ) ;
 int FUNC_5 (struct rvu*,struct rvu_block*,int) ;

int FUNC_6(struct rvu *VAR_3, struct msg_req *VAR_4,
     struct msg_rsp *VAR_5)
{
 struct rvu_hwinfo *VAR_6 = VAR_3->hw;
 u16 VAR_7 = VAR_4->hdr.pcifunc;
 struct rvu_block *VAR_8;
 struct rvu_pfvf *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = FUNC_4(VAR_3, VAR_7);
 VAR_12 = FUNC_2(VAR_3, VAR_0, VAR_7);
 if (!VAR_9->npalf || VAR_12 < 0)
  return VAR_1;

 VAR_8 = &VAR_6->block[VAR_12];
 VAR_10 = FUNC_3(VAR_3, VAR_8, VAR_7, 0);
 if (VAR_10 < 0)
  return VAR_1;


 VAR_11 = FUNC_5(VAR_3, VAR_8, VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_3->dev, "Failed to reset NPALF%d\n", VAR_10);
  return VAR_2;
 }

 FUNC_1(VAR_3, VAR_9);

 return 0;
}
