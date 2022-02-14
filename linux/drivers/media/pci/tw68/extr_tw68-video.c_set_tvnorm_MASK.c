
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw68_tvnorm {int id; } ;
struct tw68_dev {int width; int height; struct tw68_tvnorm const* tvnorm; } ;


 int VAR_0 ;
 int FUNC_0 (struct tw68_dev*) ;

__attribute__((used)) static void FUNC_1(struct tw68_dev *VAR_1, const struct tw68_tvnorm *VAR_2)
{
 if (VAR_2 != VAR_1->tvnorm) {
  VAR_1->width = 720;
  VAR_1->height = (VAR_2->id & VAR_0) ? 480 : 576;
  VAR_1->tvnorm = VAR_2;
  FUNC_0(VAR_1);
 }
}
