
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qm_ecir2 {void* info; } ;
struct qm_ecir {void* info; } ;
struct qm_eadr {void* info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {char* txt; int addr_mask; int bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,char*,...) ;
 TYPE_1__* VAR_9 ;
 int FUNC_1 (struct device*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct qm_eadr*) ;
 int FUNC_4 (struct qm_eadr*) ;
 int FUNC_5 (struct qm_eadr*) ;
 int FUNC_6 (struct qm_eadr*) ;
 int FUNC_7 (struct qm_ecir2*) ;
 scalar_t__ FUNC_8 (struct qm_ecir2*) ;
 int FUNC_9 (struct qm_ecir*) ;
 int FUNC_10 (struct qm_ecir*) ;
 scalar_t__ FUNC_11 (struct qm_ecir*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_12(struct device *VAR_11, u32 VAR_12,
          u32 VAR_13)
{
 struct qm_ecir VAR_14;
 struct qm_eadr VAR_15;
 int VAR_16;

 VAR_14.info = FUNC_2(VAR_7);

 if ((VAR_10 & 0xFF00) >= VAR_2) {
  struct qm_ecir2 VAR_17;

  VAR_17.info = FUNC_2(VAR_8);
  if (VAR_13 & VAR_1) {
   FUNC_0(VAR_11, "ErrInt: %s id %d\n",
     FUNC_8(&VAR_17) ? "DCP" : "SWP",
     FUNC_7(&VAR_17));
  }
  if (VAR_13 & (VAR_0 | VAR_3))
   FUNC_0(VAR_11, "ErrInt: ecir.fqid 0x%x\n",
     FUNC_9(&VAR_14));

  if (VAR_13 & (VAR_5|VAR_4)) {
   VAR_15.info = FUNC_2(VAR_6);
   VAR_16 = FUNC_6(&VAR_15);
   FUNC_0(VAR_11, "ErrInt: EADR Memory: %s, 0x%x\n",
     VAR_9[VAR_16].txt,
     VAR_9[VAR_16].addr_mask
     & FUNC_5(&VAR_15));
   FUNC_1(VAR_11, VAR_9[VAR_16].bits);
  }
 } else {
  if (VAR_13 & VAR_1) {
   FUNC_0(VAR_11, "ErrInt: %s id %d\n",
     FUNC_11(&VAR_14) ? "DCP" : "SWP",
     FUNC_10(&VAR_14));
  }
  if (VAR_13 & VAR_0)
   FUNC_0(VAR_11, "ErrInt: ecir.fqid 0x%x\n",
     FUNC_9(&VAR_14));

  if (VAR_13 & (VAR_5|VAR_4)) {
   VAR_15.info = FUNC_2(VAR_6);
   VAR_16 = FUNC_4(&VAR_15);
   FUNC_0(VAR_11, "ErrInt: EADR Memory: %s, 0x%x\n",
     VAR_9[VAR_16].txt,
     VAR_9[VAR_16].addr_mask
     & FUNC_3(&VAR_15));
   FUNC_1(VAR_11, VAR_9[VAR_16].bits);
  }
 }
}
