
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int* u32; } ;
struct ubifs_info {int key_fmt; } ;





 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ubifs_info const*,union ubifs_key const*) ;
 int FUNC_2 (struct ubifs_info const*,union ubifs_key const*) ;
 scalar_t__ FUNC_3 (struct ubifs_info const*,union ubifs_key const*) ;
 int FUNC_4 (struct ubifs_info const*,union ubifs_key const*) ;
 scalar_t__ FUNC_5 (char*,int,char*,int,...) ;
 int FUNC_6 (struct ubifs_info const*,int) ;

const char *FUNC_7(const struct ubifs_info *VAR_1,
        const union ubifs_key *VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5 = VAR_3;
 int VAR_6 = FUNC_4(VAR_1, VAR_2);

 if (VAR_1->key_fmt == VAR_0) {
  switch (VAR_6) {
  case 130:
   VAR_4 -= FUNC_5(VAR_5, VAR_4, "(%lu, %s)",
     (unsigned long)FUNC_3(VAR_1, VAR_2),
     FUNC_0(VAR_6));
   break;
  case 131:
  case 128:
   VAR_4 -= FUNC_5(VAR_5, VAR_4, "(%lu, %s, %#08x)",
     (unsigned long)FUNC_3(VAR_1, VAR_2),
     FUNC_0(VAR_6), FUNC_2(VAR_1, VAR_2));
   break;
  case 132:
   VAR_4 -= FUNC_5(VAR_5, VAR_4, "(%lu, %s, %u)",
     (unsigned long)FUNC_3(VAR_1, VAR_2),
     FUNC_0(VAR_6), FUNC_1(VAR_1, VAR_2));
   break;
  case 129:
   VAR_4 -= FUNC_5(VAR_5, VAR_4, "(%lu, %s)",
     (unsigned long)FUNC_3(VAR_1, VAR_2),
     FUNC_0(VAR_6));
   break;
  default:
   VAR_4 -= FUNC_5(VAR_5, VAR_4, "(bad key type: %#08x, %#08x)",
     VAR_2->u32[0], VAR_2->u32[1]);
  }
 } else
  VAR_4 -= FUNC_5(VAR_5, VAR_4, "bad key format %d", VAR_1->key_fmt);
 FUNC_6(VAR_1, VAR_4 > 0);
 return VAR_5;
}
