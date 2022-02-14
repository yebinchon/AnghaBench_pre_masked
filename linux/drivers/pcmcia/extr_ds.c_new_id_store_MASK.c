
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prod_id_hash; void* device_no; void* function; void* func_id; void* card_id; void* manf_id; void* match_flags; } ;
struct pcmcia_dynid {int node; TYPE_1__ id; } ;
struct TYPE_4__ {int lock; int list; } ;
struct pcmcia_driver {int drv; TYPE_2__ dynids; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;
typedef void* __u8 ;
typedef int __u32 ;
typedef void* __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct pcmcia_dynid* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*,void**,void**,void**,void**,void**,void**,int *,int *,int *,int *) ;
 struct pcmcia_driver* FUNC_7 (struct device_driver*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device_driver *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct pcmcia_dynid *VAR_6;
 struct pcmcia_driver *VAR_7 = FUNC_7(VAR_3);
 __u16 VAR_8, VAR_9, VAR_10;
 __u8 VAR_11, VAR_12, VAR_13;
 __u32 VAR_14[4] = {0, 0, 0, 0};
 int VAR_15 = 0;
 int VAR_16 = 0;

 VAR_15 = FUNC_6(VAR_4, "%hx %hx %hx %hhx %hhx %hhx %x %x %x %x",
   &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13,
   &VAR_14[0], &VAR_14[1], &VAR_14[2], &VAR_14[3]);
 if (VAR_15 < 6)
  return -VAR_0;

 VAR_6 = FUNC_1(sizeof(struct pcmcia_dynid), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->id.match_flags = VAR_8;
 VAR_6->id.manf_id = VAR_9;
 VAR_6->id.card_id = VAR_10;
 VAR_6->id.func_id = VAR_11;
 VAR_6->id.function = VAR_12;
 VAR_6->id.device_no = VAR_13;
 FUNC_3(VAR_6->id.prod_id_hash, VAR_14, sizeof(__u32) * 4);

 FUNC_4(&VAR_7->dynids.lock);
 FUNC_2(&VAR_6->node, &VAR_7->dynids.list);
 FUNC_5(&VAR_7->dynids.lock);

 VAR_16 = FUNC_0(&VAR_7->drv);

 if (VAR_16)
  return VAR_16;
 return VAR_5;
}
