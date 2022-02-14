
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct dln2_dev {TYPE_1__* mod_rx_slots; } ;
struct TYPE_2__ {int wq; } ;


 int FUNC_0 (struct dln2_dev*,size_t,int*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dln2_dev *VAR_0, u16 VAR_1)
{
 int VAR_2;
 int VAR_3;





 VAR_2 = FUNC_1(VAR_0->mod_rx_slots[VAR_1].wq,
           FUNC_0(VAR_0, VAR_1, &VAR_3));
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_3;
}
