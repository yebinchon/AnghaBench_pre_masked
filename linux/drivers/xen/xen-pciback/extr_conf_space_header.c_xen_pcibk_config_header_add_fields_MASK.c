
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int hdr_type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct pci_dev*,int ) ;

int FUNC_3(struct pci_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  goto out;

 switch (VAR_4->hdr_type) {
 case 128:
  VAR_5 = FUNC_2(VAR_4, VAR_1);
  break;

 case 129:
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  break;

 default:
  VAR_5 = -VAR_0;
  FUNC_1("%s: Unsupported header type %d!\n",
         FUNC_0(VAR_4), VAR_4->hdr_type);
  break;
 }

out:
 return VAR_5;
}
