
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_buf {int len; scalar_t__* buffer; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_p2pdma_map_type { ____Placeholder_pci_p2pdma_map_type } pci_p2pdma_map_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,char*,scalar_t__*) ;
 int FUNC_4 (struct seq_buf*,int ,int ) ;
 int FUNC_5 (struct pci_dev*,struct pci_dev*,int*,int*,struct seq_buf*) ;

__attribute__((used)) static enum pci_p2pdma_map_type
FUNC_6(struct pci_dev *VAR_4, struct pci_dev *VAR_5,
         int *VAR_6)
{
 struct seq_buf VAR_7;
 bool VAR_8;
 int VAR_9;

 FUNC_4(&VAR_7, FUNC_1(VAR_2, VAR_1), VAR_2);
 if (!VAR_7.buffer)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_6, &VAR_8,
           &VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_5, "ACS redirect is set between the client and provider (%s)\n",
    FUNC_2(VAR_4));

  VAR_7.buffer[VAR_7.len-1] = 0;
  FUNC_3(VAR_5, "to disable ACS redirect for this path, add the kernel parameter: pci=disable_acs_redir=%s\n",
    VAR_7.buffer);
 }

 if (VAR_9 == VAR_3) {
  FUNC_3(VAR_5, "cannot be used for peer-to-peer DMA as the client and provider (%s) do not share an upstream bridge or whitelisted host bridge\n",
    FUNC_2(VAR_4));
 }

 FUNC_0(VAR_7.buffer);

 return VAR_9;
}
