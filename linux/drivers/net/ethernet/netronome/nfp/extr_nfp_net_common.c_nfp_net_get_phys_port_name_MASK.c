
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_vf; } ;
struct nfp_net {int id; scalar_t__ vnic_no_name; TYPE_1__ dp; scalar_t__ port; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,size_t,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct nfp_net *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;




 if (VAR_5->port)
  return -VAR_1;

 if (VAR_5->dp.is_vf || VAR_5->vnic_no_name)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_3, VAR_4, "n%d", VAR_5->id);
 if (VAR_6 >= VAR_4)
  return -VAR_0;

 return 0;
}
