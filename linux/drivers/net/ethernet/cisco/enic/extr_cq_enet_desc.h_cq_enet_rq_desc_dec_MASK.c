
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cq_enet_rq_desc {int flags; int checksum_fcoe; int vlan; int rss_hash; int bytes_written_flags; int q_number_rss_type_flags; int completed_index_flags; } ;
struct cq_desc {int dummy; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct cq_desc*,int*,int*,int*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct cq_enet_rq_desc *VAR_23,
 u8 *VAR_24, u8 *VAR_25, u16 *VAR_26, u16 *VAR_27,
 u8 *VAR_28, u8 *VAR_29, u8 *VAR_30, u8 *VAR_31, u8 *VAR_32,
 u8 *VAR_33, u32 *VAR_34, u16 *VAR_35, u8 *VAR_36,
 u8 *VAR_37, u16 *VAR_38, u16 *VAR_39, u8 *VAR_40,
 u8 *VAR_41, u8 *VAR_42, u8 *VAR_43,
 u8 *VAR_44, u8 *VAR_45, u8 *VAR_46, u8 *VAR_47,
 u8 *VAR_48, u8 *VAR_49, u8 *VAR_50, u8 *VAR_51)
{
 u16 VAR_52;
 u16 VAR_53;
 u16 VAR_54;

 FUNC_0((struct cq_desc *)VAR_23, VAR_24,
  VAR_25, VAR_26, VAR_27);

 VAR_52 = FUNC_1(VAR_23->completed_index_flags);
 VAR_53 =
  FUNC_1(VAR_23->q_number_rss_type_flags);
 VAR_54 = FUNC_1(VAR_23->bytes_written_flags);

 *VAR_28 = (VAR_52 &
  VAR_11) ? 1 : 0;
 *VAR_29 = (VAR_52 & VAR_9) ?
  1 : 0;
 *VAR_30 = (VAR_52 & VAR_8) ?
  1 : 0;
 *VAR_31 = (VAR_52 & VAR_16) ?
  1 : 0;

 *VAR_32 = (u8)((VAR_53 >> VAR_0) &
  VAR_22);
 *VAR_33 = (VAR_53 &
  VAR_7) ? 1 : 0;

 *VAR_34 = FUNC_2(VAR_23->rss_hash);

 *VAR_35 = VAR_54 &
  VAR_1;
 *VAR_36 = (VAR_54 &
  VAR_19) ? 1 : 0;
 *VAR_37 = (VAR_54 &
  VAR_21) ? 1 : 0;




 *VAR_38 = FUNC_1(VAR_23->vlan);

 if (*VAR_29) {
  *VAR_40 = (u8)(FUNC_1(VAR_23->checksum_fcoe) &
   VAR_6);
  *VAR_41 = (VAR_23->flags &
   VAR_5) ? 1 : 0;
  *VAR_42 = (VAR_23->flags &
   VAR_2) ? 1 : 0;
  *VAR_43 = (u8)((FUNC_1(VAR_23->checksum_fcoe) >>
   VAR_4) &
   VAR_3);
  *VAR_39 = 0;
 } else {
  *VAR_40 = 0;
  *VAR_41 = 0;
  *VAR_42 = 0;
  *VAR_43 = 0;
  *VAR_39 = FUNC_1(VAR_23->checksum_fcoe);
 }

 *VAR_44 =
  (VAR_23->flags & VAR_18) ? 1 : 0;
 *VAR_45 = (VAR_23->flags & VAR_20) ? 1 : 0;
 *VAR_46 = (VAR_23->flags & VAR_17) ? 1 : 0;
 *VAR_47 =
  (VAR_23->flags & VAR_13) ? 1 : 0;
 *VAR_48 = (VAR_23->flags & VAR_15) ? 1 : 0;
 *VAR_49 = (VAR_23->flags & VAR_12) ? 1 : 0;
 *VAR_50 =
  (VAR_23->flags & VAR_14) ? 1 : 0;
 *VAR_51 = (VAR_23->flags & VAR_10) ? 1 : 0;
}
