
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pulse8 {int adap; } ;
struct cec_log_addrs {int dummy; } ;


 int FUNC_0 (int ,struct cec_log_addrs*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pulse8 *VAR_0,
       struct cec_log_addrs *VAR_1,
       u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->adap, VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_0->adap, VAR_2, 0);

 return 0;
}
