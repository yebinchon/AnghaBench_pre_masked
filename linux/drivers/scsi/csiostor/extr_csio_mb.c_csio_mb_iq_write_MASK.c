
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_iq_cmd {int fl0addr; int fl0size; int fl0dcaen_to_fl0cidxfthresh; int iqns_to_fl0congen; int iqaddr; int iqsize; int iqdroprss_to_iqesize; int type_to_iqandstindex; int fl1id; int fl0id; int iqid; int alloc_to_len16; int op_to_vfn; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_iq_params {int iqid; int fl0id; int fl1id; int iqsize; scalar_t__ type; int fl0size; scalar_t__ fl0addr; int fl0cidxfthresh; int fl0fbmax; int fl0fbmin; int fl0dcacpu; int fl0dcaen; int fl0packen; int fl0paden; int fl0cprio; int fl0hostfcmode; int iqflintcongen; int iqflintiqhsen; scalar_t__ iqaddr; int iqesize; int iqcprio; int iqintcntthresh; int iqdcacpu; int iqdcaen; int iqpciech; int iqandstindex; int iqanud; int iqanus; int iqandst; int vfn; int pfn; scalar_t__ iq_start; } ;
struct csio_hw {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_mb*,struct fw_iq_cmd*,int,void*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int) ;

__attribute__((used)) static void
FUNC_31(struct csio_hw *VAR_6, struct csio_mb *VAR_7, void *VAR_8,
   uint32_t VAR_9, bool VAR_10,
   struct csio_iq_params *VAR_11,
   void (*VAR_12) (struct csio_hw *, struct csio_mb *))
{
 struct fw_iq_cmd *VAR_13 = (struct fw_iq_cmd *)(VAR_7->mb);

 uint32_t VAR_14 = (VAR_11->iq_start) ?
     VAR_4 :
     VAR_5;
 int VAR_15 = !(VAR_6->flags & VAR_0);






 if (!VAR_10)
  FUNC_0(VAR_7, VAR_13, VAR_9, VAR_8, VAR_12, 1);

 VAR_13->op_to_vfn |= FUNC_29(FUNC_2(VAR_3) |
    VAR_1 | VAR_2 |
    FUNC_26(VAR_11->pfn) |
    FUNC_27(VAR_11->vfn));
 VAR_13->alloc_to_len16 |= FUNC_29(VAR_14 |
    FUNC_1(sizeof(*VAR_13) / 16));
 VAR_13->iqid |= FUNC_30(VAR_11->iqid);
 VAR_13->fl0id |= FUNC_30(VAR_11->fl0id);
 VAR_13->fl1id |= FUNC_30(VAR_11->fl1id);
 VAR_13->type_to_iqandstindex |= FUNC_29(
   FUNC_15(VAR_11->iqandst) |
   FUNC_17(VAR_11->iqanus) |
   FUNC_16(VAR_11->iqanud) |
   FUNC_14(VAR_11->iqandstindex));
 VAR_13->iqdroprss_to_iqesize |= FUNC_30(
   FUNC_25(VAR_11->iqpciech) |
   FUNC_20(VAR_11->iqdcaen) |
   FUNC_19(VAR_11->iqdcacpu) |
   FUNC_24(VAR_11->iqintcntthresh) |
   FUNC_18(VAR_11->iqcprio) |
   FUNC_21(VAR_11->iqesize));

 VAR_13->iqsize |= FUNC_30(VAR_11->iqsize);
 VAR_13->iqaddr |= FUNC_28(VAR_11->iqaddr);

 if (VAR_11->type == 0) {
  VAR_13->iqns_to_fl0congen |= FUNC_29(
   FUNC_23(VAR_11->iqflintiqhsen)|
   FUNC_22(VAR_11->iqflintcongen));
 }

 if (VAR_11->fl0size && VAR_11->fl0addr &&
     (VAR_11->fl0id != 0xFFFF)) {

  VAR_13->iqns_to_fl0congen |= FUNC_29(
   FUNC_11(VAR_11->fl0hostfcmode)|
   FUNC_4(VAR_11->fl0cprio) |
   FUNC_10(VAR_15) |
   FUNC_5(VAR_15) |
   FUNC_13(VAR_11->fl0paden) |
   FUNC_12(VAR_11->fl0packen));
  VAR_13->fl0dcaen_to_fl0cidxfthresh |= FUNC_30(
   FUNC_7(VAR_11->fl0dcaen) |
   FUNC_6(VAR_11->fl0dcacpu) |
   FUNC_9(VAR_11->fl0fbmin) |
   FUNC_8(VAR_11->fl0fbmax) |
   FUNC_3(VAR_11->fl0cidxfthresh));
  VAR_13->fl0size |= FUNC_30(VAR_11->fl0size);
  VAR_13->fl0addr |= FUNC_28(VAR_11->fl0addr);
 }
}
