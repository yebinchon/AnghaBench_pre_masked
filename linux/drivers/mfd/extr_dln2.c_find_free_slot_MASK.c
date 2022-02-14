
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct dln2_rx_context {int in_use; } ;
struct dln2_mod_rx_slots {int lock; int bmap; struct dln2_rx_context* slots; } ;
struct dln2_dev {struct dln2_mod_rx_slots* mod_rx_slots; scalar_t__ disconnect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct dln2_dev *VAR_2, u16 VAR_3, int *VAR_4)
{
 struct dln2_mod_rx_slots *VAR_5;
 unsigned long VAR_6;

 if (VAR_2->disconnect) {
  *VAR_4 = -VAR_1;
  return 1;
 }

 VAR_5 = &VAR_2->mod_rx_slots[VAR_3];

 FUNC_2(&VAR_5->lock, VAR_6);

 *VAR_4 = FUNC_0(VAR_5->bmap, VAR_0);

 if (*VAR_4 < VAR_0) {
  struct dln2_rx_context *VAR_7 = &VAR_5->slots[*VAR_4];

  FUNC_1(*VAR_4, VAR_5->bmap);
  VAR_7->in_use = 1;
 }

 FUNC_3(&VAR_5->lock, VAR_6);

 return *VAR_4 < VAR_0;
}
