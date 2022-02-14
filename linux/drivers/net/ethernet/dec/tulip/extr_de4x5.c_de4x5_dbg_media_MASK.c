
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct de4x5_private {scalar_t__ media; scalar_t__ c_media; scalar_t__ fdx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct de4x5_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_11)
{
    struct de4x5_private *VAR_12 = FUNC_0(VAR_11);

    if (VAR_12->media != VAR_12->c_media) {
 if (VAR_10 & VAR_4) {
     FUNC_1("%s: media is %s%s\n", VAR_11->name,
     (VAR_12->media == VAR_6 ? "unconnected, link down or incompatible connection" :
      (VAR_12->media == VAR_7 ? "TP" :
       (VAR_12->media == VAR_0 ? "TP/Nway" :
        (VAR_12->media == VAR_2 ? "BNC" :
         (VAR_12->media == VAR_1 ? "AUI" :
   (VAR_12->media == VAR_3 ? "BNC/AUI" :
    (VAR_12->media == VAR_5 ? "EXT SIA" :
     (VAR_12->media == VAR_8 ? "100Mb/s" :
      (VAR_12->media == VAR_9 ? "10Mb/s" :
       "???"
       ))))))))), (VAR_12->fdx?" full duplex.":"."));
 }
 VAR_12->c_media = VAR_12->media;
    }
}
