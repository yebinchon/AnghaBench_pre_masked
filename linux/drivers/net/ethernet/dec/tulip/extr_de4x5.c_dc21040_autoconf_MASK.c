
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {int media; int tx_enable; int timeout; int autosense; int c_media; int local_state; } ;
typedef int s32 ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (struct net_device*,int,int,int,int,int,int,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,int const,int ,int (*) (struct net_device*)) ;
 struct de4x5_private* FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_5 (struct net_device*,int,int,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5)
{
    struct de4x5_private *VAR_6 = FUNC_4(VAR_5);
    u_long VAR_7 = VAR_5->base_addr;
    int VAR_8 = VAR_1;
    s32 VAR_9;

    switch (VAR_6->media) {
    case 131:
 VAR_2;
 VAR_6->tx_enable = 0;
 VAR_6->timeout = -1;
 FUNC_2(VAR_5);
 if ((VAR_6->autosense == VAR_0) || (VAR_6->autosense == 129)) {
     VAR_6->media = 129;
 } else if ((VAR_6->autosense == 136) || (VAR_6->autosense == 137) || (VAR_6->autosense == 135)) {
     VAR_6->media = 135;
 } else if (VAR_6->autosense == 133) {
     VAR_6->media = 133;
 } else {
     VAR_6->media = 130;
 }
 VAR_6->local_state = 0;
 VAR_8 = FUNC_6(VAR_5);
 break;

    case 129:
 VAR_8 = FUNC_0(VAR_5, 0x8f01, 0xffff, 0x0000, 3000, 135,
                                           128, VAR_4);
 break;

    case 128:
 VAR_8 = FUNC_3(VAR_5, 1000, 129, VAR_4, FUNC_6);
 break;

    case 136:
    case 137:
    case 135:
 VAR_8 = FUNC_0(VAR_5, 0x8f09, 0x0705, 0x0006, 3000, 133,
                                    134, VAR_3);
 break;

    case 134:
 VAR_8 = FUNC_3(VAR_5, 1000, 135, VAR_3, FUNC_6);
 break;

    case 133:
 VAR_8 = FUNC_0(VAR_5, 0x3041, 0x0000, 0x0006, 3000,
                                130, 132, VAR_3);
 break;

    case 132:
 VAR_8 = FUNC_3(VAR_5, 1000, 133, VAR_3, FUNC_6);
 break;

    case 130:

 FUNC_5(VAR_5, 0x8f01, 0xffff, 0x0000);
 if (VAR_6->media != VAR_6->c_media) {
     FUNC_1(VAR_5);
     VAR_6->c_media = VAR_6->media;
 }
 VAR_6->media = 131;
 VAR_6->tx_enable = 0;
 break;
    }

    return VAR_8;
}
