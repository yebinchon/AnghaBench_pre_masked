
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bpqdev {int bpq_list; int acpt_addr; int dest_addr; struct net_device* axdev; struct net_device* ethdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,int *) ;
 struct bpqdev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4)
{
 int VAR_5;
 struct net_device *VAR_6;
 struct bpqdev *VAR_7;

 VAR_6 = FUNC_0(sizeof(struct bpqdev), "bpq%d", VAR_1,
       VAR_3);
 if (!VAR_6)
  return -VAR_0;


 VAR_7 = FUNC_6(VAR_6);
 FUNC_1(VAR_4);
 VAR_7->ethdev = VAR_4;
 VAR_7->axdev = VAR_6;

 FUNC_3(VAR_7->dest_addr);
 FUNC_3(VAR_7->acpt_addr);

 VAR_5 = FUNC_7(VAR_6);
 if (VAR_5)
  goto error;


 FUNC_5(&VAR_7->bpq_list, &VAR_2);
 return 0;

 error:
 FUNC_2(VAR_4);
 FUNC_4(VAR_6);
 return VAR_5;

}
