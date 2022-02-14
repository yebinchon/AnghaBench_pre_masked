
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {int dummy; } ;
struct ntlmssp2_name {int length; int type; } ;
struct TYPE_2__ {int len; unsigned char* response; } ;
struct cifs_ses {TYPE_1__ auth_key; } ;
typedef int __le64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct timespec64) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timespec64*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static __le64
FUNC_4(struct cifs_ses *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5 = sizeof(struct ntlmssp2_name);
 unsigned char *VAR_6;
 unsigned char *VAR_7;
 struct ntlmssp2_name *VAR_8;
 struct timespec64 VAR_9;

 if (!VAR_2->auth_key.len || !VAR_2->auth_key.response)
  return 0;

 VAR_6 = VAR_2->auth_key.response;
 VAR_7 = VAR_6 + VAR_2->auth_key.len;

 while (VAR_6 + VAR_5 < VAR_7) {
  VAR_8 = (struct ntlmssp2_name *) VAR_6;
  VAR_4 = FUNC_3(VAR_8->type);
  if (VAR_4 == VAR_0)
   break;
  VAR_6 += 2;
  VAR_3 = FUNC_3(VAR_8->length);
  VAR_6 += 2;
  if (VAR_6 + VAR_3 > VAR_7)
   break;
  if (VAR_4 == VAR_1) {
   if (VAR_3 == sizeof(u64))
    return *((__le64 *)VAR_6);
  }
  VAR_6 += VAR_3;
 }

 FUNC_2(&VAR_9);
 return FUNC_1(FUNC_0(VAR_9));
}
