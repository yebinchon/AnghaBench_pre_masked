
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntlmssp2_name {void* length; void* type; } ;
struct nls_table {int dummy; } ;
struct TYPE_2__ {unsigned int len; unsigned char* response; } ;
struct cifs_ses {int domainName; TYPE_1__ auth_key; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,unsigned int,struct nls_table const*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 unsigned char* FUNC_3 (unsigned int,int ) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct cifs_ses *VAR_3, const struct nls_table *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = 2 * sizeof(struct ntlmssp2_name);
 char *VAR_7 = "WORKGROUP";
 unsigned char *VAR_8;
 struct ntlmssp2_name *VAR_9;

 if (!VAR_3->domainName) {
  VAR_3->domainName = FUNC_2(VAR_7, VAR_1);
  if (!VAR_3->domainName)
   return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_3->domainName);







 VAR_3->auth_key.len = VAR_6 + 2 * VAR_5;
 VAR_3->auth_key.response = FUNC_3(VAR_3->auth_key.len, VAR_1);
 if (!VAR_3->auth_key.response) {
  VAR_3->auth_key.len = 0;
  return -VAR_0;
 }

 VAR_8 = VAR_3->auth_key.response;
 VAR_9 = (struct ntlmssp2_name *) VAR_8;





 VAR_9->type = FUNC_1(VAR_2);
 VAR_9->length = FUNC_1(2 * VAR_5);
 VAR_8 = (unsigned char *)VAR_9 + sizeof(struct ntlmssp2_name);
 FUNC_0((__le16 *)VAR_8, VAR_3->domainName, VAR_5, VAR_4);

 return 0;
}
