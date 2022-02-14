
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sid {int num_subauth; int * sub_auth; int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct cifs_sid* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cifs_sid *VAR_3, char *VAR_4)
{




 if (VAR_4 < (char *)VAR_3 + 8) {
  FUNC_0(VAR_2, "ACL too small to parse SID %p\n", VAR_3);
  return -VAR_0;
 }
 return 0;
}
