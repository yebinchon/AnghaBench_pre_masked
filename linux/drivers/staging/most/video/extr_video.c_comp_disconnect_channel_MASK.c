
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_video_dev {int v4l2_dev; int list; } ;
struct most_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct most_video_dev*) ;
 struct most_video_dev* FUNC_1 (struct most_interface*,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct most_interface *VAR_2,
       int VAR_3)
{
 struct most_video_dev *VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (!VAR_4) {
  FUNC_3("no such channel is linked\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_1);
 FUNC_2(&VAR_4->list);
 FUNC_5(&VAR_1);

 FUNC_0(VAR_4);
 FUNC_6(&VAR_4->v4l2_dev);
 FUNC_7(&VAR_4->v4l2_dev);
 return 0;
}
