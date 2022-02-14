
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cifs_sid {int num_subauth; scalar_t__ revision; scalar_t__* authority; scalar_t__* sub_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 struct cifs_sid VAR_2 ;
 struct cifs_sid VAR_3 ;
 struct cifs_sid VAR_4 ;
 struct cifs_sid VAR_5 ;

__attribute__((used)) static bool
FUNC_2(const struct cifs_sid *VAR_6, uint32_t *VAR_7, bool VAR_8)
{
 int VAR_9;
 int VAR_10;
 const struct cifs_sid *VAR_11;

 if (!VAR_6 || (VAR_7 == ((void*)0)))
  return 0;

 VAR_10 = VAR_6->num_subauth;


 if (VAR_10 == 2) {
  if (VAR_8)
   VAR_11 = &VAR_4;
  else
   VAR_11 = &VAR_5;
 } else if (VAR_10 == 3) {
  if (VAR_8)
   VAR_11 = &VAR_2;
  else
   VAR_11 = &VAR_3;
 } else
  return 0;


 if (VAR_6->revision != VAR_11->revision)
  return 0;


 for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
  if (VAR_6->authority[VAR_9] != VAR_11->authority[VAR_9]) {
   FUNC_0(VAR_0, "auth %d did not match\n", VAR_9);
   return 0;
  }
 }

 if (VAR_10 == 2) {
  if (VAR_6->sub_auth[0] != VAR_11->sub_auth[0])
   return 0;

  *VAR_7 = FUNC_1(VAR_6->sub_auth[1]);
 } else {
  *VAR_7 = FUNC_1(VAR_6->sub_auth[0]);
  if ((VAR_6->sub_auth[0] != VAR_11->sub_auth[0]) ||
      (VAR_6->sub_auth[1] != VAR_11->sub_auth[1]))
   return 0;

  *VAR_7 = FUNC_1(VAR_6->sub_auth[2]);
 }

 FUNC_0(VAR_0, "Unix UID %d returned from SID\n", *VAR_7);
 return 1;
}
