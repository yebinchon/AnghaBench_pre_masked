
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int (* mmcie_add ) (struct wusbhc*,int ,int ,unsigned int,struct wuie_hdr*) ;int mmcie_mutex; struct wuie_hdr** mmcie; int mmcies_max; int dev; } ;
struct wuie_hdr {int bIEIdentifier; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wusbhc*,int ,int ,unsigned int,struct wuie_hdr*) ;

int FUNC_4(struct wusbhc *VAR_2, u8 VAR_3, u8 VAR_4,
       struct wuie_hdr *VAR_5)
{
 int VAR_6 = -VAR_0;
 unsigned VAR_7, VAR_8;


 FUNC_1(&VAR_2->mmcie_mutex);
 switch (VAR_5->bIEIdentifier) {
 case 129:

  VAR_7 = VAR_2->mmcies_max - 1;
  break;
 case 128:
  FUNC_0(VAR_2->dev, "Special ordering case for WUIE ID 0x%x "
   "unimplemented\n", VAR_5->bIEIdentifier);
  VAR_6 = -VAR_1;
  goto error_unlock;
 default:

  VAR_7 = ~0;
  for (VAR_8 = 0; VAR_8 < VAR_2->mmcies_max - 1; VAR_8++) {
   if (VAR_2->mmcie[VAR_8] == VAR_5) {
    VAR_7 = VAR_8;
    break;
   }
   if (VAR_2->mmcie[VAR_8] == ((void*)0))
    VAR_7 = VAR_8;
  }
  if (VAR_7 == ~0)
   goto error_unlock;
 }
 VAR_6 = (VAR_2->mmcie_add)(VAR_2, VAR_3, VAR_4, VAR_7,
         VAR_5);
 if (VAR_6 >= 0)
  VAR_2->mmcie[VAR_7] = VAR_5;
error_unlock:
 FUNC_2(&VAR_2->mmcie_mutex);
 return VAR_6;
}
