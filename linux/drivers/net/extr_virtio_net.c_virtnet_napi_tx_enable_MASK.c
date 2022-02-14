
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtnet_info {int affinity_hint_set; } ;
struct napi_struct {scalar_t__ weight; } ;


 void FUNC_0 (struct virtqueue*,struct napi_struct*) ;

__attribute__((used)) static void FUNC_1(struct virtnet_info *VAR_0,
       struct virtqueue *VAR_1,
       struct napi_struct *VAR_2)
{
 if (!VAR_2->weight)
  return;




 if (!VAR_0->affinity_hint_set) {
  VAR_2->weight = 0;
  return;
 }

 return FUNC_0(VAR_1, VAR_2);
}
