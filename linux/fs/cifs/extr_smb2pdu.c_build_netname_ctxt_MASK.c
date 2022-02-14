
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_netname_neg_context {int DataLength; int NetName; int ContextType; } ;
struct smb2_neg_context {int dummy; } ;
struct nls_table {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,struct nls_table*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct nls_table* FUNC_4 () ;

__attribute__((used)) static unsigned int
FUNC_5(struct smb2_netname_neg_context *VAR_1, char *VAR_2)
{
 struct nls_table *VAR_3 = FUNC_4();

 VAR_1->ContextType = VAR_0;


 VAR_1->DataLength = FUNC_2(2 * FUNC_1(VAR_1->NetName, VAR_2, 100, VAR_3));

 return FUNC_0(FUNC_3(VAR_1->DataLength) +
   sizeof(struct smb2_neg_context), 8) * 8;
}
