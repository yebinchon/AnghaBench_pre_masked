
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_status_ring {size_t elem_size; size_t size; int * va; int pa; } ;
struct wil6210_priv {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,size_t,void*,int ) ;
 int FUNC_1 (struct wil6210_priv*,char*,size_t,int *,int *) ;
 struct device* FUNC_2 (struct wil6210_priv*) ;

__attribute__((used)) static void FUNC_3(struct wil6210_priv *VAR_0,
      struct wil_status_ring *VAR_1)
{
 struct device *VAR_2 = FUNC_2(VAR_0);
 size_t VAR_3;

 if (!VAR_1 || !VAR_1->va)
  return;

 VAR_3 = VAR_1->elem_size * VAR_1->size;

 FUNC_1(VAR_0, "status_ring_free, size(bytes)=%zu, 0x%p:%pad\n",
       VAR_3, VAR_1->va, &VAR_1->pa);

 FUNC_0(VAR_2, VAR_3, (void *)VAR_1->va, VAR_1->pa);
 VAR_1->pa = 0;
 VAR_1->va = ((void*)0);
}
