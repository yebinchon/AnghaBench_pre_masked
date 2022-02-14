
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct igu_ack_register {int sb_id_and_flags; int status_block_index; } ;
struct cnic_dev {int netdev; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct cnic_dev*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bnx2x* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct cnic_dev *VAR_6, u8 VAR_7, u8 VAR_8,
          u16 VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct bnx2x *VAR_12 = FUNC_2(VAR_6->netdev);
 u32 VAR_13 = (VAR_1 + FUNC_0(VAR_12) * 32 +
         VAR_0);
 struct igu_ack_register VAR_14;

 VAR_14.status_block_index = VAR_9;
 VAR_14.sb_id_and_flags =
   ((VAR_7 << VAR_3) |
    (VAR_8 << VAR_4) |
    (VAR_11 << VAR_5) |
    (VAR_10 << VAR_2));

 FUNC_1(VAR_6, VAR_13, (*(u32 *)&VAR_14));
}
