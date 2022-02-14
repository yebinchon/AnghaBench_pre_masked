
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_preauth_neg_context {int dummy; } ;
struct smb2_posix_neg_context {int dummy; } ;
struct smb2_netname_neg_context {int dummy; } ;
struct smb2_negotiate_req {void* NegotiateContextCount; int NegotiateContextOffset; } ;
struct smb2_encryption_neg_context {int dummy; } ;
struct smb2_compression_capabilities_context {int dummy; } ;
struct TCP_Server_Info {int hostname; scalar_t__ compress_algorithm; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct smb2_compression_capabilities_context*) ;
 int FUNC_2 (struct smb2_encryption_neg_context*) ;
 unsigned int FUNC_3 (struct smb2_netname_neg_context*,int ) ;
 int FUNC_4 (struct smb2_posix_neg_context*) ;
 int FUNC_5 (struct smb2_preauth_neg_context*) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (unsigned int) ;
 unsigned int FUNC_9 (unsigned int,int) ;

__attribute__((used)) static void
FUNC_10(struct smb2_negotiate_req *VAR_1,
        struct TCP_Server_Info *VAR_2, unsigned int *VAR_3)
{
 char *VAR_4 = (char *)VAR_1;
 unsigned int VAR_5;

 if (*VAR_3 > 200) {

  FUNC_6(VAR_0, "Bad frame length assembling neg contexts\n");
  return;
 }





 *VAR_3 = FUNC_9(*VAR_3, 8);

 VAR_4 = (*VAR_3) + (char *)VAR_1;
 VAR_1->NegotiateContextOffset = FUNC_8(*VAR_3);

 FUNC_5((struct smb2_preauth_neg_context *)VAR_4);
 VAR_5 = FUNC_0(sizeof(struct smb2_preauth_neg_context), 8) * 8;
 *VAR_3 += VAR_5;
 VAR_4 += VAR_5;

 FUNC_2((struct smb2_encryption_neg_context *)VAR_4);
 VAR_5 = FUNC_0(sizeof(struct smb2_encryption_neg_context), 8) * 8;
 *VAR_3 += VAR_5;
 VAR_4 += VAR_5;

 if (VAR_2->compress_algorithm) {
  FUNC_1((struct smb2_compression_capabilities_context *)
    VAR_4);
  VAR_5 = FUNC_0(
   sizeof(struct smb2_compression_capabilities_context),
    8) * 8;
  *VAR_3 += VAR_5;
  VAR_4 += VAR_5;
  VAR_1->NegotiateContextCount = FUNC_7(5);
 } else
  VAR_1->NegotiateContextCount = FUNC_7(4);

 VAR_5 = FUNC_3((struct smb2_netname_neg_context *)VAR_4,
     VAR_2->hostname);
 *VAR_3 += VAR_5;
 VAR_4 += VAR_5;

 FUNC_4((struct smb2_posix_neg_context *)VAR_4);
 *VAR_3 += sizeof(struct smb2_posix_neg_context);
}
