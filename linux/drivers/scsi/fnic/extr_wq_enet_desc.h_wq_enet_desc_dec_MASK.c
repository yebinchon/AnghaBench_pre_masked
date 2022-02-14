
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct wq_enet_desc {int vlan_tag; int header_length_flags; int mss_loopback; int length; int address; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct wq_enet_desc *VAR_11,
 u64 *VAR_12, u16 *VAR_13, u16 *VAR_14, u16 *VAR_15,
 u8 *VAR_16, u8 *VAR_17, u8 *VAR_18, u8 *VAR_19,
 u8 *VAR_20, u16 *VAR_21, u8 *VAR_22)
{
 *VAR_12 = FUNC_1(VAR_11->address);
 *VAR_13 = FUNC_0(VAR_11->length) & VAR_7;
 *VAR_14 = (FUNC_0(VAR_11->mss_loopback) >> VAR_10) &
  VAR_9;
 *VAR_22 = (u8)((FUNC_0(VAR_11->mss_loopback) >>
  VAR_8) & 1);
 *VAR_15 = FUNC_0(VAR_11->header_length_flags) &
  VAR_6;
 *VAR_16 = (u8)((FUNC_0(VAR_11->header_length_flags) >>
  VAR_5) & VAR_3);
 *VAR_17 = (u8)((FUNC_0(VAR_11->header_length_flags) >>
  VAR_1) & 1);
 *VAR_18 = (u8)((FUNC_0(VAR_11->header_length_flags) >>
  VAR_0) & 1);
 *VAR_19 = (u8)((FUNC_0(VAR_11->header_length_flags) >>
  VAR_2) & 1);
 *VAR_20 = (u8)((FUNC_0(VAR_11->header_length_flags) >>
  VAR_4) & 1);
 *VAR_21 = FUNC_0(VAR_11->vlan_tag);
}
