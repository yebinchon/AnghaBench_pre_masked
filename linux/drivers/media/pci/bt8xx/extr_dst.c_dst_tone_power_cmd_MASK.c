
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {scalar_t__ dst_type; int* tx_tuna; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct dst_state*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dst_state *VAR_2)
{
 u8 VAR_3[8] = { 0x00, 0x09, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00 };

 if (VAR_2->dst_type != VAR_0)
  return -VAR_1;
 VAR_3[4] = VAR_2->tx_tuna[4];
 VAR_3[2] = VAR_2->tx_tuna[2];
 VAR_3[3] = VAR_2->tx_tuna[3];
 VAR_3[7] = FUNC_0 (VAR_3, 7);
 return FUNC_1(VAR_2, VAR_3, 8);
}
