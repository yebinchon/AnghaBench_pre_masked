
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_pfvf {int nixlf; } ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {scalar_t__ addr; } ;
struct rvu {int dev; struct rvu_hwinfo* hw; } ;
struct msg_rsp {int dummy; } ;
struct TYPE_2__ {int pcifunc; } ;
struct msg_req {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct rvu*,struct rvu_pfvf*) ;
 int FUNC_2 (struct rvu*,int ,int) ;
 int FUNC_3 (struct rvu*,int ,int ) ;
 int FUNC_4 (struct rvu*,struct rvu_block*,int ,int ) ;
 struct rvu_pfvf* FUNC_5 (struct rvu*,int ) ;
 int FUNC_6 (struct rvu*,struct rvu_block*,int) ;

int FUNC_7(struct rvu *VAR_4, struct msg_req *VAR_5,
     struct msg_rsp *VAR_6)
{
 struct rvu_hwinfo *VAR_7 = VAR_4->hw;
 u16 VAR_8 = VAR_5->hdr.pcifunc;
 struct rvu_block *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct rvu_pfvf *VAR_13;

 VAR_13 = FUNC_5(VAR_4, VAR_8);
 VAR_10 = FUNC_3(VAR_4, VAR_1, VAR_8);
 if (!VAR_13->nixlf || VAR_10 < 0)
  return VAR_2;

 VAR_9 = &VAR_7->block[VAR_10];
 VAR_11 = FUNC_4(VAR_4, VAR_9, VAR_8, 0);
 if (VAR_11 < 0)
  return VAR_2;

 FUNC_2(VAR_4, VAR_8, VAR_11);


 VAR_12 = FUNC_6(VAR_4, VAR_9, VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_4->dev, "Failed to reset NIX%d LF%d\n",
   VAR_9->addr - VAR_0, VAR_11);
  return VAR_3;
 }

 FUNC_1(VAR_4, VAR_13);

 return 0;
}
