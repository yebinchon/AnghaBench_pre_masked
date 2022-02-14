
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_port {int mcast_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct mvneta_port*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct mvneta_port *VAR_1, int VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 if (VAR_2 == -1) {
  FUNC_0(VAR_1->mcast_count, 0, sizeof(VAR_1->mcast_count));
  VAR_4 = 0;
 } else {
  FUNC_0(VAR_1->mcast_count, 1, sizeof(VAR_1->mcast_count));
  VAR_4 = 0x1 | (VAR_2 << 1);
  VAR_4 |= (VAR_4 << 24) | (VAR_4 << 16) | (VAR_4 << 8);
 }

 for (VAR_3 = 0; VAR_3 <= 0xfc; VAR_3 += 4)
  FUNC_1(VAR_1, VAR_0 + VAR_3, VAR_4);
}
