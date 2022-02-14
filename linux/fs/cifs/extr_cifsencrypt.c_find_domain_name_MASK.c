
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntlmssp2_name {int length; int type; } ;
struct nls_table {int dummy; } ;
struct TYPE_2__ {int len; unsigned char* response; } ;
struct cifs_ses {scalar_t__ domainName; TYPE_1__ auth_key; } ;
typedef int __le16 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (scalar_t__,int *,unsigned int,unsigned int,struct nls_table const*,int ) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct cifs_ses *VAR_6, const struct nls_table *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = sizeof(struct ntlmssp2_name);
 unsigned char *VAR_11;
 unsigned char *VAR_12;
 struct ntlmssp2_name *VAR_13;

 if (!VAR_6->auth_key.len || !VAR_6->auth_key.response)
  return 0;

 VAR_11 = VAR_6->auth_key.response;
 VAR_12 = VAR_11 + VAR_6->auth_key.len;

 while (VAR_11 + VAR_10 < VAR_12) {
  VAR_13 = (struct ntlmssp2_name *) VAR_11;
  VAR_9 = FUNC_2(VAR_13->type);
  if (VAR_9 == VAR_4)
   break;
  VAR_11 += 2;
  VAR_8 = FUNC_2(VAR_13->length);
  VAR_11 += 2;
  if (VAR_11 + VAR_8 > VAR_12)
   break;
  if (VAR_9 == VAR_5) {
   if (!VAR_8 || VAR_8 >= VAR_0)
    break;
   if (!VAR_6->domainName) {
    VAR_6->domainName =
     FUNC_1(VAR_8 + 1, VAR_2);
    if (!VAR_6->domainName)
      return -VAR_1;
    FUNC_0(VAR_6->domainName,
     (__le16 *)VAR_11, VAR_8, VAR_8,
     VAR_7, VAR_3);
    break;
   }
  }
  VAR_11 += VAR_8;
 }

 return 0;
}
