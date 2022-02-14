
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct rproc {int table_sz; TYPE_1__* table_ptr; struct device dev; } ;
struct fw_rsc_hdr {size_t type; } ;
typedef int (* rproc_handle_resource_t ) (struct rproc*,void*,int,int) ;
struct TYPE_2__ {int num; int* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct device*,char*,size_t) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,size_t) ;
 int FUNC_3 (struct rproc*,size_t,void*,int,int) ;

__attribute__((used)) static int FUNC_4(struct rproc *VAR_5,
      rproc_handle_resource_t VAR_6[VAR_2])
{
 struct device *VAR_7 = &VAR_5->dev;
 rproc_handle_resource_t VAR_8;
 int VAR_9 = 0, VAR_10;

 if (!VAR_5->table_ptr)
  return 0;

 for (VAR_10 = 0; VAR_10 < VAR_5->table_ptr->num; VAR_10++) {
  int VAR_11 = VAR_5->table_ptr->offset[VAR_10];
  struct fw_rsc_hdr *VAR_12 = (void *)VAR_5->table_ptr + VAR_11;
  int VAR_13 = VAR_5->table_sz - VAR_11 - sizeof(*VAR_12);
  void *VAR_14 = (void *)VAR_12 + sizeof(*VAR_12);


  if (VAR_13 < 0) {
   FUNC_1(VAR_7, "rsc table is truncated\n");
   return -VAR_0;
  }

  FUNC_0(VAR_7, "rsc: type %d\n", VAR_12->type);

  if (VAR_12->type >= VAR_4 &&
      VAR_12->type <= VAR_3) {
   VAR_9 = FUNC_3(VAR_5, VAR_12->type, VAR_14,
            VAR_11 + sizeof(*VAR_12), VAR_13);
   if (VAR_9 == VAR_1)
    continue;
   else if (VAR_9 < 0)
    break;

   FUNC_2(VAR_7, "unsupported vendor resource %d\n",
     VAR_12->type);
   continue;
  }

  if (VAR_12->type >= VAR_2) {
   FUNC_2(VAR_7, "unsupported resource %d\n", VAR_12->type);
   continue;
  }

  VAR_8 = VAR_6[VAR_12->type];
  if (!VAR_8)
   continue;

  VAR_9 = VAR_8(VAR_5, VAR_14, VAR_11 + sizeof(*VAR_12), VAR_13);
  if (VAR_9)
   break;
 }

 return VAR_9;
}
