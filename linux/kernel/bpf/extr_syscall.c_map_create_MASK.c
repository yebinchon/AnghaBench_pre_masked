
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bpf_attr {scalar_t__ btf_value_type_id; scalar_t__ btf_key_type_id; int btf_fd; int map_name; int map_flags; } ;
struct btf {int spin_lock_off; TYPE_1__* ops; int memory; struct btf* btf; scalar_t__ btf_value_type_id; scalar_t__ btf_key_type_id; int usercnt; int refcnt; int name; } ;
struct bpf_map_memory {int dummy; } ;
struct bpf_map {int spin_lock_off; TYPE_1__* ops; int memory; struct bpf_map* btf; scalar_t__ btf_value_type_id; scalar_t__ btf_key_type_id; int usercnt; int refcnt; int name; } ;
struct TYPE_2__ {int (* map_free ) (struct btf*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct btf*) ;
 int VAR_2 ;
 int FUNC_2 (struct btf*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct btf*) ;
 int FUNC_6 (union bpf_attr*) ;
 int FUNC_7 (struct bpf_map_memory*) ;
 int FUNC_8 (struct bpf_map_memory*,int *) ;
 int FUNC_9 (struct btf*,int) ;
 int FUNC_10 (struct btf*) ;
 int FUNC_11 (int ,int ) ;
 struct btf* FUNC_12 (int ) ;
 int FUNC_13 (struct btf*) ;
 struct btf* FUNC_14 (union bpf_attr*) ;
 int FUNC_15 (struct btf*,struct btf*,scalar_t__,scalar_t__) ;
 int FUNC_16 (int) ;
 unsigned int VAR_3 ;
 int FUNC_17 (struct btf*) ;
 int FUNC_18 (struct btf*) ;
 int FUNC_19 (struct btf*) ;

__attribute__((used)) static int FUNC_20(union bpf_attr *VAR_4)
{
 int VAR_5 = FUNC_6(VAR_4);
 struct bpf_map_memory VAR_6;
 struct bpf_map *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_0);
 if (VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_4->map_flags);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5 != VAR_2 &&
     ((unsigned int)VAR_5 >= VAR_3 ||
      !FUNC_16(VAR_5)))
  return -VAR_1;


 VAR_7 = FUNC_14(VAR_4);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_9 = FUNC_11(VAR_7->name, VAR_4->map_name);
 if (VAR_9)
  goto free_map;

 FUNC_3(&VAR_7->refcnt, 1);
 FUNC_3(&VAR_7->usercnt, 1);

 if (VAR_4->btf_key_type_id || VAR_4->btf_value_type_id) {
  struct btf *VAR_10;

  if (!VAR_4->btf_value_type_id) {
   VAR_9 = -VAR_1;
   goto free_map;
  }

  VAR_10 = FUNC_12(VAR_4->btf_fd);
  if (FUNC_1(VAR_10)) {
   VAR_9 = FUNC_2(VAR_10);
   goto free_map;
  }

  VAR_9 = FUNC_15(VAR_7, VAR_10, VAR_4->btf_key_type_id,
        VAR_4->btf_value_type_id);
  if (VAR_9) {
   FUNC_13(VAR_10);
   goto free_map;
  }

  VAR_7->btf = VAR_10;
  VAR_7->btf_key_type_id = VAR_4->btf_key_type_id;
  VAR_7->btf_value_type_id = VAR_4->btf_value_type_id;
 } else {
  VAR_7->spin_lock_off = -VAR_1;
 }

 VAR_9 = FUNC_17(VAR_7);
 if (VAR_9)
  goto free_map;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  goto free_map_sec;

 VAR_9 = FUNC_9(VAR_7, VAR_8);
 if (VAR_9 < 0) {






  FUNC_10(VAR_7);
  return VAR_9;
 }

 return VAR_9;

free_map_sec:
 FUNC_18(VAR_7);
free_map:
 FUNC_13(VAR_7->btf);
 FUNC_8(&VAR_6, &VAR_7->memory);
 VAR_7->ops->map_free(VAR_7);
 FUNC_7(&VAR_6);
 return VAR_9;
}
