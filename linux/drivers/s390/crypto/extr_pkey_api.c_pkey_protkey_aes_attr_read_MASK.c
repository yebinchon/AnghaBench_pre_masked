
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct protaeskeytoken {int len; char protkey; int keytype; int version; int type; } ;
struct pkey_protkey {int len; struct protaeskeytoken protkey; } ;
typedef int ssize_t ;
typedef int protkeytoken ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct protaeskeytoken*,int) ;
 int FUNC_1 (struct protaeskeytoken*,int ,int) ;
 int FUNC_2 (int ,struct pkey_protkey*) ;

__attribute__((used)) static ssize_t FUNC_3(u32 VAR_3, bool VAR_4, char *VAR_5,
       loff_t VAR_6, size_t VAR_7)
{
 struct protaeskeytoken VAR_8;
 struct pkey_protkey VAR_9;
 int VAR_10;

 if (VAR_6 != 0 || VAR_7 < sizeof(VAR_8))
  return -VAR_0;
 if (VAR_4)
  if (VAR_7 < 2 * sizeof(VAR_8))
   return -VAR_0;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.type = VAR_1;
 VAR_8.version = VAR_2;
 VAR_8.keytype = VAR_3;

 VAR_10 = FUNC_2(VAR_8.keytype, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_8.len = VAR_9.len;
 FUNC_0(&VAR_8.protkey, &VAR_9.protkey, VAR_9.len);

 FUNC_0(VAR_5, &VAR_8, sizeof(VAR_8));

 if (VAR_4) {
  VAR_10 = FUNC_2(VAR_8.keytype, &VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_8.len = VAR_9.len;
  FUNC_0(&VAR_8.protkey, &VAR_9.protkey, VAR_9.len);

  FUNC_0(VAR_5 + sizeof(VAR_8), &VAR_8,
         sizeof(VAR_8));

  return 2 * sizeof(VAR_8);
 }

 return sizeof(VAR_8);
}
