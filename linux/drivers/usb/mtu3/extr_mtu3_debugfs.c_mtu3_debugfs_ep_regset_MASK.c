
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtu3_ep {int epnum; int is_in; } ;
struct mtu3 {int mac_base; int dev; } ;
struct dentry {int dummy; } ;
struct debugfs_reg32 {char* name; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 struct debugfs_reg32* FUNC_14 (int ,int,int,int ) ;
 int FUNC_15 (struct mtu3*,int ,struct debugfs_reg32*,int,char*,struct dentry*) ;

__attribute__((used)) static void FUNC_16(struct mtu3 *VAR_1, struct mtu3_ep *VAR_2,
       struct dentry *VAR_3)
{
 struct debugfs_reg32 *VAR_4;
 int VAR_5 = VAR_2->epnum;
 int VAR_6 = VAR_2->is_in;

 VAR_4 = FUNC_14(VAR_1->dev, 7, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4[0].name = VAR_6 ? "TCR0" : "RCR0";
 VAR_4[0].offset = VAR_6 ? FUNC_3(VAR_5) : FUNC_0(VAR_5);
 VAR_4[1].name = VAR_6 ? "TCR1" : "RCR1";
 VAR_4[1].offset = VAR_6 ? FUNC_4(VAR_5) : FUNC_1(VAR_5);
 VAR_4[2].name = VAR_6 ? "TCR2" : "RCR2";
 VAR_4[2].offset = VAR_6 ? FUNC_5(VAR_5) : FUNC_2(VAR_5);
 VAR_4[3].name = VAR_6 ? "TQHIAR" : "RQHIAR";
 VAR_4[3].offset = VAR_6 ? FUNC_12(VAR_5) : FUNC_8(VAR_5);
 VAR_4[4].name = VAR_6 ? "TQCSR" : "RQCSR";
 VAR_4[4].offset = VAR_6 ? FUNC_11(VAR_5) : FUNC_7(VAR_5);
 VAR_4[5].name = VAR_6 ? "TQSAR" : "RQSAR";
 VAR_4[5].offset = VAR_6 ? FUNC_13(VAR_5) : FUNC_9(VAR_5);
 VAR_4[6].name = VAR_6 ? "TQCPR" : "RQCPR";
 VAR_4[6].offset = VAR_6 ? FUNC_10(VAR_5) : FUNC_6(VAR_5);

 FUNC_15(VAR_1, VAR_1->mac_base, VAR_4, 7, "ep-regs", VAR_3);
}
