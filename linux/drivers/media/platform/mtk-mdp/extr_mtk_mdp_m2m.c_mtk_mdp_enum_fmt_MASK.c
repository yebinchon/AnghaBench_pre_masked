
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fmtdesc {int pixelformat; int index; } ;
struct mtk_mdp_fmt {int pixelformat; } ;


 int VAR_0 ;
 struct mtk_mdp_fmt* FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_fmtdesc *VAR_1, u32 VAR_2)
{
 const struct mtk_mdp_fmt *VAR_3;

 VAR_3 = FUNC_0(VAR_1->index, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->pixelformat = VAR_3->pixelformat;

 return 0;
}
