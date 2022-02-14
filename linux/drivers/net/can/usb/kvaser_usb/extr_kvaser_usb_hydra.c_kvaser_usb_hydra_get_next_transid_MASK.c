
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct kvaser_usb_dev_card_data_hydra {scalar_t__ transid; int transid_lock; } ;
struct TYPE_2__ {struct kvaser_usb_dev_card_data_hydra hydra; } ;
struct kvaser_usb {TYPE_1__ card_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u16 FUNC_2(struct kvaser_usb *VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4;
 struct kvaser_usb_dev_card_data_hydra *VAR_5 =
       &VAR_2->card_data.hydra;

 FUNC_0(&VAR_5->transid_lock, VAR_3);
 VAR_4 = VAR_5->transid;
 if (VAR_4 >= VAR_0)
  VAR_4 = VAR_1;
 else
  VAR_4++;
 VAR_5->transid = VAR_4;
 FUNC_1(&VAR_5->transid_lock, VAR_3);

 return VAR_4;
}
