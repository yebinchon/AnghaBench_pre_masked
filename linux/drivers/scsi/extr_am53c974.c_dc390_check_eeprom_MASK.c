
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct esp {int scsi_id; int num_tags; int config4; int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pci_dev*,int*) ;
 int FUNC_1 (int ,int *,char*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct esp *VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_2(VAR_8->dev);
 u8 VAR_10[128];
 u16 *VAR_11 = (u16 *)VAR_10, VAR_12 = 0;
 int VAR_13;

 FUNC_0(VAR_9, VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++, VAR_11++)
  VAR_12 += *VAR_11;


 if (VAR_12 != 0x1234) {
  FUNC_1(VAR_7, &VAR_9->dev,
      "No valid Tekram EEprom found\n");
  return;
 }
 VAR_8->scsi_id = VAR_10[VAR_1];
 VAR_8->num_tags = 2 << VAR_10[VAR_4];
 if (VAR_10[VAR_2] & VAR_3)
  VAR_8->config4 |= VAR_5 | VAR_6;
}
