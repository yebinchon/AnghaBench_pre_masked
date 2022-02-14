
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int command; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; } ;
struct qeth_card {int dummy; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int,char*,char const*,int,int ,...) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct qeth_ipa_cmd *VAR_0, int VAR_1,
  struct qeth_card *VAR_2)
{
 const char *VAR_3;
 int VAR_4 = VAR_0->hdr.command;
 VAR_3 = FUNC_2(VAR_4);

 if (VAR_1)
  FUNC_1(2, "IPA: %s(%#x) for device %x returned %#x \"%s\"\n",
     VAR_3, VAR_4, FUNC_0(VAR_2), VAR_1,
     FUNC_3(VAR_1));
 else
  FUNC_1(5, "IPA: %s(%#x) for device %x succeeded\n",
     VAR_3, VAR_4, FUNC_0(VAR_2));
}
