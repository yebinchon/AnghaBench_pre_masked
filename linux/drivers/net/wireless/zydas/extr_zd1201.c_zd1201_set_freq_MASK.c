
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {scalar_t__ e; short m; } ;


 int VAR_0 ;
 short FUNC_0 (short) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*) ;
 int FUNC_3 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
    struct iw_request_info *VAR_2, struct iw_freq *VAR_3, char *VAR_4)
{
 struct zd1201 *VAR_5 = FUNC_1(VAR_1);
 short VAR_6 = 0;
 int VAR_7;

 if (VAR_3->e == 0)
  VAR_6 = VAR_3->m;
 else
  VAR_6 = FUNC_0(VAR_3->m);

 VAR_7 = FUNC_3(VAR_5, VAR_0, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_5);

 return 0;
}
