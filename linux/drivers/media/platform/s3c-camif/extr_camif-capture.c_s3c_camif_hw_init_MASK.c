
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_camif_variant {scalar_t__ ip_revision; scalar_t__ has_img_effect; } ;
struct camif_vp {int state; int * out_fmt; } ;
struct TYPE_2__ {int * sd; } ;
struct camif_dev {int colorfx_cb; int colorfx_cr; int colorfx; int test_pattern; TYPE_1__ sensor; struct s3c_camif_variant* variant; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct camif_vp*) ;
 int FUNC_1 (struct camif_vp*) ;
 int FUNC_2 (struct camif_dev*) ;
 int FUNC_3 (struct camif_dev*) ;
 int FUNC_4 (struct camif_dev*,int ,int ,int ) ;
 int FUNC_5 (struct camif_vp*) ;
 int FUNC_6 (struct camif_dev*) ;
 int FUNC_7 (struct camif_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct camif_dev *VAR_4, struct camif_vp *VAR_5)
{
 const struct s3c_camif_variant *VAR_6 = VAR_4->variant;

 if (VAR_4->sensor.sd == ((void*)0) || VAR_5->out_fmt == ((void*)0))
  return -VAR_0;

 if (VAR_6->ip_revision == VAR_1)
  FUNC_1(VAR_5);
 FUNC_2(VAR_4);
 FUNC_6(VAR_4);
 FUNC_3(VAR_4);
 FUNC_7(VAR_4, VAR_4->test_pattern);
 if (VAR_6->has_img_effect)
  FUNC_4(VAR_4, VAR_4->colorfx,
    VAR_4->colorfx_cr, VAR_4->colorfx_cb);
 if (VAR_6->ip_revision == VAR_2)
  FUNC_5(VAR_5);
 FUNC_0(VAR_5);
 VAR_5->state &= ~VAR_3;

 return 0;
}
