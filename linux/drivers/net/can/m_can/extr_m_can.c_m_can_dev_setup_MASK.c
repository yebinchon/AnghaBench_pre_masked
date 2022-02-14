
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int ctrlmode_supported; int * data_bittiming_const; int * bittiming_const; int do_get_berr_counter; int do_set_mode; } ;
struct m_can_classdev {int version; TYPE_2__* ops; int dev; TYPE_1__ can; int * data_timing; int * bit_timing; int napi; int is_peripheral; struct net_device* net; } ;
struct TYPE_4__ {int (* init ) (struct m_can_classdev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct m_can_classdev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct m_can_classdev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct net_device*,int *,int ,int ) ;
 int FUNC_5 (struct m_can_classdev*) ;

__attribute__((used)) static int FUNC_6(struct m_can_classdev *VAR_14)
{
 struct net_device *VAR_15 = VAR_14->net;
 int VAR_16;

 VAR_16 = FUNC_2(VAR_14);

 if (!VAR_16) {
  FUNC_1(VAR_14->dev, "Unsupported version number: %2d",
   VAR_16);
  return -VAR_5;
 }

 if (!VAR_14->is_peripheral)
  FUNC_4(VAR_15, &VAR_14->napi,
          VAR_12, VAR_6);


 VAR_14->version = VAR_16;
 VAR_14->can.do_set_mode = VAR_13;
 VAR_14->can.do_get_berr_counter = VAR_11;


 VAR_14->can.ctrlmode_supported = VAR_4 |
     VAR_3 |
     VAR_0 |
     VAR_1;


 switch (VAR_14->version) {
 case 30:

  FUNC_0(VAR_15, VAR_2);
  VAR_14->can.bittiming_const = VAR_14->bit_timing ?
   VAR_14->bit_timing : &VAR_7;

  VAR_14->can.data_bittiming_const = VAR_14->data_timing ?
      VAR_14->data_timing :
      &VAR_9;
  break;
 case 31:

  FUNC_0(VAR_15, VAR_2);
  VAR_14->can.bittiming_const = VAR_14->bit_timing ?
   VAR_14->bit_timing : &VAR_8;

  VAR_14->can.data_bittiming_const = VAR_14->data_timing ?
      VAR_14->data_timing :
      &VAR_10;
  break;
 case 32:
  VAR_14->can.bittiming_const = VAR_14->bit_timing ?
   VAR_14->bit_timing : &VAR_8;

  VAR_14->can.data_bittiming_const = VAR_14->data_timing ?
      VAR_14->data_timing :
      &VAR_10;

  VAR_14->can.ctrlmode_supported |=
      (FUNC_3(VAR_14)
      ? VAR_2
      : 0);
  break;
 default:
  FUNC_1(VAR_14->dev, "Unsupported version number: %2d",
   VAR_14->version);
  return -VAR_5;
 }

 if (VAR_14->ops->init)
  VAR_14->ops->init(VAR_14);

 return 0;
}
