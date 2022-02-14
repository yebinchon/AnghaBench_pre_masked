
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_device {TYPE_1__* path; } ;
struct dasd_cuir_message {unsigned long ned_map; int* neq_map; } ;
struct dasd_conf_data {int gneq; int * neds; } ;
typedef int __u8 ;
struct TYPE_2__ {struct dasd_conf_data* conf_data; } ;


 int FUNC_0 (unsigned int,unsigned long*) ;
 struct dasd_conf_data* FUNC_1 (struct dasd_device*,int,struct dasd_cuir_message*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_0, __u8 VAR_1,
    struct dasd_cuir_message *VAR_2)
{
 struct dasd_conf_data *VAR_3;
 unsigned long VAR_4 = 0, VAR_5 = 0;
 struct dasd_conf_data *VAR_6;
 unsigned int VAR_7, VAR_8;
 char *VAR_9, *VAR_10;
 char *VAR_11, *VAR_12;
 int VAR_13 = 0;



 if (!VAR_2->ned_map ||
     !(VAR_2->neq_map[0] | VAR_2->neq_map[1] | VAR_2->neq_map[2]))
  return VAR_1;


 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_7 = 8 - FUNC_2(VAR_2->ned_map);
 VAR_11 = (char *)&VAR_3->neds[VAR_7];
 VAR_9 = (char *)&VAR_3->gneq;

 VAR_5 = VAR_2->neq_map[2];
 VAR_5 |= VAR_2->neq_map[1] << 8;
 VAR_5 |= VAR_2->neq_map[0] << 16;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {

  VAR_4 = VAR_5;
  VAR_6 = VAR_0->path[VAR_8].conf_data;
  VAR_7 = 8 - FUNC_2(VAR_2->ned_map);
  VAR_12 = (char *) &VAR_6->neds[VAR_7];

  if (FUNC_3(VAR_11, VAR_12, sizeof(*VAR_12)) != 0)
   continue;
  VAR_10 = (char *)&VAR_6->gneq;



  while (VAR_4) {
   VAR_7 = FUNC_2(VAR_4) - 1;
   if (FUNC_3(&VAR_9[31 - VAR_7], &VAR_10[31 - VAR_7], 1)
       != 0)
    break;
   FUNC_0(VAR_7, &VAR_4);
  }
  if (VAR_4)
   continue;


  VAR_13 |= 0x80 >> VAR_8;
 }
 return VAR_13;
}
