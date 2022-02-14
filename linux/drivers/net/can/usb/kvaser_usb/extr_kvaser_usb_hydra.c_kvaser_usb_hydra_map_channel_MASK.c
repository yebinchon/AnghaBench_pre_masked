
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct kvaser_usb {int dummy; } ;
struct TYPE_3__ {int channel; int name; } ;
struct TYPE_4__ {int cmd_no; } ;
struct kvaser_cmd {TYPE_1__ map_ch_req; TYPE_2__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kvaser_cmd* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct kvaser_cmd*) ;
 int FUNC_2 (struct kvaser_cmd*) ;
 int FUNC_3 (struct kvaser_usb*,struct kvaser_cmd*) ;
 int FUNC_4 (struct kvaser_cmd*,int ) ;
 int FUNC_5 (struct kvaser_cmd*,int ) ;
 int FUNC_6 (struct kvaser_usb*,int ,struct kvaser_cmd*) ;
 int FUNC_7 (struct kvaser_usb*,struct kvaser_cmd*,int ) ;
 int FUNC_8 (int ,char const*) ;

__attribute__((used)) static int FUNC_9(struct kvaser_usb *VAR_5, u16 VAR_6,
     u8 VAR_7, const char *VAR_8)
{
 struct kvaser_cmd *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(1, sizeof(struct kvaser_cmd), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_8(VAR_9->map_ch_req.name, VAR_8);
 VAR_9->header.cmd_no = VAR_0;
 FUNC_4
    (VAR_9, VAR_4);
 VAR_9->map_ch_req.channel = VAR_7;

 FUNC_5(VAR_9, VAR_6);

 VAR_10 = FUNC_7(VAR_5, VAR_9, FUNC_2(VAR_9));
 if (VAR_10)
  goto end;

 VAR_10 = FUNC_6(VAR_5, VAR_1, VAR_9);
 if (VAR_10)
  goto end;

 VAR_10 = FUNC_3(VAR_5, VAR_9);
 if (VAR_10)
  goto end;

end:
 FUNC_1(VAR_9);

 return VAR_10;
}
