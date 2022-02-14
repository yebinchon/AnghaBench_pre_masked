
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct hnae3_ae_ops {int (* get_reset_level ) (struct hnae3_ae_dev*,scalar_t__*) ;int (* reset_event ) (struct pci_dev*,int *) ;int (* set_default_reset_request ) (struct hnae3_ae_dev*,int) ;} ;
struct hnae3_ae_dev {scalar_t__ hw_err_reset_req; struct hnae3_ae_ops* ops; } ;
typedef int pci_ers_result_t ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct hnae3_ae_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct hnae3_ae_dev*,scalar_t__*) ;
 int FUNC_3 (struct hnae3_ae_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_5(struct pci_dev *VAR_3)
{
 struct hnae3_ae_dev *VAR_4 = FUNC_1(VAR_3);
 const struct hnae3_ae_ops *VAR_5;
 enum hnae3_reset_type VAR_6;
 struct device *VAR_7 = &VAR_3->dev;

 if (!VAR_4 || !VAR_4->ops)
  return VAR_1;

 VAR_5 = VAR_4->ops;

 if (VAR_5->reset_event && VAR_5->get_reset_level &&
     VAR_5->set_default_reset_request) {
  if (VAR_4->hw_err_reset_req) {
   VAR_6 = VAR_5->get_reset_level(VAR_4,
      &VAR_4->hw_err_reset_req);
   VAR_5->set_default_reset_request(VAR_4, VAR_6);
   FUNC_0(VAR_7, "requesting reset due to PCI error\n");
   VAR_5->reset_event(VAR_3, ((void*)0));
  }

  return VAR_2;
 }

 return VAR_0;
}
