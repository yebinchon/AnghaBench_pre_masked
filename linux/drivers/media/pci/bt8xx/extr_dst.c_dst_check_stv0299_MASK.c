
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int tuner_type; int rxbuffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct dst_state*) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (struct dst_state*,int*,int) ;
 scalar_t__ FUNC_3 (int**,int *,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct dst_state *VAR_1)
{
 u8 VAR_2[] = { 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

 VAR_2[7] = FUNC_1(VAR_2, 7);
 if (FUNC_2(VAR_1, VAR_2, 8) < 0) {
  FUNC_4("Cmd=[0x04] failed\n");
  return -1;
 }
 FUNC_0(VAR_1);

 if (FUNC_3(&VAR_2, &VAR_1->rxbuffer, 8)) {
  FUNC_4("Found a STV0299 NIM\n");
  VAR_1->tuner_type = VAR_0;
  return 0;
 }

 return -1;
}
