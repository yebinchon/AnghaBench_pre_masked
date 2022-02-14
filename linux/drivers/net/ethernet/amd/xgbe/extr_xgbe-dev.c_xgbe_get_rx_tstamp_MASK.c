
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xgbe_ring_desc {int desc0; int desc1; int desc3; } ;
struct xgbe_packet_data {int rx_tstamp; int attributes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_packet_data *VAR_5,
          struct xgbe_ring_desc *VAR_6)
{
 u64 VAR_7;

 if (FUNC_0(VAR_6->desc3, VAR_0, VAR_3) &&
     !FUNC_0(VAR_6->desc3, VAR_0, VAR_4)) {
  VAR_7 = FUNC_2(VAR_6->desc1);
  VAR_7 <<= 32;
  VAR_7 |= FUNC_2(VAR_6->desc0);
  if (VAR_7 != 0xffffffffffffffffULL) {
   VAR_5->rx_tstamp = VAR_7;
   FUNC_1(VAR_5->attributes, VAR_1,
           VAR_2, 1);
  }
 }
}
