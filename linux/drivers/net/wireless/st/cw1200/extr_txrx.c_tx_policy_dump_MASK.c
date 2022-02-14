
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_policy {int* raw; int defined; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct tx_policy *VAR_0)
{
 FUNC_0("[TX policy] %.1X%.1X%.1X%.1X%.1X%.1X%.1X%.1X %.1X%.1X%.1X%.1X%.1X%.1X%.1X%.1X %.1X%.1X%.1X%.1X%.1X%.1X%.1X%.1X: %d\n",
   VAR_0->raw[0] & 0x0F, VAR_0->raw[0] >> 4,
   VAR_0->raw[1] & 0x0F, VAR_0->raw[1] >> 4,
   VAR_0->raw[2] & 0x0F, VAR_0->raw[2] >> 4,
   VAR_0->raw[3] & 0x0F, VAR_0->raw[3] >> 4,
   VAR_0->raw[4] & 0x0F, VAR_0->raw[4] >> 4,
   VAR_0->raw[5] & 0x0F, VAR_0->raw[5] >> 4,
   VAR_0->raw[6] & 0x0F, VAR_0->raw[6] >> 4,
   VAR_0->raw[7] & 0x0F, VAR_0->raw[7] >> 4,
   VAR_0->raw[8] & 0x0F, VAR_0->raw[8] >> 4,
   VAR_0->raw[9] & 0x0F, VAR_0->raw[9] >> 4,
   VAR_0->raw[10] & 0x0F, VAR_0->raw[10] >> 4,
   VAR_0->raw[11] & 0x0F, VAR_0->raw[11] >> 4,
   VAR_0->defined);
}
