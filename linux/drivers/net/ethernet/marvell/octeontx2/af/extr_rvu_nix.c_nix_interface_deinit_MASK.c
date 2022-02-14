
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rvu_pfvf {int rxvlan; scalar_t__ minlen; scalar_t__ maxlen; } ;
struct rvu {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct rvu*,int ,int) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;
 int FUNC_3 (struct rvu*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rvu *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct rvu_pfvf *VAR_3 = FUNC_2(VAR_0, VAR_1);
 int VAR_4;

 VAR_3->maxlen = 0;
 VAR_3->minlen = 0;
 VAR_3->rxvlan = 0;


 VAR_4 = FUNC_1(VAR_0, VAR_1, 0);
 if (VAR_4) {
  FUNC_0(VAR_0->dev,
   "Bcast list, failed to disable PF_FUNC 0x%x\n",
   VAR_1);
 }


 FUNC_3(VAR_0, VAR_1, VAR_2);
}
