
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar5523_tx_cmd {int olen; int done; int res; scalar_t__ odata; } ;
struct ar5523_cmd_hdr {int code; int len; } ;
struct ar5523 {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ar5523*,char*,int,int) ;
 int FUNC_2 (struct ar5523*,char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_6(struct ar5523 *VAR_1, struct ar5523_cmd_hdr *VAR_2,
         struct ar5523_tx_cmd *VAR_3)
{
 int VAR_4, VAR_5;
 __be32 *VAR_6;

 VAR_4 = FUNC_3(VAR_2->len) - sizeof(*VAR_2);

 if (VAR_4 < 0) {
  FUNC_0(1);
  goto out;
 }

 FUNC_1(VAR_1, "Code = %d len = %d\n", FUNC_3(VAR_2->code) & 0xff,
     VAR_4);

 VAR_6 = (__be32 *)(VAR_2 + 1);
 if (VAR_4 >= sizeof(u32)) {
  VAR_5 = FUNC_3(VAR_6[0]);
  VAR_4 -= sizeof(u32);
  if (VAR_5 == 0) {

   VAR_5 = sizeof(u32);
  }
 } else
  VAR_5 = 0;

 if (VAR_3->odata) {
  if (VAR_3->olen < VAR_5) {
   FUNC_2(VAR_1, "olen to small %d < %d\n",
       VAR_3->olen, VAR_5);
   VAR_3->olen = 0;
   VAR_3->res = -VAR_0;
  } else {
   VAR_3->olen = VAR_5;
   FUNC_5(VAR_3->odata, &VAR_6[1], VAR_5);
   VAR_3->res = 0;
  }
 }

out:
 FUNC_4(&VAR_3->done);
}
