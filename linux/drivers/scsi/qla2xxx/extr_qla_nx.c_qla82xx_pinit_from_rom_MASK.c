
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct TYPE_6__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_7__ {long addr; int data; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (struct qla_hw_data*,int) ;
 scalar_t__ FUNC_8 (struct qla_hw_data*,int,...) ;
 int FUNC_9 (struct qla_hw_data*) ;
 int FUNC_10 (struct qla_hw_data*) ;
 int FUNC_11 (struct qla_hw_data*,int,int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(scsi_qla_host_t *VAR_25)
{
 int VAR_26, VAR_27;
 int VAR_28 ;
 struct crb_addr_pair *VAR_29;
 unsigned long VAR_30;
 unsigned VAR_31, VAR_32;
 struct qla_hw_data *VAR_33 = VAR_25->hw;

 struct crb_addr_pair {
  long addr;
  long data;
 };


 FUNC_9(VAR_33);


 FUNC_11(VAR_33, VAR_8 + 0x10, 0x0);
 FUNC_11(VAR_33, VAR_8 + 0x14, 0x0);
 FUNC_11(VAR_33, VAR_8 + 0x18, 0x0);
 FUNC_11(VAR_33, VAR_8 + 0x1c, 0x0);
 FUNC_11(VAR_33, VAR_8 + 0x20, 0x0);
 FUNC_11(VAR_33, VAR_8 + 0x24, 0x0);


 FUNC_11(VAR_33, VAR_9 + 0x40, 0xff);

 FUNC_11(VAR_33, VAR_9 + 0x70000, 0x00);

 FUNC_11(VAR_33, VAR_9 + 0x80000, 0x00);

 FUNC_11(VAR_33, VAR_9 + 0x90000, 0x00);

 FUNC_11(VAR_33, VAR_9 + 0xa0000, 0x00);

 FUNC_11(VAR_33, VAR_9 + 0xb0000, 0x00);


 VAR_27 = FUNC_7(VAR_33, VAR_18 + 0x1000);
 FUNC_11(VAR_33, VAR_18 + 0x1000, VAR_27 & (~(0x1)));


 FUNC_11(VAR_33, VAR_7 + 0x1300, 0x1);


 FUNC_11(VAR_33, VAR_19 + 0x0, 0x0);
 FUNC_11(VAR_33, VAR_19 + 0x8, 0x0);
 FUNC_11(VAR_33, VAR_19 + 0x10, 0x0);
 FUNC_11(VAR_33, VAR_19 + 0x18, 0x0);
 FUNC_11(VAR_33, VAR_19 + 0x100, 0x0);
 FUNC_11(VAR_33, VAR_19 + 0x200, 0x0);


 FUNC_11(VAR_33, VAR_10 + 0x3c, 1);
 FUNC_11(VAR_33, VAR_11 + 0x3c, 1);
 FUNC_11(VAR_33, VAR_12 + 0x3c, 1);
 FUNC_11(VAR_33, VAR_13 + 0x3c, 1);
 FUNC_11(VAR_33, VAR_14 + 0x3c, 1);
 FUNC_4(20);


 if (FUNC_12(VAR_0, &VAR_25->dpc_flags))

  FUNC_11(VAR_33, VAR_21, 0xfeffffff);
 else
  FUNC_11(VAR_33, VAR_21, 0xffffffff);
 FUNC_10(VAR_33);






 if (FUNC_8(VAR_33, 0, &VAR_32) != 0 || VAR_32 != 0xcafecafeUL ||
     FUNC_8(VAR_33, 4, &VAR_32) != 0) {
  FUNC_5(VAR_23, VAR_25, 0x006e,
      "Error Reading crb_init area: n: %08x.\n", VAR_32);
  return -1;
 }




 VAR_31 = VAR_32 & 0xffffU;
 VAR_32 = (VAR_32 >> 16) & 0xffffU;


 if (VAR_32 >= 1024) {
  FUNC_5(VAR_23, VAR_25, 0x0071,
      "Card flash not initialized:n=0x%x.\n", VAR_32);
  return -1;
 }

 FUNC_5(VAR_24, VAR_25, 0x0072,
     "%d CRB init values found in ROM.\n", VAR_32);

 VAR_29 = FUNC_3(VAR_32, sizeof(struct crb_addr_pair), VAR_3);
 if (VAR_29 == ((void*)0)) {
  FUNC_5(VAR_23, VAR_25, 0x010c,
      "Unable to allocate memory.\n");
  return -VAR_2;
 }

 for (VAR_28 = 0; VAR_28 < VAR_32; VAR_28++) {
  if (FUNC_8(VAR_33, 8*VAR_28 + 4*VAR_31, &VAR_27) != 0 ||
      FUNC_8(VAR_33, 8*VAR_28 + 4*VAR_31 + 4, &VAR_26) != 0) {
   FUNC_2(VAR_29);
   return -1;
  }

  VAR_29[VAR_28].addr = VAR_26;
  VAR_29[VAR_28].data = VAR_27;
 }

 for (VAR_28 = 0; VAR_28 < VAR_32; VAR_28++) {



  VAR_30 = FUNC_6((unsigned long)VAR_29[VAR_28].addr) +
      VAR_20;





  if (VAR_30 == FUNC_0(0x1fc))
   continue;


  if (VAR_30 == (VAR_22 + 0xbc))
   continue;


  if (VAR_30 == (VAR_22 + 0xc8))
   continue;


  if (VAR_30 == FUNC_1(VAR_4))
   continue;

  if (VAR_30 == FUNC_1(VAR_5))
   continue;

  if ((VAR_30 & 0x0ff00000) == VAR_17)
   continue;

  if ((VAR_30 & 0x0ff00000) == VAR_6)
   continue;

  if (VAR_30 == VAR_1) {
   FUNC_5(VAR_23, VAR_25, 0x0116,
       "Unknown addr: 0x%08lx.\n", VAR_29[VAR_28].addr);
   continue;
  }

  FUNC_11(VAR_33, VAR_30, VAR_29[VAR_28].data);




  if (VAR_30 == VAR_21)
   FUNC_4(1000);




  FUNC_4(1);
 }

 FUNC_2(VAR_29);


 FUNC_11(VAR_33, VAR_15+0xec, 0x1e);
 FUNC_11(VAR_33, VAR_15+0x4c, 8);
 FUNC_11(VAR_33, VAR_16+0x4c, 8);


 FUNC_11(VAR_33, VAR_10+0x8, 0);
 FUNC_11(VAR_33, VAR_10+0xc, 0);
 FUNC_11(VAR_33, VAR_11+0x8, 0);
 FUNC_11(VAR_33, VAR_11+0xc, 0);
 FUNC_11(VAR_33, VAR_12+0x8, 0);
 FUNC_11(VAR_33, VAR_12+0xc, 0);
 FUNC_11(VAR_33, VAR_13+0x8, 0);
 FUNC_11(VAR_33, VAR_13+0xc, 0);
 return 0;
}
