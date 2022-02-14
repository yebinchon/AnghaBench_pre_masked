
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_iter {void* key; } ;
struct bpf_map {int key_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct map_iter*) ;

__attribute__((used)) static struct map_iter *FUNC_2(struct bpf_map *VAR_2)
{
 struct map_iter *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0 | VAR_1);
 if (!VAR_3)
  goto error;

 VAR_3->key = FUNC_0(VAR_2->key_size, VAR_0 | VAR_1);
 if (!VAR_3->key)
  goto error;

 return VAR_3;

error:
 FUNC_1(VAR_3);
 return ((void*)0);
}
