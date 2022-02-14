
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct r8152 {int intf; int control; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct r8152* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct r8152*,int ,int ,int ) ;
 int FUNC_6 (struct r8152*,int ,int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7, void *VAR_8)
{
 struct r8152 *VAR_9 = FUNC_4(VAR_7);
 struct sockaddr *VAR_10 = VAR_8;
 int VAR_11 = -VAR_3;

 if (!FUNC_0(VAR_10->sa_data))
  goto out1;

 VAR_11 = FUNC_7(VAR_9->intf);
 if (VAR_11 < 0)
  goto out1;

 FUNC_2(&VAR_9->control);

 FUNC_1(VAR_7->dev_addr, VAR_10->sa_data, VAR_7->addr_len);

 FUNC_5(VAR_9, VAR_4, VAR_5, VAR_1);
 FUNC_6(VAR_9, VAR_6, VAR_0, 8, VAR_10->sa_data);
 FUNC_5(VAR_9, VAR_4, VAR_5, VAR_2);

 FUNC_3(&VAR_9->control);

 FUNC_8(VAR_9->intf);
out1:
 return VAR_11;
}
