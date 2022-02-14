
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_frame {int c_width; int c_height; } ;
struct g2d_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

void FUNC_1(struct g2d_dev *VAR_4, struct g2d_frame *VAR_5,
     struct g2d_frame *VAR_6)
{
 FUNC_0(VAR_0, VAR_1);


 FUNC_0((VAR_5->c_width << 16) / VAR_6->c_width, VAR_2);
 FUNC_0((VAR_5->c_height << 16) / VAR_6->c_height, VAR_3);
}
