
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct nfp_cpp_explicit_command {int siga; int sigb; scalar_t__ signal_master; scalar_t__ signal_ref; scalar_t__ data_master; int data_ref; int byte_mask; int len; int cpp_id; scalar_t__ sigb_mode; scalar_t__ siga_mode; } ;
struct nfp_cpp_explicit {int dummy; } ;
struct TYPE_5__ {scalar_t__ csr; } ;
struct TYPE_4__ {scalar_t__ master_id; scalar_t__ signal_ref; } ;
struct nfp6000_pcie {int pdev; TYPE_2__ iomem; TYPE_1__ expl; } ;
struct TYPE_6__ {int group; int area; } ;
struct nfp6000_explicit_priv {int bitsize; scalar_t__ addr; TYPE_3__ bar; struct nfp6000_pcie* nfp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ) ;
 struct nfp6000_explicit_priv* FUNC_17 (struct nfp_cpp_explicit*) ;
 int FUNC_18 (int ,scalar_t__,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_22(struct nfp_cpp_explicit *VAR_0,
      const struct nfp_cpp_explicit_command *VAR_1, u64 VAR_2)
{
 struct nfp6000_explicit_priv *VAR_3 = FUNC_17(VAR_0);
 u8 VAR_4, VAR_5, VAR_6;
 struct nfp6000_pcie *VAR_7 = VAR_3->nfp;
 int VAR_8 = 0;
 u16 VAR_9;
 u32 VAR_10[3];

 if (VAR_1->siga_mode)
  VAR_8 |= 1 << VAR_1->siga;
 if (VAR_1->sigb_mode)
  VAR_8 |= 1 << VAR_1->sigb;

 VAR_4 = VAR_1->signal_master;
 if (!VAR_4)
  VAR_4 = VAR_7->expl.master_id;

 VAR_5 = VAR_1->signal_ref;
 if (VAR_4 == VAR_7->expl.master_id)
  VAR_5 = VAR_7->expl.signal_ref +
   ((VAR_3->bar.group * 4 + VAR_3->bar.area) << 1);

 VAR_6 = VAR_1->data_master;
 if (!VAR_6)
  VAR_6 = VAR_7->expl.master_id;

 VAR_9 = VAR_1->data_ref;
 if (VAR_6 == VAR_7->expl.master_id)
  VAR_9 = 0x1000 +
   (VAR_3->bar.group << 9) + (VAR_3->bar.area << 7);

 VAR_10[0] = FUNC_5(VAR_8) |
  FUNC_6(
   FUNC_2(VAR_1->cpp_id)) |
  FUNC_4(VAR_2 >> 16);

 VAR_10[1] = FUNC_10(VAR_5) |
  FUNC_8(VAR_6) |
  FUNC_9(VAR_9);

 VAR_10[2] = FUNC_16(
   FUNC_1(VAR_1->cpp_id)) |
  FUNC_12(
   FUNC_0(VAR_1->cpp_id)) |
  FUNC_14(VAR_1->len) |
  FUNC_13(VAR_1->byte_mask) |
  FUNC_15(VAR_4);

 if (VAR_7->iomem.csr) {
  FUNC_21(VAR_10[0], VAR_7->iomem.csr +
         FUNC_3(VAR_3->bar.group,
        VAR_3->bar.area));
  FUNC_21(VAR_10[1], VAR_7->iomem.csr +
         FUNC_7(VAR_3->bar.group,
        VAR_3->bar.area));
  FUNC_21(VAR_10[2], VAR_7->iomem.csr +
         FUNC_11(VAR_3->bar.group,
        VAR_3->bar.area));

  FUNC_20(VAR_7->iomem.csr +
        FUNC_3(VAR_3->bar.group,
       VAR_3->bar.area));
  FUNC_20(VAR_7->iomem.csr +
        FUNC_7(VAR_3->bar.group,
       VAR_3->bar.area));
  FUNC_20(VAR_7->iomem.csr +
        FUNC_11(VAR_3->bar.group,
       VAR_3->bar.area));
 } else {
  FUNC_18(VAR_7->pdev, 0x400 +
           FUNC_3(
            VAR_3->bar.group, VAR_3->bar.area),
           VAR_10[0]);

  FUNC_18(VAR_7->pdev, 0x400 +
           FUNC_7(
            VAR_3->bar.group, VAR_3->bar.area),
           VAR_10[1]);

  FUNC_18(VAR_7->pdev, 0x400 +
           FUNC_11(
            VAR_3->bar.group, VAR_3->bar.area),
           VAR_10[2]);
 }


 FUNC_19(VAR_3->addr + (VAR_2 & ((1 << VAR_3->bitsize) - 1)));

 return VAR_8;
}
