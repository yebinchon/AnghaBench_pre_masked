
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aer_rpc {struct pci_dev* rpd; } ;
struct aer_err_source {int status; int id; } ;
struct aer_err_info {int multi_error_valid; int severity; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_3 (struct aer_err_info*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_5 (struct pci_dev*,struct aer_err_source*) ;

__attribute__((used)) static void FUNC_6(struct aer_rpc *VAR_8,
  struct aer_err_source *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_8->rpd;
 struct aer_err_info VAR_11;

 FUNC_5(VAR_10, VAR_9);





 if (VAR_9->status & VAR_3) {
  VAR_11.id = FUNC_0(VAR_9->id);
  VAR_11.severity = VAR_0;

  if (VAR_9->status & VAR_5)
   VAR_11.multi_error_valid = 1;
  else
   VAR_11.multi_error_valid = 0;
  FUNC_2(VAR_10, &VAR_11);

  if (FUNC_4(VAR_10, &VAR_11))
   FUNC_3(&VAR_11);
 }

 if (VAR_9->status & VAR_7) {
  VAR_11.id = FUNC_1(VAR_9->id);

  if (VAR_9->status & VAR_4)
   VAR_11.severity = VAR_1;
  else
   VAR_11.severity = VAR_2;

  if (VAR_9->status & VAR_6)
   VAR_11.multi_error_valid = 1;
  else
   VAR_11.multi_error_valid = 0;

  FUNC_2(VAR_10, &VAR_11);

  if (FUNC_4(VAR_10, &VAR_11))
   FUNC_3(&VAR_11);
 }
}
