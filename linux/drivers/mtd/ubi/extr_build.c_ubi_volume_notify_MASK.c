
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int dummy; } ;
struct ubi_notification {int vi; int di; } ;
struct ubi_device {int dummy; } ;






 int FUNC_0 (int *,int,struct ubi_notification*) ;
 int FUNC_1 (struct ubi_device*,int *) ;
 int FUNC_2 (struct ubi_device*,struct ubi_volume*,int *) ;
 int FUNC_3 (struct ubi_device*,char*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct ubi_device*) ;

int FUNC_5(struct ubi_device *VAR_1, struct ubi_volume *VAR_2, int VAR_3)
{
 int VAR_4;
 struct ubi_notification VAR_5;

 FUNC_1(VAR_1, &VAR_5.di);
 FUNC_2(VAR_1, VAR_2, &VAR_5.vi);

 switch (VAR_3) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4)
   FUNC_3(VAR_1, "Unable to write a new fastmap: %i", VAR_4);
 }

 return FUNC_0(&VAR_0, VAR_3, &VAR_5);
}
