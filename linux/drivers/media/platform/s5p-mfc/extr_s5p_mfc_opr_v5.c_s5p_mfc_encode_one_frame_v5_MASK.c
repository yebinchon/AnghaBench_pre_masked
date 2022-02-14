
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {scalar_t__ state; int inst_no; TYPE_1__* src_fmt; struct s5p_mfc_dev* dev; } ;
struct TYPE_2__ {scalar_t__ fourcc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_ctx *VAR_9)
{
 struct s5p_mfc_dev *VAR_10 = VAR_9->dev;
 int VAR_11;

 if (VAR_9->src_fmt->fourcc == VAR_7)
  FUNC_0(VAR_10, 0, VAR_5);
 else if (VAR_9->src_fmt->fourcc == VAR_8)
  FUNC_0(VAR_10, 3, VAR_5);
 FUNC_1(VAR_9);

 if (VAR_9->state == VAR_0)
  VAR_11 = VAR_2;
 else
  VAR_11 = VAR_1;
 FUNC_0(VAR_10, ((VAR_11 & VAR_3) << VAR_4)
    | (VAR_9->inst_no), VAR_6);

 return 0;
}
