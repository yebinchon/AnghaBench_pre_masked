
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubifs_info {int dummy; } ;
struct ubifs_ch {int crc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int) ;

void FUNC_2(struct ubifs_info *VAR_1, void *VAR_2, int VAR_3)
{
 struct ubifs_ch *VAR_4 = VAR_2;
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_2 + 8, VAR_3 - 8);
 VAR_4->crc = FUNC_0(VAR_5);
}
