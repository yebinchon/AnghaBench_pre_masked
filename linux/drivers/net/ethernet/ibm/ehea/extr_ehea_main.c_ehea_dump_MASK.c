
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,char*,unsigned char*,int,int ,int ) ;

void FUNC_1(void *VAR_0, int VAR_1, char *VAR_2)
{
 int VAR_3;
 unsigned char *VAR_4 = VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 16) {
  FUNC_0("%s adr=%p ofs=%04x %016llx %016llx\n",
   VAR_2, VAR_4, VAR_3, *((u64 *)&VAR_4[0]), *((u64 *)&VAR_4[8]));
  VAR_4 += 16;
 }
}
