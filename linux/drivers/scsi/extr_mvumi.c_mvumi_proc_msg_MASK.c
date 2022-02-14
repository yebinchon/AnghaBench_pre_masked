
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mvumi_hotplug_event {int size; int * bitmap; } ;
struct mvumi_hba {int fw_flag; int sas_discovery_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long const*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mvumi_hba*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct mvumi_hba *VAR_3,
     struct mvumi_hotplug_event *VAR_4)
{
 u16 VAR_5 = VAR_4->size;
 const unsigned long *VAR_6;
 const unsigned long *VAR_7;
 int VAR_8;

 if (VAR_3->fw_flag & VAR_2) {
  VAR_8 = -1;
  VAR_6 = (const unsigned long *) VAR_4->bitmap;
  VAR_7 = (const unsigned long *) &VAR_4->bitmap[VAR_5 >> 3];

  FUNC_1(&VAR_3->sas_discovery_mutex);
  do {
   VAR_8 = FUNC_0(VAR_6, VAR_5, VAR_8 + 1);
   if (VAR_8 >= VAR_5)
    break;
   FUNC_3(VAR_3, VAR_8, VAR_1);
  } while (1);

  VAR_8 = -1;
  do {
   VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_8 + 1);
   if (VAR_8 >= VAR_5)
    break;
   FUNC_3(VAR_3, VAR_8, VAR_0);
  } while (1);
  FUNC_2(&VAR_3->sas_discovery_mutex);
 }
}
