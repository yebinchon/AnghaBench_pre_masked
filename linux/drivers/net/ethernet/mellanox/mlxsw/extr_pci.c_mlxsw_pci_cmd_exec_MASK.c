
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int tmp ;
struct TYPE_7__ {char* buf; int mapaddr; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {char* buf; int mapaddr; } ;
struct TYPE_8__ {int nopoll; int wait_done; int lock; TYPE_3__ out_mbox; TYPE_2__ comp; int wait; TYPE_1__ in_mbox; } ;
struct mlxsw_pci {TYPE_4__ cmd; } ;
typedef int dma_addr_t ;
typedef char __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 char FUNC_1 (int) ;
 unsigned long VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (struct mlxsw_pci*,int ) ;
 int FUNC_5 (struct mlxsw_pci*,int ,int) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,unsigned long) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(void *VAR_16, u16 VAR_17, u8 VAR_18,
         u32 VAR_19, bool VAR_20,
         char *VAR_21, size_t VAR_22,
         char *VAR_23, size_t VAR_24,
         u8 *VAR_25)
{
 struct mlxsw_pci *VAR_26 = VAR_16;
 dma_addr_t VAR_27 = 0, VAR_28 = 0;
 bool VAR_29 = VAR_26->cmd.nopoll;
 unsigned long VAR_30 = FUNC_6(VAR_14);
 bool *VAR_31 = &VAR_26->cmd.wait_done;
 int VAR_32;

 *VAR_25 = VAR_9;

 VAR_32 = FUNC_7(&VAR_26->cmd.lock);
 if (VAR_32)
  return VAR_32;

 if (VAR_21) {
  FUNC_3(VAR_26->cmd.in_mbox.buf, VAR_21, VAR_22);
  VAR_27 = VAR_26->cmd.in_mbox.mapaddr;
 }
 FUNC_5(VAR_26, VAR_2, FUNC_10(VAR_27));
 FUNC_5(VAR_26, VAR_3, FUNC_2(VAR_27));

 if (VAR_23)
  VAR_28 = VAR_26->cmd.out_mbox.mapaddr;
 FUNC_5(VAR_26, VAR_4, FUNC_10(VAR_28));
 FUNC_5(VAR_26, VAR_5, FUNC_2(VAR_28));

 FUNC_5(VAR_26, VAR_1, VAR_19);
 FUNC_5(VAR_26, VAR_6, 0);

 *VAR_31 = 0;

 FUNC_12();
 FUNC_5(VAR_26, VAR_0,
     VAR_11 |
     (VAR_29 ? VAR_10 : 0) |
     (VAR_18 << VAR_12) |
     VAR_17);

 if (!VAR_29) {
  unsigned long VAR_33;

  VAR_33 = VAR_15 + VAR_30;
  do {
   u32 VAR_34 = FUNC_4(VAR_26, VAR_0);

   if (!(VAR_34 & VAR_11)) {
    *VAR_31 = 1;
    *VAR_25 = VAR_34 >> VAR_13;
    break;
   }
   FUNC_0();
  } while (FUNC_9(VAR_15, VAR_33));
 } else {
  FUNC_11(VAR_26->cmd.wait, *VAR_31, VAR_30);
  *VAR_25 = VAR_26->cmd.comp.status;
 }

 VAR_32 = 0;
 if (*VAR_31) {
  if (*VAR_25)
   VAR_32 = -VAR_7;
 } else {
  VAR_32 = -VAR_8;
 }

 if (!VAR_32 && VAR_23 && VAR_20) {




  __be32 VAR_35;

  if (!VAR_29) {
   VAR_35 = FUNC_1(FUNC_4(VAR_26,
          VAR_4));
   FUNC_3(VAR_23, &VAR_35, sizeof(VAR_35));
   VAR_35 = FUNC_1(FUNC_4(VAR_26,
          VAR_5));
   FUNC_3(VAR_23 + sizeof(VAR_35), &VAR_35, sizeof(VAR_35));
  }
 } else if (!VAR_32 && VAR_23) {
  FUNC_3(VAR_23, VAR_26->cmd.out_mbox.buf, VAR_24);
 }

 FUNC_8(&VAR_26->cmd.lock);

 return VAR_32;
}
