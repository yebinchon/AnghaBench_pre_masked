
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hnae3_handle {int dummy; } ;
typedef enum hnae3_loop { ____Placeholder_hnae3_loop } hnae3_loop ;


 int VAR_0 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int) ;
 int FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, enum hnae3_loop VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, 1);
 FUNC_3(VAR_0, VAR_0 * 2);

 return VAR_4;
}
