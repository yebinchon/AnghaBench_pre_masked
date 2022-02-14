
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_1__* ae_algo; } ;
struct hnae3_ae_ops {int (* get_strings ) (struct hnae3_handle*,int,int *) ;} ;
struct TYPE_2__ {struct hnae3_ae_ops* ops; } ;




 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 char* FUNC_1 (struct hnae3_handle*,char*) ;
 int FUNC_2 (struct hnae3_handle*,int,int *) ;
 int FUNC_3 (struct hnae3_handle*,int,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, u32 VAR_1, u8 *VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_0(VAR_0);
 const struct hnae3_ae_ops *VAR_4 = VAR_3->ae_algo->ops;
 char *VAR_5 = (char *)VAR_2;

 if (!VAR_4->get_strings)
  return;

 switch (VAR_1) {
 case 129:
  VAR_5 = FUNC_1(VAR_3, VAR_5);
  VAR_4->get_strings(VAR_3, VAR_1, (u8 *)VAR_5);
  break;
 case 128:
  VAR_4->get_strings(VAR_3, VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
