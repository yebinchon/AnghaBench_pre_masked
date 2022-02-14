
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct gtp_net {int gtp_dev_list; } ;
struct gtp_dev {int list; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct gtp_dev*) ;
 int FUNC_2 (struct gtp_dev*,struct nlattr**) ;
 int FUNC_3 (struct gtp_dev*) ;
 int FUNC_4 (struct gtp_dev*,int) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 struct gtp_net* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 struct gtp_dev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net *VAR_5, struct net_device *VAR_6,
         struct nlattr *VAR_7[], struct nlattr *VAR_8[],
         struct netlink_ext_ack *VAR_9)
{
 struct gtp_dev *VAR_10;
 struct gtp_net *VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_8[VAR_1] && !VAR_8[VAR_2])
  return -VAR_0;

 VAR_10 = FUNC_8(VAR_6);

 VAR_13 = FUNC_2(VAR_10, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 if (!VAR_8[VAR_3])
  VAR_12 = 1024;
 else
  VAR_12 = FUNC_9(VAR_8[VAR_3]);

 VAR_13 = FUNC_4(VAR_10, VAR_12);
 if (VAR_13 < 0)
  goto out_encap;

 VAR_13 = FUNC_10(VAR_6);
 if (VAR_13 < 0) {
  FUNC_7(VAR_6, "failed to register new netdev %d\n", VAR_13);
  goto out_hashtable;
 }

 VAR_11 = FUNC_6(FUNC_0(VAR_6), VAR_4);
 FUNC_5(&VAR_10->list, &VAR_11->gtp_dev_list);

 FUNC_7(VAR_6, "registered new GTP interface\n");

 return 0;

out_hashtable:
 FUNC_3(VAR_10);
out_encap:
 FUNC_1(VAR_10);
 return VAR_13;
}
