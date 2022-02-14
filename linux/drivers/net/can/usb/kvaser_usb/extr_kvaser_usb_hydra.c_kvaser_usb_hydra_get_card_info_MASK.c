
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvaser_usb {int nchannels; } ;
struct TYPE_2__ {int nchannels; } ;
struct kvaser_cmd {TYPE_1__ card_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvaser_usb*,int ,int) ;
 int FUNC_1 (struct kvaser_usb*,int ,struct kvaser_cmd*) ;
 int FUNC_2 (struct kvaser_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct kvaser_usb *VAR_4)
{
 struct kvaser_cmd VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0, -1);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(struct kvaser_cmd));
 VAR_6 = FUNC_1(VAR_4, VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->nchannels = VAR_5.card_info.nchannels;
 if (VAR_4->nchannels > VAR_3)
  return -VAR_2;

 return 0;
}
