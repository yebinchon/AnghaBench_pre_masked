
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_request {int state; } ;
struct tcs_group {scalar_t__ num_tcs; } ;
struct rsc_drv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcs_group* FUNC_0 (int) ;



 int VAR_2 ;
 int VAR_3 ;
 struct tcs_group* FUNC_1 (struct rsc_drv*,int) ;
 int FUNC_2 (struct rsc_drv*) ;

__attribute__((used)) static struct tcs_group *FUNC_3(struct rsc_drv *VAR_4,
      const struct tcs_request *VAR_5)
{
 int VAR_6, VAR_7;
 struct tcs_group *VAR_8;

 switch (VAR_5->state) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_3;
  break;
 case 129:
  VAR_6 = VAR_2;
  break;
 default:
  return FUNC_0(-VAR_1);
 }
 VAR_8 = FUNC_1(VAR_4, VAR_6);
 if (VAR_5->state == 130 && !VAR_8->num_tcs) {
  VAR_8 = FUNC_1(VAR_4, VAR_3);
  if (VAR_8->num_tcs) {
   VAR_7 = FUNC_2(VAR_4);
   if (VAR_7)
    return FUNC_0(VAR_7);
  }
 }

 return VAR_8;
}
