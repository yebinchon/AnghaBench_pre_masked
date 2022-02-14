
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int vf_takeover; } ;
struct net_device {int name; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int,...) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 int FUNC_3 (struct net_device*,struct net_device*,int *,int *,int *) ;
 struct net_device_context* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ,struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4,
     struct net_device *VAR_5)
{
 struct net_device_context *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_5(VAR_4,
      VAR_3, VAR_5);
 if (VAR_7 != 0) {
  FUNC_1(VAR_4,
      "can not register netvsc VF receive handler (err = %d)\n",
      VAR_7);
  goto rx_handler_failed;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_5,
        ((void*)0), ((void*)0), ((void*)0));
 if (VAR_7 != 0) {
  FUNC_1(VAR_4,
      "can not set master device %s (err = %d)\n",
      VAR_5->name, VAR_7);
  goto upper_link_failed;
 }


 VAR_4->flags |= VAR_0;

 FUNC_7(&VAR_6->vf_takeover, VAR_2);

 FUNC_0(VAR_1, VAR_4);

 FUNC_2(VAR_4, "joined to %s\n", VAR_5->name);
 return 0;

upper_link_failed:
 FUNC_6(VAR_4);
rx_handler_failed:
 return VAR_7;
}
