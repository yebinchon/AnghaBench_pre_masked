
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_neg_context {int dummy; } ;
struct smb2_compression_capabilities_context {int * CompressionAlgorithms; void* CompressionAlgorithmCount; void* DataLength; int ContextType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct smb2_compression_capabilities_context *VAR_4)
{
 VAR_4->ContextType = VAR_0;
 VAR_4->DataLength =
  FUNC_0(sizeof(struct smb2_compression_capabilities_context)
     - sizeof(struct smb2_neg_context));
 VAR_4->CompressionAlgorithmCount = FUNC_0(3);
 VAR_4->CompressionAlgorithms[0] = VAR_1;
 VAR_4->CompressionAlgorithms[1] = VAR_2;
 VAR_4->CompressionAlgorithms[2] = VAR_3;
}
