
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct gspca_dev {scalar_t__ sequence; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int ) ;
 struct gspca_dev* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1, unsigned int VAR_2)
{
 struct gspca_dev *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_3->sequence = 0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  FUNC_1(VAR_3, VAR_0);
 return VAR_4;
}
