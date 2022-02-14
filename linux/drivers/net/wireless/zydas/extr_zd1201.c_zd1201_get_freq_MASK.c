
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {short m; scalar_t__ e; } ;


 int VAR_0 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*,int ,short*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2, struct iw_freq *VAR_3, char *VAR_4)
{
 struct zd1201 *VAR_5 = FUNC_0(VAR_1);
 short VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_3->e = 0;
 VAR_3->m = VAR_6;

 return 0;
}
