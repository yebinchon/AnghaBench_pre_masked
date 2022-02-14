
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_hwfn {int cdev; int p_dpc_ptt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int ,int ,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct qed_hwfn*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_11)
{
 u32 VAR_12 = FUNC_2(VAR_11, VAR_11->p_dpc_ptt,
    VAR_9);

 if (VAR_12 & VAR_10) {
  u32 VAR_13, VAR_14, VAR_15;

  VAR_13 = FUNC_2(VAR_11, VAR_11->p_dpc_ptt,
         VAR_6);
  VAR_14 = FUNC_2(VAR_11, VAR_11->p_dpc_ptt,
         VAR_7);
  VAR_15 = FUNC_2(VAR_11, VAR_11->p_dpc_ptt,
    VAR_8);

  FUNC_0(VAR_11->cdev,
   "Incorrect access to %08x of length %08x - PF [%02x] VF [%04x] [valid %02x] client [%02x] write [%02x] Byte-Enable [%04x] [%08x]\n",
   VAR_13, VAR_15,
   (u8) FUNC_1(VAR_14, VAR_2),
   (u8) FUNC_1(VAR_14, VAR_3),
   (u8) FUNC_1(VAR_14,
           VAR_4),
   (u8) FUNC_1(VAR_14,
           VAR_1),
   (u8) FUNC_1(VAR_14, VAR_5),
   (u8) FUNC_1(VAR_14,
           VAR_0),
   VAR_14);
 }

 return 0;
}
