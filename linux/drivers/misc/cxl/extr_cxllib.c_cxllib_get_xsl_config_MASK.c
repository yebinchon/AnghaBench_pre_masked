
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct cxllib_xsl_config {scalar_t__ dra; int bar_addr; int log_bar_size; int version; int dsnctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int *,int *,int *) ;
 int FUNC_3 (struct pci_dev*,int ,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct pci_dev *VAR_8, struct cxllib_xsl_config *VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 u64 VAR_12, VAR_13;

 if (!FUNC_1(VAR_0))
  return -VAR_5;

 FUNC_4(&VAR_6);
 if (VAR_7 == VAR_3) {
  VAR_10 = FUNC_0();
  if (VAR_10) {
   FUNC_5(&VAR_6);
   return VAR_10;
  }
 }
 FUNC_5(&VAR_6);

 VAR_10 = FUNC_2(VAR_8, &VAR_12, &VAR_11, &VAR_13);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_8, VAR_13, &VAR_9->dsnctl);
 if (VAR_10)
  return VAR_10;

 VAR_9->version = VAR_4;
 VAR_9->log_bar_size = VAR_1;
 VAR_9->bar_addr = VAR_2;
 VAR_9->dra = VAR_7;
 return 0;
}
