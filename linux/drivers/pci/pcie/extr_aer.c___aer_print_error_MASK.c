
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aer_err_info {int status; int mask; scalar_t__ severity; int first_error; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**) ;
 char** VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_2 (struct pci_dev*,char*,int,char const*,...) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3,
         struct aer_err_info *VAR_4)
{
 int VAR_5, VAR_6;
 const char *VAR_7 = ((void*)0);
 VAR_6 = (VAR_4->status & ~VAR_4->mask);

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  if (!(VAR_6 & (1 << VAR_5)))
   continue;

  if (VAR_4->severity == VAR_0)
   VAR_7 = VAR_5 < FUNC_0(VAR_1) ?
    VAR_1[VAR_5] : ((void*)0);
  else
   VAR_7 = VAR_5 < FUNC_0(VAR_2) ?
    VAR_2[VAR_5] : ((void*)0);

  if (VAR_7)
   FUNC_2(VAR_3, "   [%2d] %-22s%s\n", VAR_5, VAR_7,
    VAR_4->first_error == VAR_5 ? " (First)" : "");
  else
   FUNC_2(VAR_3, "   [%2d] Unknown Error Bit%s\n",
    VAR_5, VAR_4->first_error == VAR_5 ? " (First)" : "");
 }
 FUNC_1(VAR_3, VAR_4);
}
