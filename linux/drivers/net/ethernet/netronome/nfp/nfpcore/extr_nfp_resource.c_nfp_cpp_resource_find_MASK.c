
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_4__ {int cpp_action; scalar_t__ page_size; scalar_t__ page_offset; int cpp_token; int cpp_target; } ;
struct TYPE_3__ {void* key; } ;
struct nfp_resource_entry {TYPE_2__ region; TYPE_1__ mutex; } ;
struct nfp_resource {int addr; int size; void* cpp_id; int mutex; int name; } ;
struct nfp_cpp {int dummy; } ;
typedef int entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfp_cpp*,int ,int,void*) ;
 int FUNC_3 (struct nfp_cpp*,void*,int,struct nfp_resource_entry*,int) ;
 int FUNC_4 (struct nfp_cpp*,char*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nfp_cpp *VAR_8, struct nfp_resource *VAR_9)
{
 struct nfp_resource_entry VAR_10;
 u32 VAR_11, VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_0(VAR_7, 3, 0);


 if (!FUNC_5(VAR_9->name, VAR_6)) {
  FUNC_4(VAR_8, "Grabbing device lock not supported\n");
  return -VAR_2;
 }
 VAR_12 = FUNC_1(VAR_9->name, VAR_3);

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  u64 VAR_15 = VAR_4 +
   sizeof(struct nfp_resource_entry) * VAR_14;

  VAR_13 = FUNC_3(VAR_8, VAR_11, VAR_15, &VAR_10, sizeof(VAR_10));
  if (VAR_13 != sizeof(VAR_10))
   return -VAR_0;

  if (VAR_10.mutex.key != VAR_12)
   continue;


  VAR_9->mutex =
   FUNC_2(VAR_8,
         VAR_7, VAR_15, VAR_12);
  VAR_9->cpp_id = FUNC_0(VAR_10.region.cpp_target,
      VAR_10.region.cpp_action,
      VAR_10.region.cpp_token);
  VAR_9->addr = (u64)VAR_10.region.page_offset << 8;
  VAR_9->size = (u64)VAR_10.region.page_size << 8;

  return 0;
 }

 return -VAR_1;
}
