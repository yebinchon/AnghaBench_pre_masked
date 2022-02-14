
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_preauth_neg_context {int dummy; } ;
struct smb2_negotiate_rsp {scalar_t__ NegotiateContextCount; int NegotiateContextOffset; } ;
struct smb2_neg_context {scalar_t__ DataLength; scalar_t__ ContextType; } ;
struct smb2_encryption_neg_context {int dummy; } ;
struct smb2_compression_capabilities_context {int dummy; } ;
struct TCP_Server_Info {int posix_ext_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct TCP_Server_Info*,struct smb2_compression_capabilities_context*) ;
 int FUNC_3 (struct TCP_Server_Info*,struct smb2_encryption_neg_context*) ;
 int FUNC_4 (struct smb2_preauth_neg_context*) ;
 void* FUNC_5 (scalar_t__) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct smb2_negotiate_rsp *VAR_7,
         struct TCP_Server_Info *VAR_8,
         unsigned int VAR_9)
{
 struct smb2_neg_context *VAR_10;
 unsigned int VAR_11 = FUNC_6(VAR_7->NegotiateContextOffset);
 unsigned int VAR_12 = FUNC_5(VAR_7->NegotiateContextCount);
 unsigned int VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_0(VAR_1, "decoding %d negotiate contexts\n", VAR_12);
 if (VAR_9 <= VAR_11) {
  FUNC_1(VAR_6, "Invalid response: negotiate context offset\n");
  return -VAR_0;
 }

 VAR_13 = VAR_9 - VAR_11;

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  int VAR_16;

  if (VAR_13 == 0)
   break;

  if (VAR_13 < sizeof(struct smb2_neg_context))
   break;

  VAR_10 = (struct smb2_neg_context *)(VAR_11 + (char *)VAR_7);
  VAR_16 = FUNC_5(VAR_10->DataLength);
  if (VAR_16 > VAR_13)
   break;

  if (VAR_10->ContextType == VAR_5)
   FUNC_4(
    (struct smb2_preauth_neg_context *)VAR_10);
  else if (VAR_10->ContextType == VAR_3)
   VAR_15 = FUNC_3(VAR_8,
    (struct smb2_encryption_neg_context *)VAR_10);
  else if (VAR_10->ContextType == VAR_2)
   FUNC_2(VAR_8,
    (struct smb2_compression_capabilities_context *)VAR_10);
  else if (VAR_10->ContextType == VAR_4)
   VAR_8->posix_ext_supported = 1;
  else
   FUNC_1(VAR_6, "unknown negcontext of type %d ignored\n",
    FUNC_5(VAR_10->ContextType));

  if (VAR_15)
   break;

  VAR_16 = (VAR_16 + 7) & ~0x7;
  VAR_11 += VAR_16 + sizeof(struct smb2_neg_context);
  VAR_13 -= VAR_16;
 }
 return VAR_15;
}
