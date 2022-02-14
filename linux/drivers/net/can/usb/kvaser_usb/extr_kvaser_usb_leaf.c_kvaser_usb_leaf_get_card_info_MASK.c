
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_4__ leaf; } ;
struct kvaser_usb {int nchannels; TYPE_1__ card_data; } ;
struct TYPE_6__ {int nchannels; } ;
struct TYPE_7__ {TYPE_2__ cardinfo; } ;
struct kvaser_cmd {TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvaser_usb*,int ,int ) ;
 int FUNC_1 (struct kvaser_usb*,int ,struct kvaser_cmd*) ;

__attribute__((used)) static int FUNC_2(struct kvaser_usb *VAR_6)
{
 struct kvaser_cmd VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_0, 0);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_1, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6->nchannels = VAR_7.u.cardinfo.nchannels;
 if (VAR_6->nchannels > VAR_4 ||
     (VAR_6->card_data.leaf.family == VAR_3 &&
      VAR_6->nchannels > VAR_5))
  return -VAR_2;

 return 0;
}
