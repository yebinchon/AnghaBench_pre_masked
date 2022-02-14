
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enet_cb {int dummy; } ;
struct bcmgenet_tx_ring {scalar_t__ write_ptr; scalar_t__ cb_ptr; scalar_t__ end_ptr; struct enet_cb* cbs; } ;
struct bcmgenet_priv {int dummy; } ;



__attribute__((used)) static struct enet_cb *FUNC_0(struct bcmgenet_priv *VAR_0,
      struct bcmgenet_tx_ring *VAR_1)
{
 struct enet_cb *VAR_2;

 VAR_2 = VAR_1->cbs;
 VAR_2 += VAR_1->write_ptr - VAR_1->cb_ptr;


 if (VAR_1->write_ptr == VAR_1->end_ptr)
  VAR_1->write_ptr = VAR_1->cb_ptr;
 else
  VAR_1->write_ptr++;

 return VAR_2;
}
