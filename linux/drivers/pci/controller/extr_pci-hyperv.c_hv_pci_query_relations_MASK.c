
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_message {int type; } ;
struct hv_pcibus_device {int survey_event; } ;
struct hv_device {int channel; } ;
struct completion {int dummy; } ;
typedef int message ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,struct completion*) ;
 struct hv_pcibus_device* FUNC_1 (struct hv_device*) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (struct pci_message*,int ,int) ;
 int FUNC_4 (int ,struct pci_message*,int,int ,int ,int ) ;
 int FUNC_5 (struct hv_device*,struct completion*) ;

__attribute__((used)) static int FUNC_6(struct hv_device *VAR_3)
{
 struct hv_pcibus_device *VAR_4 = FUNC_1(VAR_3);
 struct pci_message VAR_5;
 struct completion VAR_6;
 int VAR_7;


 FUNC_2(&VAR_6);
 if (FUNC_0(&VAR_4->survey_event, ((void*)0), &VAR_6))
  return -VAR_0;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.type = VAR_1;

 VAR_7 = FUNC_4(VAR_3->channel, &VAR_5, sizeof(VAR_5),
          0, VAR_2, 0);
 if (!VAR_7)
  VAR_7 = FUNC_5(VAR_3, &VAR_6);

 return VAR_7;
}
