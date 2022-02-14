
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_device {int dummy; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ksz_device*,int ,int ,int) ;
 int FUNC_1 (struct ksz_device*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_4, int VAR_5,
           bool VAR_6)
{
 struct ksz_device *VAR_7 = VAR_4->priv;

 if (VAR_6) {
  FUNC_1(VAR_7, VAR_5, VAR_1,
        VAR_0, 1);
  FUNC_0(VAR_7, VAR_2, VAR_3, 1);
 } else {
  FUNC_0(VAR_7, VAR_2, VAR_3, 0);
  FUNC_1(VAR_7, VAR_5, VAR_1,
        VAR_0, 0);
 }

 return 0;
}
