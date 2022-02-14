
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct TYPE_4__ {unsigned long long start; unsigned long end; int list; int cpp_id; void* name; } ;
struct nfp_cpp_area {unsigned long long offset; unsigned long size; TYPE_2__ resource; int mutex; int kref; int refcount; struct nfp_cpp* cpp; } ;
struct nfp_cpp {int resource_lock; int resource_list; TYPE_1__* op; int imb_cat_table; } ;
struct TYPE_3__ {int area_priv_size; int (* area_init ) (struct nfp_cpp_area*,int ,unsigned long long,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct nfp_cpp_area*) ;
 int FUNC_4 (int *) ;
 struct nfp_cpp_area* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,unsigned long long,int *,unsigned long long*,int ) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct nfp_cpp_area*,int ,unsigned long long,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

struct nfp_cpp_area *
FUNC_13(struct nfp_cpp *VAR_1, u32 VAR_2, const char *VAR_3,
        unsigned long long VAR_4, unsigned long VAR_5)
{
 struct nfp_cpp_area *VAR_6;
 u64 VAR_7 = VAR_4;
 int VAR_8, VAR_9;


 VAR_8 = FUNC_8(VAR_2, VAR_7, &VAR_2, &VAR_7, VAR_1->imb_cat_table);
 if (VAR_8 < 0)
  return ((void*)0);

 VAR_4 = VAR_7;

 if (!VAR_3)
  VAR_3 = "(reserved)";

 VAR_9 = FUNC_9(VAR_3) + 1;
 VAR_6 = FUNC_5(sizeof(*VAR_6) + VAR_1->op->area_priv_size + VAR_9,
         VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->cpp = VAR_1;
 VAR_6->resource.name = (void *)VAR_6 + sizeof(*VAR_6) +
  VAR_1->op->area_priv_size;
 FUNC_6((char *)VAR_6->resource.name, VAR_3, VAR_9);

 VAR_6->resource.cpp_id = VAR_2;
 VAR_6->resource.start = VAR_4;
 VAR_6->resource.end = VAR_6->resource.start + VAR_5 - 1;
 FUNC_0(&VAR_6->resource.list);

 FUNC_2(&VAR_6->refcount, 0);
 FUNC_4(&VAR_6->kref);
 FUNC_7(&VAR_6->mutex);

 if (VAR_1->op->area_init) {
  int VAR_10;

  VAR_10 = VAR_1->op->area_init(VAR_6, VAR_2, VAR_4, VAR_5);
  if (VAR_10 < 0) {
   FUNC_3(VAR_6);
   return ((void*)0);
  }
 }

 FUNC_11(&VAR_1->resource_lock);
 FUNC_1(&VAR_1->resource_list, &VAR_6->resource);
 FUNC_12(&VAR_1->resource_lock);

 VAR_6->offset = VAR_4;
 VAR_6->size = VAR_5;

 return VAR_6;
}
