
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcmcia_device {int manf_id; int card_id; int func_id; int func; int device_no; scalar_t__ has_func_id; scalar_t__ has_card_id; scalar_t__ has_manf_id; int * prod_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int ) ;
 struct pcmcia_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct pcmcia_device *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;
 u32 VAR_5[4] = { 0, 0, 0, 0};


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  if (!VAR_3->prod_id[VAR_4])
   continue;
  VAR_5[VAR_4] = FUNC_0(0, VAR_3->prod_id[VAR_4],
    FUNC_2(VAR_3->prod_id[VAR_4]));
 }
 return FUNC_1(VAR_2, "pcmcia:m%04Xc%04Xf%02Xfn%02Xpfn%02X"
    "pa%08Xpb%08Xpc%08Xpd%08X\n",
    VAR_3->has_manf_id ? VAR_3->manf_id : 0,
    VAR_3->has_card_id ? VAR_3->card_id : 0,
    VAR_3->has_func_id ? VAR_3->func_id : 0,
    VAR_3->func, VAR_3->device_no,
    VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);
}
