
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned long long u64 ;
typedef int u16 ;
struct rvu {int dev; } ;
struct TYPE_4__ {int eol; int pf_func; int next; scalar_t__ index; scalar_t__ op; } ;
struct TYPE_3__ {scalar_t__ pcifunc; } ;
struct nix_aq_enq_req {int qidx; int mce_mask; TYPE_2__ mce; int op; int ctype; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rvu*,struct nix_aq_enq_req*,int *) ;

__attribute__((used)) static int FUNC_3(struct rvu *VAR_2, int VAR_3, u8 VAR_4,
    u16 VAR_5, int VAR_6, bool VAR_7)
{
 struct nix_aq_enq_req VAR_8;
 int VAR_9;

 VAR_8.hdr.pcifunc = 0;
 VAR_8.ctype = VAR_0;
 VAR_8.op = VAR_4;
 VAR_8.qidx = VAR_3;


 VAR_8.mce.op = 0;
 VAR_8.mce.index = 0;
 VAR_8.mce.eol = VAR_7;
 VAR_8.mce.pf_func = VAR_5;
 VAR_8.mce.next = VAR_6;


 *(u64 *)(&VAR_8.mce_mask) = ~0ULL;

 VAR_9 = FUNC_2(VAR_2, &VAR_8, ((void*)0));
 if (VAR_9) {
  FUNC_0(VAR_2->dev, "Failed to setup Bcast MCE for PF%d:VF%d\n",
   FUNC_1(VAR_5), VAR_5 & VAR_1);
  return VAR_9;
 }
 return 0;
}
