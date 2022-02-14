
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct arcnet_local {int * default_proto; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*,char*,int ) ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct net_device *VAR_2,
        unsigned short VAR_3, uint8_t VAR_4)
{
 struct arcnet_local *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(VAR_0, VAR_2,
     "tx: can't build header for encap %02Xh; load a protocol driver.\n",
     VAR_5->default_proto[VAR_4]);


 return 0;
}
