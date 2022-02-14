
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crc_pair {scalar_t__ size; int offset; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (struct bnx2x*,int ,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_2,
    const struct crc_pair *VAR_3, u8 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_3[VAR_5].size; VAR_5++) {
  int VAR_6 = FUNC_1(VAR_2, VAR_3[VAR_5].offset,
      VAR_3[VAR_5].size, VAR_4);
  if (VAR_6) {
   FUNC_0(VAR_0 | VAR_1,
      "nvram_tbl[%d] has failed crc test (rc %d)\n",
      VAR_5, VAR_6);
   return VAR_6;
  }
 }

 return 0;
}
