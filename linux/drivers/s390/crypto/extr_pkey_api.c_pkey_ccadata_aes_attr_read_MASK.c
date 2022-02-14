
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct secaeskeytoken {int dummy; } ;
struct pkey_seckey {int seckey; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_1(u32 VAR_1, bool VAR_2, char *VAR_3,
       loff_t VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct pkey_seckey *VAR_7 = (struct pkey_seckey *) VAR_3;

 if (VAR_4 != 0 || VAR_5 < sizeof(struct secaeskeytoken))
  return -VAR_0;
 if (VAR_2)
  if (VAR_5 < 2 * sizeof(struct secaeskeytoken))
   return -VAR_0;

 VAR_6 = FUNC_0(-1, -1, VAR_1, VAR_7->seckey);
 if (VAR_6)
  return VAR_6;

 if (VAR_2) {
  VAR_7++;
  VAR_6 = FUNC_0(-1, -1, VAR_1, VAR_7->seckey);
  if (VAR_6)
   return VAR_6;

  return 2 * sizeof(struct secaeskeytoken);
 }

 return sizeof(struct secaeskeytoken);
}
