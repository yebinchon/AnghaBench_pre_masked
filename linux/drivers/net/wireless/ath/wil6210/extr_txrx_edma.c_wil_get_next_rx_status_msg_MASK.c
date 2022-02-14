
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wil_status_ring {int elem_size; int swhead; scalar_t__ va; } ;
struct wil_rx_status_compressed {int d0; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline
void FUNC_3(struct wil_status_ring *VAR_0, u8 *VAR_1,
    void *VAR_2)
{
 struct wil_rx_status_compressed *VAR_3;

 VAR_3 = (struct wil_rx_status_compressed *)
  (VAR_0->va + (VAR_0->elem_size * VAR_0->swhead));
 *VAR_1 = FUNC_0(VAR_3->d0, 31, 31);

 FUNC_2();
 FUNC_1(VAR_2, (void *)VAR_3, VAR_0->elem_size);
}
