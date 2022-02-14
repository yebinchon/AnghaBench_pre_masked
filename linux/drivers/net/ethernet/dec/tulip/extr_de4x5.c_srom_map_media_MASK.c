
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_2__ {int fdx; } ;
struct de4x5_private {int fdx; int infoblock_media; int media; int chipset; TYPE_1__ params; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 struct de4x5_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_7)
{
    struct de4x5_private *VAR_8 = FUNC_0(VAR_7);

    VAR_8->fdx = 0;
    if (VAR_8->infoblock_media == VAR_8->media)
      return 0;

    switch(VAR_8->infoblock_media) {
      case 128:
 if (!VAR_8->params.fdx) return -1;
 VAR_8->fdx = 1;


      case 129:
 if (VAR_8->params.fdx && !VAR_8->fdx) return -1;
 if ((VAR_8->chipset == VAR_2) || ((VAR_8->chipset & ~0x00ff) == VAR_3)) {
     VAR_8->media = VAR_6;
 } else {
     VAR_8->media = VAR_4;
 }
 break;

      case 131:
 VAR_8->media = VAR_1;
 break;

      case 130:
 VAR_8->media = VAR_0;
 break;

      case 132:
        if (!VAR_8->params.fdx) return -1;
 VAR_8->fdx = 1;


      case 134:
 if (VAR_8->params.fdx && !VAR_8->fdx) return -1;
 VAR_8->media = VAR_5;
 break;

      case 133:
 VAR_8->media = VAR_5;
 break;

      case 135:
 if (!VAR_8->params.fdx) return -1;
 VAR_8->fdx = 1;


      case 136:
 if (VAR_8->params.fdx && !VAR_8->fdx) return -1;
 VAR_8->media = VAR_5;
 break;

      case 137:
 VAR_8->media = 137;
 VAR_8->fdx = VAR_8->params.fdx;
 break;

      default:
 FUNC_1("%s: Bad media code [%d] detected in SROM!\n", VAR_7->name,
                                                   VAR_8->infoblock_media);
 return -1;
    }

    return 0;
}
