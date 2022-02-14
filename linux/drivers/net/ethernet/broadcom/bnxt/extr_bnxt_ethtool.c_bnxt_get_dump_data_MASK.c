
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_dump {int len; } ;
struct bnxt {int hwrm_spec_code; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,void*,int *) ;
 int FUNC_1 (void*,int ,int ) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ethtool_dump *VAR_2,
         void *VAR_3)
{
 struct bnxt *VAR_4 = FUNC_2(VAR_1);

 if (VAR_4->hwrm_spec_code < 0x10801)
  return -VAR_0;

 FUNC_1(VAR_3, 0, VAR_2->len);

 return FUNC_0(VAR_4, VAR_3, &VAR_2->len);
}
