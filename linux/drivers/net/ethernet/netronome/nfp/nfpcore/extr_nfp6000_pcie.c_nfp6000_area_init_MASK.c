
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct nfp_cpp_area {int dummy; } ;
struct TYPE_2__ {scalar_t__ read; scalar_t__ write; scalar_t__ bar; } ;
struct nfp6000_area_priv {unsigned long long offset; unsigned long size; int resource; void* token; void* action; void* target; int * bar; int refcnt; TYPE_1__ width; } ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,void*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int) ;
 struct nfp6000_area_priv* FUNC_8 (struct nfp_cpp_area*) ;
 int FUNC_9 (int ,unsigned long long) ;

__attribute__((used)) static int FUNC_10(struct nfp_cpp_area *VAR_1, u32 VAR_2,
        unsigned long long VAR_3, unsigned long VAR_4)
{
 struct nfp6000_area_priv *VAR_5 = FUNC_8(VAR_1);
 u32 VAR_6 = FUNC_2(VAR_2);
 u32 VAR_7 = FUNC_1(VAR_2);
 u32 VAR_8 = FUNC_3(VAR_2);
 int VAR_9;

 VAR_9 = FUNC_9(FUNC_0(VAR_6, VAR_7, VAR_8), VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->width.read = FUNC_5(VAR_9);
 VAR_5->width.write = FUNC_4(VAR_9);
 if (VAR_5->width.read > 0 &&
     VAR_5->width.write > 0 &&
     VAR_5->width.read != VAR_5->width.write) {
  return -VAR_0;
 }

 if (VAR_5->width.read > 0)
  VAR_5->width.bar = VAR_5->width.read;
 else
  VAR_5->width.bar = VAR_5->width.write;

 FUNC_6(&VAR_5->refcnt, 0);
 VAR_5->bar = ((void*)0);

 VAR_5->target = VAR_6;
 VAR_5->action = VAR_7;
 VAR_5->token = VAR_8;
 VAR_5->offset = VAR_3;
 VAR_5->size = VAR_4;
 FUNC_7(&VAR_5->resource, 0, sizeof(VAR_5->resource));

 return 0;
}
