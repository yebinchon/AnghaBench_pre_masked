
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gs_identify_mode {int mode; } ;
struct gs_can {int channel; int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gs_identify_mode*) ;
 struct gs_identify_mode* FUNC_2 (int,int ) ;
 struct gs_can* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,struct gs_identify_mode*,int,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_8, bool VAR_9)
{
 struct gs_can *VAR_10 = FUNC_3(VAR_8);
 struct gs_identify_mode *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);

 if (!VAR_11)
  return -VAR_0;

 if (VAR_9)
  VAR_11->mode = VAR_3;
 else
  VAR_11->mode = VAR_2;

 VAR_12 = FUNC_4(FUNC_0(VAR_10->iface),
        FUNC_5(FUNC_0(VAR_10->iface),
          0),
        VAR_4,
        VAR_5 | VAR_7 |
        VAR_6,
        VAR_10->channel,
        0,
        VAR_11,
        sizeof(*VAR_11),
        100);

 FUNC_1(VAR_11);

 return (VAR_12 > 0) ? 0 : VAR_12;
}
