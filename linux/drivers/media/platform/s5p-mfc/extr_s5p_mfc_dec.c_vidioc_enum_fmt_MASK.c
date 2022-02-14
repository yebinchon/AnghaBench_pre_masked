
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_fmtdesc {int index; int pixelformat; } ;
struct s5p_mfc_dev {TYPE_1__* variant; } ;
struct file {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; int versions; int fourcc; } ;
struct TYPE_4__ {int version_bit; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct s5p_mfc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, struct v4l2_fmtdesc *VAR_5,
       bool VAR_6)
{
 struct s5p_mfc_dev *VAR_7 = FUNC_1(VAR_4);
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); ++VAR_8) {
  if (VAR_6 && VAR_3[VAR_8].type != VAR_1)
   continue;
  else if (!VAR_6 && VAR_3[VAR_8].type != VAR_2)
   continue;
  else if ((VAR_7->variant->version_bit & VAR_3[VAR_8].versions) == 0)
   continue;

  if (VAR_9 == VAR_5->index)
   break;
  ++VAR_9;
 }
 if (VAR_8 == FUNC_0(VAR_3))
  return -VAR_0;
 VAR_5->pixelformat = VAR_3[VAR_8].fourcc;
 return 0;
}
