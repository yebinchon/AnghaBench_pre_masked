
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_port {int dev; struct rocker* rocker; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,char*,size_t,int ) ;
 int FUNC_4 (struct pci_dev*,int ,size_t,int ) ;
 int FUNC_5 (struct rocker_desc_info*,struct rocker_tlv*) ;
 int FUNC_6 (struct rocker_desc_info*,struct rocker_tlv*) ;
 struct rocker_tlv* FUNC_7 (struct rocker_desc_info*,int ) ;
 scalar_t__ FUNC_8 (struct rocker_desc_info*,int ,size_t) ;
 scalar_t__ FUNC_9 (struct rocker_desc_info*,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(const struct rocker_port *VAR_6,
           struct rocker_desc_info *VAR_7,
           char *VAR_8, size_t VAR_9)
{
 const struct rocker *VAR_10 = VAR_6->rocker;
 struct pci_dev *VAR_11 = VAR_10->pdev;
 dma_addr_t VAR_12;
 struct rocker_tlv *VAR_13;

 VAR_12 = FUNC_3(VAR_11, VAR_8, VAR_9, VAR_0);
 if (FUNC_10(FUNC_2(VAR_11, VAR_12))) {
  if (FUNC_0())
   FUNC_1(VAR_6->dev, "failed to dma map tx frag\n");
  return -VAR_1;
 }
 VAR_13 = FUNC_7(VAR_7, VAR_3);
 if (!VAR_13)
  goto unmap_frag;
 if (FUNC_9(VAR_7, VAR_4,
          VAR_12))
  goto nest_cancel;
 if (FUNC_8(VAR_7, VAR_5,
          VAR_9))
  goto nest_cancel;
 FUNC_6(VAR_7, VAR_13);
 return 0;

nest_cancel:
 FUNC_5(VAR_7, VAR_13);
unmap_frag:
 FUNC_4(VAR_11, VAR_12, VAR_9, VAR_0);
 return -VAR_2;
}
