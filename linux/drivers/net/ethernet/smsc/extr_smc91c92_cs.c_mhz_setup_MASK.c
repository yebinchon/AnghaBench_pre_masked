
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct pcmcia_device {char** prod_id; struct net_device* priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (struct pcmcia_device*,int,char**) ;
 int VAR_1 ;
 int FUNC_3 (struct pcmcia_device*,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_2)
{
    struct net_device *VAR_3 = VAR_2->priv;
    size_t VAR_4;
    u8 *VAR_5;
    int VAR_6;



    if ((VAR_2->prod_id[3]) &&
 (FUNC_0(VAR_3, VAR_2->prod_id[3]) == 0))
     return 0;



    if (!FUNC_3(VAR_2, VAR_0, VAR_1, VAR_3))
     return 0;


    VAR_6 = -1;
    VAR_4 = FUNC_2(VAR_2, 0x81, &VAR_5);
    if (VAR_5 && VAR_4 >= 13) {
     VAR_5[12] = '\0';
     if (FUNC_0(VAR_3, VAR_5) == 0)
      VAR_6 = 0;
    }
    FUNC_1(VAR_5);

    return VAR_6;
}
