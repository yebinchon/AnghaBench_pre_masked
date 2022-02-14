
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* dev_addr; } ;
struct de4x5_private {char* setup_frame; scalar_t__ setup_f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int ) ;
 struct de4x5_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static char *
FUNC_2(struct net_device *VAR_6, int VAR_7)
{
    struct de4x5_private *VAR_8 = FUNC_1(VAR_6);
    int VAR_9;
    char *VAR_10 = VAR_8->setup_frame;


    if (VAR_7 == VAR_0) {
 FUNC_0(VAR_8->setup_frame, 0, VAR_5);
    }

    if (VAR_8->setup_f == VAR_3) {
 for (VAR_10=VAR_8->setup_frame+VAR_4, VAR_9=0; VAR_9<VAR_2; VAR_9++) {
     *(VAR_10 + VAR_9) = VAR_6->dev_addr[VAR_9];
     if (VAR_9 & 0x01) VAR_10 += 2;
 }
 *(VAR_8->setup_frame + (VAR_1 >> 3) - 3) = 0x80;
    } else {
 for (VAR_9=0; VAR_9<VAR_2; VAR_9++) {
     *(VAR_10 + (VAR_9&1)) = VAR_6->dev_addr[VAR_9];
     if (VAR_9 & 0x01) VAR_10 += 4;
 }
 for (VAR_9=0; VAR_9<VAR_2; VAR_9++) {
     *(VAR_10 + (VAR_9&1)) = (char) 0xff;
     if (VAR_9 & 0x01) VAR_10 += 4;
 }
    }

    return VAR_10;
}
