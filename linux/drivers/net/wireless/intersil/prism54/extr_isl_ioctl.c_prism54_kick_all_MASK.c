
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_mlme {scalar_t__ id; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct obj_mlme*) ;
 struct obj_mlme* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ,struct obj_mlme*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_3, struct iw_request_info *VAR_4,
   struct iw_point *VAR_5, char *VAR_6)
{
 struct obj_mlme *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof (struct obj_mlme), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;


 VAR_7->id = 0;
 VAR_8 =
     FUNC_2(FUNC_3(VAR_3), VAR_0, 0, VAR_7);
 FUNC_0(VAR_7);

 return VAR_8;
}
