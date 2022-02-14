
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct v4l2_ctrl {scalar_t__ minimum; scalar_t__ maximum; int is_auto; int has_volatiles; int flags; scalar_t__ manual_mode_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct v4l2_ctrl*,int ) ;
 int FUNC_2 (struct v4l2_ctrl*) ;
 int FUNC_3 (unsigned int,struct v4l2_ctrl**) ;

void FUNC_4(unsigned VAR_4, struct v4l2_ctrl **VAR_5,
       u8 VAR_6, bool VAR_7)
{
 struct v4l2_ctrl *VAR_8 = VAR_5[0];
 u32 VAR_9 = 0;
 int VAR_10;

 FUNC_3(VAR_4, VAR_5);
 FUNC_0(VAR_4 <= 1);
 FUNC_0(VAR_6 < VAR_8->minimum || VAR_6 > VAR_8->maximum);
 FUNC_0(VAR_7 && !FUNC_1(VAR_8, VAR_3));
 VAR_8->is_auto = 1;
 VAR_8->has_volatiles = VAR_7;
 VAR_8->manual_mode_value = VAR_6;
 VAR_8->flags |= VAR_1;

 if (!FUNC_2(VAR_8))
  VAR_9 = VAR_0 |
   (VAR_7 ? VAR_2 : 0);

 for (VAR_10 = 1; VAR_10 < VAR_4; VAR_10++)
  if (VAR_5[VAR_10])
   VAR_5[VAR_10]->flags |= VAR_9;
}
