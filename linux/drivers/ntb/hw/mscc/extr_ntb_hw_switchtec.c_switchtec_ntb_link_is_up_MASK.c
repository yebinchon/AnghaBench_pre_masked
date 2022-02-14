
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct switchtec_ntb {int link_speed; int link_width; int link_is_up; } ;
struct ntb_dev {int dummy; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;


 struct switchtec_ntb* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static u64 FUNC_1(struct ntb_dev *VAR_0,
        enum ntb_speed *VAR_1,
        enum ntb_width *VAR_2)
{
 struct switchtec_ntb *VAR_3 = FUNC_0(VAR_0);

 if (VAR_1)
  *VAR_1 = VAR_3->link_speed;
 if (VAR_2)
  *VAR_2 = VAR_3->link_width;

 return VAR_3->link_is_up;
}
